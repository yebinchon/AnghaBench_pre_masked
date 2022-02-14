
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_6__ {int length; int offset; } ;
struct TYPE_5__ {int offset; int length; } ;
struct fb_var_screeninfo {scalar_t__ pixclock; scalar_t__ bits_per_pixel; scalar_t__ xres; scalar_t__ yres; scalar_t__ xres_virtual; scalar_t__ yres_virtual; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct fb_info {struct drm_fb_helper* par; } ;
struct drm_framebuffer {scalar_t__ bits_per_pixel; scalar_t__ width; scalar_t__ height; } ;
struct drm_fb_helper {struct drm_framebuffer* fb; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;

int FUNC_2(struct fb_var_screeninfo *VAR_1,
       struct fb_info *VAR_2)
{
 struct drm_fb_helper *VAR_3 = VAR_2->par;
 struct drm_framebuffer *VAR_4 = VAR_3->fb;
 int VAR_5;

 if (VAR_1->pixclock != 0 || FUNC_1())
  return -VAR_0;


 if (VAR_1->bits_per_pixel > VAR_4->bits_per_pixel ||
     VAR_1->xres > VAR_4->width || VAR_1->yres > VAR_4->height ||
     VAR_1->xres_virtual > VAR_4->width || VAR_1->yres_virtual > VAR_4->height) {
  FUNC_0("fb userspace requested width/height/bpp is greater than current fb "
     "request %dx%d-%d (virtual %dx%d) > %dx%d-%d\n",
     VAR_1->xres, VAR_1->yres, VAR_1->bits_per_pixel,
     VAR_1->xres_virtual, VAR_1->yres_virtual,
     VAR_4->width, VAR_4->height, VAR_4->bits_per_pixel);
  return -VAR_0;
 }

 switch (VAR_1->bits_per_pixel) {
 case 16:
  VAR_5 = (VAR_1->green.length == 6) ? 16 : 15;
  break;
 case 32:
  VAR_5 = (VAR_1->transp.length > 0) ? 32 : 24;
  break;
 default:
  VAR_5 = VAR_1->bits_per_pixel;
  break;
 }

 switch (VAR_5) {
 case 8:
  VAR_1->red.offset = 0;
  VAR_1->green.offset = 0;
  VAR_1->blue.offset = 0;
  VAR_1->red.length = 8;
  VAR_1->green.length = 8;
  VAR_1->blue.length = 8;
  VAR_1->transp.length = 0;
  VAR_1->transp.offset = 0;
  break;
 case 15:
  VAR_1->red.offset = 10;
  VAR_1->green.offset = 5;
  VAR_1->blue.offset = 0;
  VAR_1->red.length = 5;
  VAR_1->green.length = 5;
  VAR_1->blue.length = 5;
  VAR_1->transp.length = 1;
  VAR_1->transp.offset = 15;
  break;
 case 16:
  VAR_1->red.offset = 11;
  VAR_1->green.offset = 5;
  VAR_1->blue.offset = 0;
  VAR_1->red.length = 5;
  VAR_1->green.length = 6;
  VAR_1->blue.length = 5;
  VAR_1->transp.length = 0;
  VAR_1->transp.offset = 0;
  break;
 case 24:
  VAR_1->red.offset = 16;
  VAR_1->green.offset = 8;
  VAR_1->blue.offset = 0;
  VAR_1->red.length = 8;
  VAR_1->green.length = 8;
  VAR_1->blue.length = 8;
  VAR_1->transp.length = 0;
  VAR_1->transp.offset = 0;
  break;
 case 32:
  VAR_1->red.offset = 16;
  VAR_1->green.offset = 8;
  VAR_1->blue.offset = 0;
  VAR_1->red.length = 8;
  VAR_1->green.length = 8;
  VAR_1->blue.length = 8;
  VAR_1->transp.length = 8;
  VAR_1->transp.offset = 24;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
