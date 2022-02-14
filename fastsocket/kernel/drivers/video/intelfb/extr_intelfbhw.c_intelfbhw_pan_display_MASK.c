
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int pan_offset; int pan_display; } ;
struct TYPE_3__ {int offset; } ;
struct intelfb_info {int pitch; TYPE_2__ vsync; TYPE_1__ fb; } ;
struct fb_var_screeninfo {int yoffset; scalar_t__ xres; scalar_t__ xres_virtual; scalar_t__ yres; scalar_t__ yres_virtual; int bits_per_pixel; int activate; int xoffset; } ;
struct fb_info {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intelfb_info* FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct intelfb_info*) ;

int FUNC_5(struct fb_var_screeninfo *VAR_3, struct fb_info *VAR_4)
{
 struct intelfb_info *VAR_5 = FUNC_1(VAR_4);
 u32 VAR_6, VAR_7, VAR_8;





 VAR_7 = FUNC_3(VAR_3->xoffset, 8);
 VAR_8 = VAR_3->yoffset;

 if ((VAR_7 + VAR_3->xres > VAR_3->xres_virtual) ||
     (VAR_8 + VAR_3->yres > VAR_3->yres_virtual))
  return -VAR_1;

 VAR_6 = (VAR_8 * VAR_5->pitch) +
   (VAR_7 * VAR_3->bits_per_pixel) / 8;

 VAR_6 += VAR_5->fb.offset << 12;

 VAR_5->vsync.pan_offset = VAR_6;
 if ((VAR_3->activate & VAR_2) &&
     !FUNC_4(VAR_5))
  VAR_5->vsync.pan_display = 1;
 else {
  VAR_5->vsync.pan_display = 0;
  FUNC_2(VAR_0, VAR_6);
 }

 return 0;
}
