
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct omapfb_plane_struct {scalar_t__ color_mode; size_t idx; struct omapfb_device* fbdev; } ;
struct TYPE_10__ {TYPE_4__* region; } ;
struct omapfb_device {TYPE_5__ mem_desc; struct lcd_panel* panel; } ;
struct lcd_panel {int x_res; int y_res; int pixel_clock; int vsw; int hsw; int vbp; int vfp; int hbp; int hfp; } ;
struct TYPE_8__ {int length; scalar_t__ msb_right; scalar_t__ offset; } ;
struct TYPE_7__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_6__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; int rotate; int xres; int yres; int xres_virtual; int yres_virtual; int xoffset; int yoffset; int height; int width; int pixclock; scalar_t__ sync; int vmode; int vsync_len; int hsync_len; int lower_margin; int upper_margin; int right_margin; int left_margin; scalar_t__ grayscale; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct fb_info {struct omapfb_plane_struct* par; } ;
struct TYPE_9__ {unsigned long size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct omapfb_plane_struct*,struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_5,
        struct fb_var_screeninfo *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 struct omapfb_plane_struct *VAR_14 = VAR_5->par;
 struct omapfb_device *VAR_15 = VAR_14->fbdev;
 struct lcd_panel *VAR_16 = VAR_15->panel;

 if (FUNC_1(VAR_14, VAR_6) < 0)
  return -VAR_0;

 VAR_7 = VAR_6->bits_per_pixel;
 if (VAR_14->color_mode == VAR_2)
  VAR_7 = 16;

 switch (VAR_6->rotate) {
 case 0:
 case 180:
  VAR_10 = VAR_3;
  VAR_11 = VAR_16->x_res;
  VAR_12 = VAR_4;
  VAR_13 = VAR_16->y_res;
  if (FUNC_0()) {
   VAR_6->xres = VAR_16->x_res;
   VAR_6->yres = VAR_16->y_res;
  }
  break;
 case 90:
 case 270:
  VAR_10 = VAR_4;
  VAR_11 = VAR_16->y_res;
  VAR_12 = VAR_3;
  VAR_13 = VAR_16->x_res;
  if (FUNC_0()) {
   VAR_6->xres = VAR_16->y_res;
   VAR_6->yres = VAR_16->x_res;
  }
  break;
 default:
  return -VAR_0;
 }

 if (VAR_6->xres < VAR_10)
  VAR_6->xres = VAR_10;
 if (VAR_6->yres < VAR_12)
  VAR_6->yres = VAR_12;
 if (VAR_6->xres > VAR_11)
  VAR_6->xres = VAR_11;
 if (VAR_6->yres > VAR_13)
  VAR_6->yres = VAR_13;

 if (VAR_6->xres_virtual < VAR_6->xres)
  VAR_6->xres_virtual = VAR_6->xres;
 if (VAR_6->yres_virtual < VAR_6->yres)
  VAR_6->yres_virtual = VAR_6->yres;
 VAR_8 = VAR_15->mem_desc.region[VAR_14->idx].size;
 VAR_9 = VAR_6->xres_virtual * VAR_7 / 8;
 if (VAR_9 * VAR_6->yres_virtual > VAR_8) {

  VAR_9 = VAR_8 / VAR_6->yres_virtual;
  VAR_6->xres_virtual = VAR_9 * 8 / VAR_7;
  if (VAR_6->xres_virtual < VAR_6->xres) {

   VAR_6->xres_virtual = VAR_6->xres;
   VAR_9 = VAR_6->xres * VAR_7 / 8;
   VAR_6->yres_virtual = VAR_8 / VAR_9;
  }

  if (VAR_6->xres_virtual < VAR_6->xres)
   VAR_6->xres = VAR_6->xres_virtual;
  if (VAR_6->yres_virtual < VAR_6->yres)
   VAR_6->yres = VAR_6->yres_virtual;
  if (VAR_6->xres < VAR_10 || VAR_6->yres < VAR_12)
   return -VAR_0;
 }
 if (VAR_6->xres + VAR_6->xoffset > VAR_6->xres_virtual)
  VAR_6->xoffset = VAR_6->xres_virtual - VAR_6->xres;
 if (VAR_6->yres + VAR_6->yoffset > VAR_6->yres_virtual)
  VAR_6->yoffset = VAR_6->yres_virtual - VAR_6->yres;

 if (VAR_14->color_mode == VAR_2) {
  VAR_6->red.offset = 8; VAR_6->red.length = 4;
      VAR_6->red.msb_right = 0;
  VAR_6->green.offset = 4; VAR_6->green.length = 4;
      VAR_6->green.msb_right = 0;
  VAR_6->blue.offset = 0; VAR_6->blue.length = 4;
      VAR_6->blue.msb_right = 0;
 } else {
  VAR_6->red.offset = 11; VAR_6->red.length = 5;
      VAR_6->red.msb_right = 0;
  VAR_6->green.offset = 5; VAR_6->green.length = 6;
      VAR_6->green.msb_right = 0;
  VAR_6->blue.offset = 0; VAR_6->blue.length = 5;
      VAR_6->blue.msb_right = 0;
 }

 VAR_6->height = -1;
 VAR_6->width = -1;
 VAR_6->grayscale = 0;


 VAR_6->pixclock = 10000000 / (VAR_16->pixel_clock / 100);
 VAR_6->left_margin = VAR_16->hfp;
 VAR_6->right_margin = VAR_16->hbp;
 VAR_6->upper_margin = VAR_16->vfp;
 VAR_6->lower_margin = VAR_16->vbp;
 VAR_6->hsync_len = VAR_16->hsw;
 VAR_6->vsync_len = VAR_16->vsw;


 VAR_6->vmode = VAR_1;
 VAR_6->sync = 0;

 return 0;
}
