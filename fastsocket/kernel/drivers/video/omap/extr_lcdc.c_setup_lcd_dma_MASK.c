
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int mirror; } ;
struct omapfb_plane_struct {TYPE_3__ info; } ;
struct fb_var_screeninfo {int rotate; } ;
struct TYPE_8__ {unsigned long vram_phys; unsigned long frame_offset; scalar_t__ color_mode; int xres; int bpp; int yres; int screen_width; TYPE_2__* fbdev; } ;
struct TYPE_6__ {int dev; TYPE_1__** fb_info; } ;
struct TYPE_5__ {struct fb_var_screeninfo var; struct omapfb_plane_struct* par; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;



 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*,unsigned long,int,int,int) ;
 TYPE_4__ VAR_1 ;
 int FUNC_3 (unsigned long,int,int,int const) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(void)
{
 static const int VAR_2[] = {
  0,
  128,
  130,
  0,
  129,
 };
 struct omapfb_plane_struct *VAR_3 = VAR_1.fbdev->fb_info[0]->par;
 struct fb_var_screeninfo *VAR_4 = &VAR_1.fbdev->fb_info[0]->var;
 unsigned long VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_5 = VAR_1.vram_phys + VAR_1.frame_offset;

 switch (VAR_4->rotate) {
 case 0:
  if (VAR_3->info.mirror || (VAR_5 & 3) ||
      VAR_1.color_mode == VAR_0 ||
      (VAR_1.xres & 1))
   VAR_6 = 2;
  else
   VAR_6 = 4;
  VAR_7 = VAR_1.xres * VAR_1.bpp / 8 / VAR_6;
  VAR_8 = VAR_1.yres;
  break;
 case 90:
 case 180:
 case 270:
  if (FUNC_1()) {
   FUNC_0();
  }
  VAR_6 = 2;
  VAR_7 = VAR_1.yres * VAR_1.bpp / 16;
  VAR_8 = VAR_1.xres;
  break;
 default:
  FUNC_0();
  return;
 }





 FUNC_3(VAR_5, VAR_7, VAR_8, VAR_2[VAR_6]);
 if (!FUNC_1()) {
  int VAR_9 = VAR_1.bpp;





  if (VAR_1.color_mode == VAR_0)
   VAR_9 = 16;

  FUNC_6(
   VAR_1.screen_width * VAR_9 / 8 / VAR_6);

  FUNC_5(VAR_4->rotate);
  FUNC_4(VAR_3->info.mirror);
 }
 FUNC_7();
}
