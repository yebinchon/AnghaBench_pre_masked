
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vsync_start ;
struct neofb_par {int* Attribute; int* CRTC; int ExtCRTOffset; int ExtColorModeSelect; int ExtCRTDispAddr; int VerticalExt; int SysIfaceCntl1; int SysIfaceCntl2; int PanelDispCntlRegRead; int PanelDispCntlReg1; int GeneralLockReg; int ProgramVCLK; int PanelDispCntlReg2; int PanelDispCntlReg3; scalar_t__ NeoPanelWidth; int PanelVertCenterReg1; int PanelVertCenterReg2; int PanelVertCenterReg3; int PanelVertCenterReg4; int PanelVertCenterReg5; int PanelHorizCenterReg1; int PanelHorizCenterReg2; int PanelHorizCenterReg3; int PanelHorizCenterReg4; int PanelHorizCenterReg5; int NeoPanelHeight; int biosMode; int MiscOutReg; int VCLK3NumeratorLow; int VCLK3Denominator; int VCLK3NumeratorHigh; int state; scalar_t__ lcd_stretch; scalar_t__ external_display; scalar_t__ internal_display; scalar_t__ pci_burst; } ;
struct TYPE_5__ {int yres; int lower_margin; int vsync_len; int upper_margin; int bits_per_pixel; int xres_virtual; scalar_t__ xres; int pixclock; } ;
struct TYPE_4__ {int accel; int line_length; void* visual; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct neofb_par* par; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct fb_info*,TYPE_2__*) ;
 int FUNC_4 (struct fb_info*,struct neofb_par*,int ) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*,struct neofb_par*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct fb_info*,struct neofb_par*) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int,int) ;
 int FUNC_14 (int *,int,int) ;

