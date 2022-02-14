
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct fb_var_screeninfo {int xres; int xres_virtual; int bits_per_pixel; int yres; int accel_flags; int yres_virtual; int vmode; int yoffset; int hsync_len; int left_margin; int right_margin; int vsync_len; scalar_t__ xoffset; } ;
struct TYPE_3__ {int smem_len; scalar_t__ smem_start; } ;
struct fb_info {TYPE_1__ fix; } ;
struct TYPE_4__ {int vram_half_sam; scalar_t__ screen_end; scalar_t__ using_vram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct fb_info *VAR_4, struct fb_var_screeninfo *VAR_5, u_int VAR_6)
{
 u_int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;


 VAR_5->xres = (VAR_5->xres + 1) & ~1;




 VAR_5->xres_virtual = VAR_5->xres;
 VAR_5->xoffset = 0;

 if (VAR_3.using_vram)
  VAR_8 = VAR_3.vram_half_sam * 2;
 else
  VAR_8 = 16;
 VAR_7 = VAR_5->xres * VAR_5->bits_per_pixel * VAR_6 / 8;
 VAR_9 = VAR_5->xres * VAR_5->yres * VAR_5->bits_per_pixel / 8;





 if (VAR_9 > VAR_4->fix.smem_len)
  return -VAR_0;




 for (VAR_10 = VAR_4->fix.smem_len;
      VAR_11 = VAR_10 / VAR_7, VAR_9 <= VAR_10;
      VAR_10 -= VAR_8) {
  if (VAR_11 * VAR_7 == VAR_10)
   break;
 }
 VAR_11 *= VAR_6;

 if (VAR_5->accel_flags & VAR_1) {
  if (VAR_9 > VAR_10) {



   VAR_10 = VAR_4->fix.smem_len;
   VAR_5->yres_virtual = VAR_10 / (VAR_7 / VAR_6);
  } else
   VAR_5->yres_virtual = VAR_11;
 } else if (VAR_5->yres_virtual > VAR_11)
  VAR_5->yres_virtual = VAR_11;

 VAR_3.screen_end = VAR_4->fix.smem_start + VAR_10;




 if (VAR_5->yres > VAR_5->yres_virtual)
  VAR_5->yres = VAR_5->yres_virtual;

 if (VAR_5->vmode & VAR_2) {
  if (VAR_5->yoffset > VAR_5->yres_virtual)
   VAR_5->yoffset = VAR_5->yres_virtual;
 } else {
  if (VAR_5->yoffset + VAR_5->yres > VAR_5->yres_virtual)
   VAR_5->yoffset = VAR_5->yres_virtual - VAR_5->yres;
 }


 VAR_5->hsync_len = (VAR_5->hsync_len + 1) & ~1;
 if (VAR_5->vsync_len < 1)
  VAR_5->vsync_len = 1;

 return 0;
}
