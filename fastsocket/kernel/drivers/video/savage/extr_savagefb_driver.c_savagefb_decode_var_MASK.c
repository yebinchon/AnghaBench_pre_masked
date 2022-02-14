
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timings ;
struct xtimings {int Clock; int dblscan; int interlaced; int HDisplay; int HSyncStart; int HSyncEnd; int HTotal; int VDisplay; int VSyncStart; int VSyncEnd; int VTotal; int sync; } ;
struct savagefb_par {int depth; int vwidth; scalar_t__ chip; scalar_t__ MCLK; } ;
struct savage_reg {int CR67; unsigned char CR3A; int CR53; int CR31; int CR66; int CR58; int SR15; int SR18; int CR43; int CR45; int CR65; int CR40; int MMPR0; int MMPR1; int MMPR2; int MMPR3; int SR10; int SR11; unsigned int SR12; unsigned int SR13; unsigned int SR29; int CR42; int CR34; int* CRTC; int CR3B; int CR3C; int CR5D; int CR5E; int CR91; int CR51; int CR90; int MiscOutReg; int CR50; int CR33; int CR36; int CR68; int CR6F; int CR86; int CR88; int CRB0; scalar_t__ CR69; } ;
struct fb_var_screeninfo {unsigned int pixclock; int vmode; int xres; int right_margin; int hsync_len; int left_margin; int yres; int lower_margin; int vsync_len; int upper_margin; int bits_per_pixel; int xres_virtual; int sync; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int,int,int,int ,int,int,int,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_3 (scalar_t__,int,int,int,int ,int,int,int,int*,int*) ;
 int FUNC_4 (struct xtimings*,int ,int) ;
 int FUNC_5 (struct fb_var_screeninfo*,struct savagefb_par*,struct xtimings*,struct savage_reg*) ;
 int FUNC_6 (int,struct savagefb_par*) ;
 int FUNC_7 (int,int,struct savagefb_par*) ;

__attribute__((used)) static int FUNC_8(struct fb_var_screeninfo *VAR_4,
          struct savagefb_par *VAR_5,
          struct savage_reg *VAR_6)
{
 struct xtimings VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 unsigned int VAR_12, VAR_13, VAR_14;
 unsigned char VAR_15 = 0;
 unsigned int VAR_16 = VAR_4->pixclock;