__attribute__((used)) static int FUNC_15(struct fb_info *VAR_3)
{
 struct neofb_par *VAR_4 = VAR_3->par;
 unsigned char VAR_5;
 int VAR_6, VAR_7 = 0;
 int VAR_8;
 int VAR_9, VAR_10;
 int VAR_11, VAR_12;

 FUNC_0("neofb_set_par");

 FUNC_7();

 FUNC_10(1);

 VAR_11 = VAR_3->var.yres + VAR_3->var.lower_margin;
 VAR_12 = VAR_11 + VAR_3->var.vsync_len + VAR_3->var.upper_margin;






 if (FUNC_9(&VAR_3->var, VAR_4))
  return -VAR_0;





 VAR_4->Attribute[16] = 0x01;

 switch (VAR_3->var.bits_per_pixel) {
 case 8:
  VAR_4->CRTC[0x13] = VAR_3->var.xres_virtual >> 3;
  VAR_4->ExtCRTOffset = VAR_3->var.xres_virtual >> 11;
  VAR_4->ExtColorModeSelect = 0x11;
  break;
 case 16:
  VAR_4->CRTC[0x13] = VAR_3->var.xres_virtual >> 2;
  VAR_4->ExtCRTOffset = VAR_3->var.xres_virtual >> 10;
  VAR_4->ExtColorModeSelect = 0x13;
  break;
 case 24:
  VAR_4->CRTC[0x13] = (VAR_3->var.xres_virtual * 3) >> 3;
  VAR_4->ExtCRTOffset = (VAR_3->var.xres_virtual * 3) >> 11;
  VAR_4->ExtColorModeSelect = 0x14;
  break;







 default:
  break;
 }

 VAR_4->ExtCRTDispAddr = 0x10;


 VAR_4->VerticalExt = (((VAR_12 - 2) & 0x400) >> 10)
     | (((VAR_3->var.yres - 1) & 0x400) >> 9)
     | (((VAR_11) & 0x400) >> 8)
     | (((VAR_11) & 0x400) >> 7);


 if (VAR_4->pci_burst)
  VAR_4->SysIfaceCntl1 = 0x30;
 else
  VAR_4->SysIfaceCntl1 = 0x00;

 VAR_4->SysIfaceCntl2 = 0xc0;


 VAR_4->PanelDispCntlRegRead = 1;


 VAR_4->PanelDispCntlReg1 = 0x00;
 if (VAR_4->internal_display)
  VAR_4->PanelDispCntlReg1 |= 0x02;
 if (VAR_4->external_display)
  VAR_4->PanelDispCntlReg1 |= 0x01;


 if (VAR_4->PanelDispCntlReg1 == 0x00) {

  VAR_4->PanelDispCntlReg1 = FUNC_12(((void*)0), 0x20) & 0x03;
 }


 switch (VAR_3->var.xres) {
 case 1280:
  VAR_4->PanelDispCntlReg1 |= 0x60;
  break;
 case 1024:
  VAR_4->PanelDispCntlReg1 |= 0x40;
  break;
 case 800:
  VAR_4->PanelDispCntlReg1 |= 0x20;
  break;
 case 640:
 default:
  break;
 }


 switch (VAR_4->PanelDispCntlReg1 & 0x03) {
 case 0x01:
  VAR_4->GeneralLockReg = 0x00;

  VAR_4->ProgramVCLK = 1;
  break;
 case 0x02:
 case 0x03:
  VAR_4->GeneralLockReg = 0x01;

  VAR_4->ProgramVCLK = 0;
  break;
 }







 VAR_4->PanelDispCntlReg2 = 0x00;
 VAR_4->PanelDispCntlReg3 = 0x00;

 if (VAR_4->lcd_stretch && (VAR_4->PanelDispCntlReg1 == 0x02) &&
     (VAR_3->var.xres != VAR_4->NeoPanelWidth)) {
  switch (VAR_3->var.xres) {
  case 320:
  case 400:
  case 640:
  case 800:
  case 1024:
   VAR_8 = 1;
   VAR_4->PanelDispCntlReg2 |= 0xC6;
   break;
  default:
   VAR_8 = 0;

  }
 } else
  VAR_8 = 0;





 VAR_4->PanelVertCenterReg1 = 0x00;
 VAR_4->PanelVertCenterReg2 = 0x00;
 VAR_4->PanelVertCenterReg3 = 0x00;
 VAR_4->PanelVertCenterReg4 = 0x00;
 VAR_4->PanelVertCenterReg5 = 0x00;
 VAR_4->PanelHorizCenterReg1 = 0x00;
 VAR_4->PanelHorizCenterReg2 = 0x00;
 VAR_4->PanelHorizCenterReg3 = 0x00;
 VAR_4->PanelHorizCenterReg4 = 0x00;
 VAR_4->PanelHorizCenterReg5 = 0x00;


 if (VAR_4->PanelDispCntlReg1 & 0x02) {
  if (VAR_3->var.xres == VAR_4->NeoPanelWidth) {




  } else {
   VAR_4->PanelDispCntlReg2 |= 0x01;
   VAR_4->PanelDispCntlReg3 |= 0x10;


   if (!VAR_8) {
    VAR_9 =
        ((VAR_4->NeoPanelWidth -
          VAR_3->var.xres) >> 4) - 1;
    VAR_10 =
        ((VAR_4->NeoPanelHeight -
          VAR_3->var.yres) >> 1) - 2;
   } else {

    VAR_9 = 0;
    VAR_10 = 0;
   }

   switch (VAR_3->var.xres) {
   case 320:
    VAR_4->PanelHorizCenterReg3 = VAR_9;
    VAR_4->PanelVertCenterReg2 = VAR_10;
    break;
   case 400:
    VAR_4->PanelHorizCenterReg4 = VAR_9;
    VAR_4->PanelVertCenterReg1 = VAR_10;
    break;
   case 640:
    VAR_4->PanelHorizCenterReg1 = VAR_9;
    VAR_4->PanelVertCenterReg3 = VAR_10;
    break;
   case 800:
    VAR_4->PanelHorizCenterReg2 = VAR_9;
    VAR_4->PanelVertCenterReg4 = VAR_10;
    break;
   case 1024:
    VAR_4->PanelHorizCenterReg5 = VAR_9;
    VAR_4->PanelVertCenterReg5 = VAR_10;
    break;
   case 1280:
   default:

    break;
   }
  }
 }

 VAR_4->biosMode =
     FUNC_5(VAR_3->var.xres, VAR_3->var.yres,
   VAR_3->var.bits_per_pixel);





 FUNC_4(VAR_3, VAR_4, FUNC_1(VAR_3->var.pixclock));


 VAR_4->MiscOutReg |= 0x0C;





 FUNC_14(((void*)0), 0x15, 0x00);


 FUNC_14(((void*)0), 0x0A, VAR_4->GeneralLockReg);
 VAR_5 = FUNC_12(((void*)0), 0x90);
 switch (VAR_3->fix.accel) {
 case 136:
  VAR_5 &= 0xF0;
  VAR_5 |= (VAR_4->ExtColorModeSelect & ~0xF0);
  break;
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_5 &= 0x70;
  VAR_5 |= (VAR_4->ExtColorModeSelect & ~0x70);
  break;
 }

 FUNC_14(((void*)0), 0x90, VAR_5);
 VAR_5 = FUNC_12(((void*)0), 0x25);
 VAR_5 &= 0x39;
 FUNC_14(((void*)0), 0x25, VAR_5);





 FUNC_2(200);



 FUNC_11(VAR_3, VAR_4);


 switch (VAR_3->var.bits_per_pixel) {
 case 8:

  VAR_3->fix.visual = VAR_1;
  break;
 case 16:

  VAR_3->fix.visual = VAR_2;

  for (VAR_6 = 0; VAR_6 < 64; VAR_6++) {
   FUNC_8(VAR_6, 0x3c8);

   FUNC_8(VAR_6 << 1, 0x3c9);
   FUNC_8(VAR_6, 0x3c9);
   FUNC_8(VAR_6 << 1, 0x3c9);
  }
  break;
 case 24:




  VAR_3->fix.visual = VAR_2;

  for (VAR_6 = 0; VAR_6 < 256; VAR_6++) {
   FUNC_8(VAR_6, 0x3c8);

   FUNC_8(VAR_6, 0x3c9);
   FUNC_8(VAR_6, 0x3c9);
   FUNC_8(VAR_6, 0x3c9);
  }
  break;
 }

 FUNC_14(((void*)0), 0x0E, VAR_4->ExtCRTDispAddr);
 FUNC_14(((void*)0), 0x0F, VAR_4->ExtCRTOffset);
 VAR_5 = FUNC_12(((void*)0), 0x10);
 VAR_5 &= 0x0F;
 VAR_5 |= (VAR_4->SysIfaceCntl1 & ~0x0F);
 FUNC_14(((void*)0), 0x10, VAR_5);

 FUNC_14(((void*)0), 0x11, VAR_4->SysIfaceCntl2);
 FUNC_14(((void*)0), 0x15, 0 );
 FUNC_14(((void*)0), 0x16, 0 );

 VAR_5 = FUNC_12(((void*)0), 0x20);
 switch (VAR_3->fix.accel) {
 case 136:
  VAR_5 &= 0xFC;
  VAR_5 |= (VAR_4->PanelDispCntlReg1 & ~0xFC);
  break;
 case 135:
 case 134:
 case 133:
 case 132:
  VAR_5 &= 0xDC;
  VAR_5 |= (VAR_4->PanelDispCntlReg1 & ~0xDC);
  break;
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_5 &= 0x98;
  VAR_5 |= (VAR_4->PanelDispCntlReg1 & ~0x98);
  break;
 }
 FUNC_14(((void*)0), 0x20, VAR_5);

 VAR_5 = FUNC_12(((void*)0), 0x25);
 VAR_5 &= 0x38;
 VAR_5 |= (VAR_4->PanelDispCntlReg2 & ~0x38);
 FUNC_14(((void*)0), 0x25, VAR_5);

 if (VAR_3->fix.accel != 136) {
  VAR_5 = FUNC_12(((void*)0), 0x30);
  VAR_5 &= 0xEF;
  VAR_5 |= (VAR_4->PanelDispCntlReg3 & ~0xEF);
  FUNC_14(((void*)0), 0x30, VAR_5);
 }

 FUNC_14(((void*)0), 0x28, VAR_4->PanelVertCenterReg1);
 FUNC_14(((void*)0), 0x29, VAR_4->PanelVertCenterReg2);
 FUNC_14(((void*)0), 0x2a, VAR_4->PanelVertCenterReg3);

 if (VAR_3->fix.accel != 136) {
  FUNC_14(((void*)0), 0x32, VAR_4->PanelVertCenterReg4);
  FUNC_14(((void*)0), 0x33, VAR_4->PanelHorizCenterReg1);
  FUNC_14(((void*)0), 0x34, VAR_4->PanelHorizCenterReg2);
  FUNC_14(((void*)0), 0x35, VAR_4->PanelHorizCenterReg3);
 }

 if (VAR_3->fix.accel == 132)
  FUNC_14(((void*)0), 0x36, VAR_4->PanelHorizCenterReg4);

 if (VAR_3->fix.accel == 131 ||
     VAR_3->fix.accel == 130 ||
     VAR_3->fix.accel == 129 ||
     VAR_3->fix.accel == 128) {
  FUNC_14(((void*)0), 0x36, VAR_4->PanelHorizCenterReg4);
  FUNC_14(((void*)0), 0x37, VAR_4->PanelVertCenterReg5);
  FUNC_14(((void*)0), 0x38, VAR_4->PanelHorizCenterReg5);

  VAR_7 = 1;
 }


 if (VAR_4->ProgramVCLK && ((FUNC_12(((void*)0), 0x9B) != VAR_4->VCLK3NumeratorLow)
     || (FUNC_12(((void*)0), 0x9F) != VAR_4->VCLK3Denominator)
     || (VAR_7 && ((FUNC_12(((void*)0), 0x8F) & ~0x0f)
        != (VAR_4->VCLK3NumeratorHigh &
            ~0x0F))))) {
  FUNC_14(((void*)0), 0x9B, VAR_4->VCLK3NumeratorLow);
  if (VAR_7) {
   VAR_5 = FUNC_12(((void*)0), 0x8F);
   VAR_5 &= 0x0F;
   VAR_5 |= (VAR_4->VCLK3NumeratorHigh & ~0x0F);
   FUNC_14(((void*)0), 0x8F, VAR_5);
  }
  FUNC_14(((void*)0), 0x9F, VAR_4->VCLK3Denominator);
 }

 if (VAR_4->biosMode)
  FUNC_13(((void*)0), 0x23, VAR_4->biosMode);

 FUNC_14(((void*)0), 0x93, 0xc0);


 if (VAR_3->fix.accel == 131 ||
     VAR_3->fix.accel == 130 ||
     VAR_3->fix.accel == 129 ||
     VAR_3->fix.accel == 128) {
  FUNC_13(((void*)0), 0x70, VAR_4->VerticalExt);
 }

 FUNC_10(0);


 FUNC_6(&VAR_4->state);

 VAR_3->fix.line_length =
     VAR_3->var.xres_virtual * (VAR_3->var.bits_per_pixel >> 3);

 switch (VAR_3->fix.accel) {
  case 131:
  case 130:
  case 129:
  case 128:
   FUNC_3(VAR_3, &VAR_3->var);
   break;
  default:
   break;
 }
 return 0;
}
