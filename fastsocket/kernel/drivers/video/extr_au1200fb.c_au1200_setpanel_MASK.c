
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
struct panel_settings {int mode_clkcontrol; int mode_auxpll; int mode_toyclksrc; int mode_screen; int mode_horztiming; int mode_verttiming; int mode_pwmdiv; int mode_pwmhi; int mode_outmask; int mode_fifoctrl; int (* device_init ) () ;int Yres; int Xres; int name; int (* device_shutdown ) () ;} ;
struct TYPE_7__ {int cursorctrl; int cursorpos; int cursorcolor0; int cursorcolor1; int cursorcolor2; int cursorcolor3; } ;
struct TYPE_10__ {int winenable; int screen; int intstatus; int horztiming; int verttiming; int clkcontrol; int pwmdiv; int pwmhi; int outmask; int fifoctrl; int intenable; int backcolor; int colorkey; int colorkeymsk; TYPE_2__ hwc; TYPE_1__* window; } ;
struct TYPE_9__ {int mode_backcolor; int mode_colorkey; int mode_colorkeymsk; TYPE_3__* w; } ;
struct TYPE_8__ {int ypos; int xpos; } ;
struct TYPE_6__ {int winctrl0; int winctrl1; int winctrl2; int winbuf0; int winbuf1; int winbufctrl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;
 int VAR_6 ;
 TYPE_5__* VAR_7 ;
 struct panel_settings* VAR_8 ;
 int FUNC_5 (char*,int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_4__* VAR_9 ;

__attribute__((used)) static void FUNC_8 (struct panel_settings *VAR_10)
{



 uint32 VAR_11;


 VAR_11 = VAR_7->winenable;
 VAR_7->winenable = 0;
 FUNC_3();



 if (VAR_7->screen & VAR_3) {

  VAR_7->intstatus = VAR_2;
  while ((VAR_7->intstatus & VAR_2) == 0) {
   FUNC_3();
  }

  VAR_7->screen &= ~VAR_3;

  do {
   VAR_7->intstatus = VAR_7->intstatus;
   FUNC_3();

  } while ((VAR_7->intstatus & VAR_1) == 0);






  if (VAR_8->device_shutdown != ((void*)0))
   VAR_8->device_shutdown();
 }


 if (VAR_10 == ((void*)0))
  return;

 VAR_8 = VAR_10;

 FUNC_5("Panel(%s), %dx%d\n", VAR_8->name, VAR_8->Xres, VAR_8->Yres);




 if (!(VAR_8->mode_clkcontrol & VAR_0))
 {
  uint32 VAR_12;
  FUNC_4(VAR_8->mode_auxpll, VAR_4);
  VAR_12 = FUNC_2(VAR_5) & ~0x0000001f;
  VAR_12 |= VAR_8->mode_toyclksrc;
  FUNC_4(VAR_12, VAR_5);
 }




 VAR_7->screen = VAR_8->mode_screen;
 VAR_7->horztiming = VAR_8->mode_horztiming;
 VAR_7->verttiming = VAR_8->mode_verttiming;
 VAR_7->clkcontrol = VAR_8->mode_clkcontrol;
 VAR_7->pwmdiv = VAR_8->mode_pwmdiv;
 VAR_7->pwmhi = VAR_8->mode_pwmhi;
 VAR_7->outmask = VAR_8->mode_outmask;
 VAR_7->fifoctrl = VAR_8->mode_fifoctrl;
 FUNC_3();
 VAR_7->winenable = VAR_11;




 VAR_7->screen |= VAR_3;
 FUNC_3();


 if (VAR_8->device_init != ((void*)0)) VAR_8->device_init();


 VAR_7->intenable = 0;
 VAR_7->intstatus = ~0;
 VAR_7->backcolor = VAR_9->mode_backcolor;


 VAR_7->colorkey = VAR_9->mode_colorkey;
 VAR_7->colorkeymsk = VAR_9->mode_colorkeymsk;


 VAR_7->hwc.cursorctrl = 0;
 VAR_7->hwc.cursorpos = 0;
 VAR_7->hwc.cursorcolor0 = 0;
 VAR_7->hwc.cursorcolor1 = 0;
 VAR_7->hwc.cursorcolor2 = 0;
 VAR_7->hwc.cursorcolor3 = 0;
}