 FUNC_0("savagefb_decode_var");

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));

 if (!VAR_16) VAR_16 = 10000;
 VAR_7.Clock = 1000000000 / VAR_16;
 if (VAR_7.Clock < 1) VAR_7.Clock = 1;
 VAR_7.dblscan = VAR_4->vmode & VAR_0;
 VAR_7.interlaced = VAR_4->vmode & VAR_1;
 VAR_7.HDisplay = VAR_4->xres;
 VAR_7.HSyncStart = VAR_7.HDisplay + VAR_4->right_margin;
 VAR_7.HSyncEnd = VAR_7.HSyncStart + VAR_4->hsync_len;
 VAR_7.HTotal = VAR_7.HSyncEnd + VAR_4->left_margin;
 VAR_7.VDisplay = VAR_4->yres;
 VAR_7.VSyncStart = VAR_7.VDisplay + VAR_4->lower_margin;
 VAR_7.VSyncEnd = VAR_7.VSyncStart + VAR_4->vsync_len;
 VAR_7.VTotal = VAR_7.VSyncEnd + VAR_4->upper_margin;
 VAR_7.sync = VAR_4->sync;


 VAR_5->depth = VAR_4->bits_per_pixel;
 VAR_5->vwidth = VAR_4->xres_virtual;

 if (VAR_4->bits_per_pixel == 16 && VAR_5->chip == VAR_3) {
  VAR_7.HDisplay *= 2;
  VAR_7.HSyncStart *= 2;
  VAR_7.HSyncEnd *= 2;
  VAR_7.HTotal *= 2;
 }





 FUNC_5(VAR_4, VAR_5, &VAR_7, VAR_6);



 VAR_9 = VAR_7.Clock;
 VAR_6->CR67 = 0x00;

 switch(VAR_4->bits_per_pixel) {
 case 8:
  if ((VAR_5->chip == VAR_2) && (VAR_9 >= 230000))
   VAR_6->CR67 = 0x10;
  else
   VAR_6->CR67 = 0x00;
  break;
 case 15:
  if (FUNC_1(VAR_5->chip) ||
      ((VAR_5->chip == VAR_2) && (VAR_9 >= 230000)))
   VAR_6->CR67 = 0x30;
  else
   VAR_6->CR67 = 0x20;
  break;
 case 16:
  if (FUNC_1(VAR_5->chip) ||
     ((VAR_5->chip == VAR_2) && (VAR_9 >= 230000)))
   VAR_6->CR67 = 0x50;
  else
   VAR_6->CR67 = 0x40;
  break;
 case 24:
  VAR_6->CR67 = 0x70;
  break;
 case 32:
  VAR_6->CR67 = 0xd0;
  break;
 }






 FUNC_7(0x3d4, 0x3a, VAR_5);
 VAR_15 = FUNC_6(0x3d5, VAR_5);
 if (1 )
  VAR_6->CR3A = (VAR_15 & 0x7f) | 0x15;
 else
  VAR_6->CR3A = VAR_15 | 0x95;

 VAR_6->CR53 = 0x00;
 VAR_6->CR31 = 0x8c;
 VAR_6->CR66 = 0x89;

 FUNC_7(0x3d4, 0x58, VAR_5);
 VAR_6->CR58 = FUNC_6(0x3d5, VAR_5) & 0x80;
 VAR_6->CR58 |= 0x13;

 VAR_6->SR15 = 0x03 | 0x80;
 VAR_6->SR18 = 0x00;
 VAR_6->CR43 = VAR_6->CR45 = VAR_6->CR65 = 0x00;

 FUNC_7(0x3d4, 0x40, VAR_5);
 VAR_6->CR40 = FUNC_6(0x3d5, VAR_5) & ~0x01;

 VAR_6->MMPR0 = 0x010400;
 VAR_6->MMPR1 = 0x00;
 VAR_6->MMPR2 = 0x0808;
 VAR_6->MMPR3 = 0x08080810;

 FUNC_2(VAR_9, 1, 1, 127, 0, 4, 180000, 360000, &VAR_12, &VAR_13, &VAR_14);


 if (VAR_5->MCLK <= 0) {
  VAR_6->SR10 = 255;
  VAR_6->SR11 = 255;
 } else {
  FUNC_3(VAR_5->MCLK, 1, 1, 31, 0, 3, 135000, 270000,
       &VAR_6->SR11, &VAR_6->SR10);


 }

 VAR_6->SR12 = (VAR_14 << 6) | (VAR_13 & 0x3f);
 VAR_6->SR13 = VAR_12 & 0xff;
 VAR_6->SR29 = (VAR_14 & 4) | (VAR_12 & 0x100) >> 5 | (VAR_13 & 0x40) >> 2;

 if (VAR_4->bits_per_pixel < 24)
  VAR_6->MMPR0 -= 0x8000;
 else
  VAR_6->MMPR0 -= 0x4000;

 if (VAR_7.interlaced)
  VAR_6->CR42 = 0x20;
 else
  VAR_6->CR42 = 0x00;

 VAR_6->CR34 = 0x10;

 VAR_10 = ((((VAR_7.HTotal >> 3) - 5) & 0x100) >> 8) |
  ((((VAR_7.HDisplay >> 3) - 1) & 0x100) >> 7) |
  ((((VAR_7.HSyncStart >> 3) - 1) & 0x100) >> 6) |
  ((VAR_7.HSyncStart & 0x800) >> 7);

 if ((VAR_7.HSyncEnd >> 3) - (VAR_7.HSyncStart >> 3) > 64)
  VAR_10 |= 0x08;
 if ((VAR_7.HSyncEnd >> 3) - (VAR_7.HSyncStart >> 3) > 32)
  VAR_10 |= 0x20;

 VAR_11 = (VAR_6->CRTC[0] + ((VAR_10 & 0x01) << 8) +
      VAR_6->CRTC[4] + ((VAR_10 & 0x10) << 4) + 1) / 2;

 if (VAR_11 - (VAR_6->CRTC[4] + ((VAR_10 & 0x10) << 4)) < 4) {
  if (VAR_6->CRTC[4] + ((VAR_10 & 0x10) << 4) + 4 <=
      VAR_6->CRTC[0] + ((VAR_10 & 0x01) << 8))
   VAR_11 = VAR_6->CRTC[4] + ((VAR_10 & 0x10) << 4) + 4;
  else
   VAR_11 = VAR_6->CRTC[0] + ((VAR_10 & 0x01) << 8) + 1;
 }

 VAR_6->CR3B = VAR_11 & 0xff;
 VAR_10 |= (VAR_11 & 0x100) >> 2;
 VAR_6->CR3C = (VAR_6->CRTC[0] + ((VAR_10 & 0x01) << 8)) / 2;
 VAR_6->CR5D = VAR_10;
 VAR_6->CR5E = (((VAR_7.VTotal - 2) & 0x400) >> 10) |
  (((VAR_7.VDisplay - 1) & 0x400) >> 9) |
  (((VAR_7.VSyncStart) & 0x400) >> 8) |
  (((VAR_7.VSyncStart) & 0x400) >> 6) | 0x40;
 VAR_8 = (VAR_4->xres_virtual * ((VAR_4->bits_per_pixel+7) / 8)) >> 3;
 VAR_6->CR91 = VAR_6->CRTC[19] = 0xff & VAR_8;
 VAR_6->CR51 = (0x300 & VAR_8) >> 4;
 VAR_6->CR90 = 0x80 | (VAR_8 >> 8);
 VAR_6->MiscOutReg |= 0x0c;



 if (VAR_4->bits_per_pixel <= 8)
  VAR_6->CR50 = 0;
 else if (VAR_4->bits_per_pixel <= 16)
  VAR_6->CR50 = 0x10;
 else
  VAR_6->CR50 = 0x30;

 if (VAR_4->xres_virtual <= 640)
  VAR_6->CR50 |= 0x40;
 else if (VAR_4->xres_virtual == 800)
  VAR_6->CR50 |= 0x80;
 else if (VAR_4->xres_virtual == 1024)
  VAR_6->CR50 |= 0x00;
 else if (VAR_4->xres_virtual == 1152)
  VAR_6->CR50 |= 0x01;
 else if (VAR_4->xres_virtual == 1280)
  VAR_6->CR50 |= 0xc0;
 else if (VAR_4->xres_virtual == 1600)
  VAR_6->CR50 |= 0x81;
 else
  VAR_6->CR50 |= 0xc1;

 if (VAR_5->chip == VAR_2)
  VAR_6->CR33 = 0x08;
 else
  VAR_6->CR33 = 0x20;

 VAR_6->CRTC[0x17] = 0xeb;

 VAR_6->CR67 |= 1;

 FUNC_7(0x3d4, 0x36, VAR_5);
 VAR_6->CR36 = FUNC_6(0x3d5, VAR_5);
 FUNC_7(0x3d4, 0x68, VAR_5);
 VAR_6->CR68 = FUNC_6(0x3d5, VAR_5);
 VAR_6->CR69 = 0;
 FUNC_7(0x3d4, 0x6f, VAR_5);
 VAR_6->CR6F = FUNC_6(0x3d5, VAR_5);
 FUNC_7(0x3d4, 0x86, VAR_5);
 VAR_6->CR86 = FUNC_6(0x3d5, VAR_5);
 FUNC_7(0x3d4, 0x88, VAR_5);
 VAR_6->CR88 = FUNC_6(0x3d5, VAR_5) | 0x08;
 FUNC_7(0x3d4, 0xb0, VAR_5);
 VAR_6->CRB0 = FUNC_6(0x3d5, VAR_5) | 0x80;

 return 0;
}
