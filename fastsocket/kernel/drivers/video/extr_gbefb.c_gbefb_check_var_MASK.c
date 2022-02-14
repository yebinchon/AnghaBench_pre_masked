
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gbe_timing_info {scalar_t__ vsync_start; scalar_t__ vsync_end; scalar_t__ hsync_start; scalar_t__ hsync_end; scalar_t__ height; scalar_t__ vtotal; scalar_t__ width; scalar_t__ htotal; } ;
struct TYPE_10__ {int length; scalar_t__ msb_right; int offset; } ;
struct TYPE_9__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_8__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_7__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres; int yres; int pixclock; int xres_virtual; int yres_virtual; int vmode; scalar_t__ vsync_len; scalar_t__ hsync_len; scalar_t__ lower_margin; scalar_t__ upper_margin; scalar_t__ right_margin; scalar_t__ left_margin; TYPE_5__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; scalar_t__ grayscale; int yoffset; int xoffset; } ;
struct TYPE_6__ {int yoffset; int xoffset; } ;
struct fb_info {TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fb_var_screeninfo*,struct gbe_timing_info*) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_7, struct fb_info *VAR_8)
{
 unsigned int VAR_9;
 struct gbe_timing_info VAR_10;
 int VAR_11;


 if (VAR_7->bits_per_pixel <= 8)
  VAR_7->bits_per_pixel = 8;
 else if (VAR_7->bits_per_pixel <= 16)
  VAR_7->bits_per_pixel = 16;
 else if (VAR_7->bits_per_pixel <= 32)
  VAR_7->bits_per_pixel = 32;
 else
  return -VAR_0;



 if ((VAR_7->xres * VAR_7->yres * VAR_7->bits_per_pixel) & 4095)
  return -VAR_0;

 VAR_7->grayscale = 0;

 VAR_11 = FUNC_0(VAR_7, &VAR_10);
 VAR_7->pixclock = VAR_11;
 if (VAR_11 < 0)
  return -VAR_0;


 if (VAR_7->xres > VAR_7->xres_virtual || (!VAR_6 && !VAR_5))
  VAR_7->xres_virtual = VAR_7->xres;
 if (VAR_7->yres > VAR_7->yres_virtual || (!VAR_6 && !VAR_5))
  VAR_7->yres_virtual = VAR_7->yres;

 if (VAR_7->vmode & VAR_2) {
  VAR_7->vmode |= VAR_3;
  VAR_7->xoffset = VAR_8->var.xoffset;
  VAR_7->yoffset = VAR_8->var.yoffset;
 }


 VAR_7->grayscale = 0;


 VAR_9 = VAR_7->xres_virtual * VAR_7->bits_per_pixel / 8;
 if (VAR_9 * VAR_7->yres_virtual > VAR_4)
  return -VAR_1;

 switch (VAR_7->bits_per_pixel) {
 case 8:
  VAR_7->red.offset = 0;
  VAR_7->red.length = 8;
  VAR_7->green.offset = 0;
  VAR_7->green.length = 8;
  VAR_7->blue.offset = 0;
  VAR_7->blue.length = 8;
  VAR_7->transp.offset = 0;
  VAR_7->transp.length = 0;
  break;
 case 16:
  VAR_7->red.offset = 10;
  VAR_7->red.length = 5;
  VAR_7->green.offset = 5;
  VAR_7->green.length = 5;
  VAR_7->blue.offset = 0;
  VAR_7->blue.length = 5;
  VAR_7->transp.offset = 0;
  VAR_7->transp.length = 0;
  break;
 case 32:
  VAR_7->red.offset = 24;
  VAR_7->red.length = 8;
  VAR_7->green.offset = 16;
  VAR_7->green.length = 8;
  VAR_7->blue.offset = 8;
  VAR_7->blue.length = 8;
  VAR_7->transp.offset = 0;
  VAR_7->transp.length = 8;
  break;
 }
 VAR_7->red.msb_right = 0;
 VAR_7->green.msb_right = 0;
 VAR_7->blue.msb_right = 0;
 VAR_7->transp.msb_right = 0;

 VAR_7->left_margin = VAR_10.htotal - VAR_10.hsync_end;
 VAR_7->right_margin = VAR_10.hsync_start - VAR_10.width;
 VAR_7->upper_margin = VAR_10.vtotal - VAR_10.vsync_end;
 VAR_7->lower_margin = VAR_10.vsync_start - VAR_10.height;
 VAR_7->hsync_len = VAR_10.hsync_end - VAR_10.hsync_start;
 VAR_7->vsync_len = VAR_10.vsync_end - VAR_10.vsync_start;

 return 0;
}
