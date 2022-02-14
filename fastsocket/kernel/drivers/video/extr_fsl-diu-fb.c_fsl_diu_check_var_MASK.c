
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int length; int offset; int msb_right; } ;
struct TYPE_8__ {int length; int offset; int msb_right; } ;
struct TYPE_7__ {int length; int offset; int msb_right; } ;
struct TYPE_10__ {int length; int offset; int msb_right; } ;
struct fb_var_screeninfo {unsigned long xres; unsigned long yres; unsigned long xres_virtual; unsigned long yres_virtual; scalar_t__ xoffset; scalar_t__ yoffset; int bits_per_pixel; unsigned long pixclock; unsigned long right_margin; unsigned long hsync_len; unsigned long left_margin; unsigned long lower_margin; unsigned long vsync_len; unsigned long upper_margin; int height; int width; int sync; int nonstd; scalar_t__ grayscale; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_5__ red; } ;
struct TYPE_6__ {scalar_t__ xres; scalar_t__ xres_virtual; scalar_t__ yres; scalar_t__ yres_virtual; } ;
struct fb_info {TYPE_1__ var; } ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct fb_var_screeninfo*,struct fb_info*) ;
 int VAR_2 ;
 int FUNC_2 (char*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_3,
    struct fb_info *VAR_4)
{
 unsigned long VAR_5, VAR_6;

 FUNC_2("check_var xres: %d\n", VAR_3->xres);
 FUNC_2("check_var yres: %d\n", VAR_3->yres);

 if (VAR_3->xres_virtual < VAR_3->xres)
  VAR_3->xres_virtual = VAR_3->xres;
 if (VAR_3->yres_virtual < VAR_3->yres)
  VAR_3->yres_virtual = VAR_3->yres;

 if (VAR_3->xoffset < 0)
  VAR_3->xoffset = 0;

 if (VAR_3->yoffset < 0)
  VAR_3->yoffset = 0;

 if (VAR_3->xoffset + VAR_4->var.xres > VAR_4->var.xres_virtual)
  VAR_3->xoffset = VAR_4->var.xres_virtual - VAR_4->var.xres;

 if (VAR_3->yoffset + VAR_4->var.yres > VAR_4->var.yres_virtual)
  VAR_3->yoffset = VAR_4->var.yres_virtual - VAR_4->var.yres;

 if ((VAR_3->bits_per_pixel != 32) && (VAR_3->bits_per_pixel != 24) &&
     (VAR_3->bits_per_pixel != 16))
  VAR_3->bits_per_pixel = VAR_2;

 switch (VAR_3->bits_per_pixel) {
 case 16:
  VAR_3->red.length = 5;
  VAR_3->red.offset = 11;
  VAR_3->red.msb_right = 0;

  VAR_3->green.length = 6;
  VAR_3->green.offset = 5;
  VAR_3->green.msb_right = 0;

  VAR_3->blue.length = 5;
  VAR_3->blue.offset = 0;
  VAR_3->blue.msb_right = 0;

  VAR_3->transp.length = 0;
  VAR_3->transp.offset = 0;
  VAR_3->transp.msb_right = 0;
  break;
 case 24:
  VAR_3->red.length = 8;
  VAR_3->red.offset = 0;
  VAR_3->red.msb_right = 0;

  VAR_3->green.length = 8;
  VAR_3->green.offset = 8;
  VAR_3->green.msb_right = 0;

  VAR_3->blue.length = 8;
  VAR_3->blue.offset = 16;
  VAR_3->blue.msb_right = 0;

  VAR_3->transp.length = 0;
  VAR_3->transp.offset = 0;
  VAR_3->transp.msb_right = 0;
  break;
 case 32:
  VAR_3->red.length = 8;
  VAR_3->red.offset = 16;
  VAR_3->red.msb_right = 0;

  VAR_3->green.length = 8;
  VAR_3->green.offset = 8;
  VAR_3->green.msb_right = 0;

  VAR_3->blue.length = 8;
  VAR_3->blue.offset = 0;
  VAR_3->blue.msb_right = 0;

  VAR_3->transp.length = 8;
  VAR_3->transp.offset = 24;
  VAR_3->transp.msb_right = 0;

  break;
 }




 if ((VAR_3->pixclock < VAR_1) || (VAR_3->pixclock > VAR_0)) {
  VAR_5 = VAR_3->xres + VAR_3->right_margin + VAR_3->hsync_len +
      VAR_3->left_margin;
  VAR_6 = VAR_3->yres + VAR_3->lower_margin + VAR_3->vsync_len +
      VAR_3->upper_margin;
  VAR_3->pixclock = (VAR_6 * VAR_5 * 6UL) / 100UL;
  VAR_3->pixclock = FUNC_0(VAR_3->pixclock);
  FUNC_2("pixclock set for 60Hz refresh = %u ps\n",
   VAR_3->pixclock);
 }

 VAR_3->height = -1;
 VAR_3->width = -1;
 VAR_3->grayscale = 0;


 VAR_3->sync |= VAR_3->nonstd;
 VAR_3->nonstd |= VAR_3->sync;

 FUNC_1(VAR_3, VAR_4);
 return 0;
}
