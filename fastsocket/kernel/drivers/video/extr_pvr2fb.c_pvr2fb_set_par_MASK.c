
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2fb_par {int is_interlaced; int is_doublescan; int hsync_total; int vsync_total; int borderstart_h; int borderstart_v; int diwstart_h; int diwstart_v; int borderstop_h; int borderstop_v; int is_lowres; scalar_t__ disp_start; } ;
struct fb_var_screeninfo {int vmode; int left_margin; int xres; int right_margin; int hsync_len; int upper_margin; int yres; int lower_margin; int vsync_len; int sync; unsigned long yoffset; int bits_per_pixel; int xres_virtual; } ;
struct TYPE_2__ {unsigned long line_length; scalar_t__ smem_start; } ;
struct fb_info {TYPE_1__ fix; struct fb_var_screeninfo var; scalar_t__ par; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_10)
{
 struct pvr2fb_par *VAR_11 = (struct pvr2fb_par *)VAR_10->par;
 struct fb_var_screeninfo *VAR_12 = &VAR_10->var;
 unsigned long VAR_13;
 unsigned int VAR_14;
 VAR_8 = FUNC_1();
 if (VAR_8 == VAR_0 && VAR_9 != VAR_7)
  VAR_9 = VAR_7;

 VAR_12->vmode &= VAR_4;
 if (VAR_12->vmode & VAR_3 && VAR_9 != VAR_7)
  VAR_11->is_interlaced = 1;




 if (VAR_12->vmode & VAR_2 && VAR_9 == VAR_7)
  VAR_11->is_doublescan = 1;

 VAR_11->hsync_total = VAR_12->left_margin + VAR_12->xres + VAR_12->right_margin +
                    VAR_12->hsync_len;
 VAR_11->vsync_total = VAR_12->upper_margin + VAR_12->yres + VAR_12->lower_margin +
                    VAR_12->vsync_len;

 if (VAR_12->sync & VAR_1) {
  VAR_14 = VAR_11->vsync_total;
  if (VAR_11->is_interlaced)
   VAR_14 /= 2;
  if (VAR_14 > (VAR_6 + VAR_5)/2) {


   VAR_11->borderstart_h = 116;
   VAR_11->borderstart_v = 44;
  } else {

   VAR_11->borderstart_h = 126;
   VAR_11->borderstart_v = 18;
  }
 } else {






  VAR_11->borderstart_h = 126;
  VAR_11->borderstart_v = 40;
 }


 VAR_11->diwstart_h = VAR_11->borderstart_h + VAR_12->left_margin;
 VAR_11->diwstart_v = VAR_11->borderstart_v + VAR_12->upper_margin;
 VAR_11->borderstop_h = VAR_11->diwstart_h + VAR_12->xres +
       VAR_12->right_margin;
 VAR_11->borderstop_v = VAR_11->diwstart_v + VAR_12->yres +
       VAR_12->lower_margin;

 if (!VAR_11->is_interlaced)
  VAR_11->borderstop_v /= 2;
 if (VAR_10->var.xres < 640)
  VAR_11->is_lowres = 1;

 VAR_13 = FUNC_0(VAR_12->xres_virtual, VAR_12->bits_per_pixel);
 VAR_11->disp_start = VAR_10->fix.smem_start + (VAR_13 * VAR_12->yoffset) * VAR_13;
 VAR_10->fix.line_length = VAR_13;
 return 0;
}
