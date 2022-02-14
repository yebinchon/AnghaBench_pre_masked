
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ msb_right; scalar_t__ length; scalar_t__ offset; } ;
struct TYPE_3__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; scalar_t__ xres_virtual; scalar_t__ xres; int yres_virtual; scalar_t__ yres; scalar_t__ xoffset; scalar_t__ yoffset; int vmode; int accel_flags; TYPE_2__ transp; TYPE_1__ blue; TYPE_1__ green; TYPE_1__ red; } ;
struct fb_info {int screen_size; int device; struct cirrusfb_info* par; } ;
struct cirrusfb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct fb_var_screeninfo*,struct fb_info*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,unsigned int,unsigned int) ;
 int VAR_4 ;
 int FUNC_4 (struct cirrusfb_info*) ;

__attribute__((used)) static int FUNC_5(struct fb_var_screeninfo *VAR_5,
         struct fb_info *VAR_6)
{
 int VAR_7;

 unsigned VAR_8 = VAR_6->screen_size * 8 / VAR_5->bits_per_pixel;
 struct cirrusfb_info *VAR_9 = VAR_6->par;

 switch (VAR_5->bits_per_pixel) {
 case 1:
  VAR_5->red.offset = 0;
  VAR_5->red.length = 1;
  VAR_5->green = VAR_5->red;
  VAR_5->blue = VAR_5->red;
  break;

 case 8:
  VAR_5->red.offset = 0;
  VAR_5->red.length = 8;
  VAR_5->green = VAR_5->red;
  VAR_5->blue = VAR_5->red;
  break;

 case 16:
  if (VAR_4) {
   VAR_5->red.offset = 2;
   VAR_5->green.offset = -3;
   VAR_5->blue.offset = 8;
  } else {
   VAR_5->red.offset = 11;
   VAR_5->green.offset = 5;
   VAR_5->blue.offset = 0;
  }
  VAR_5->red.length = 5;
  VAR_5->green.length = 6;
  VAR_5->blue.length = 5;
  break;

 case 24:
  if (VAR_4) {
   VAR_5->red.offset = 0;
   VAR_5->green.offset = 8;
   VAR_5->blue.offset = 16;
  } else {
   VAR_5->red.offset = 16;
   VAR_5->green.offset = 8;
   VAR_5->blue.offset = 0;
  }
  VAR_5->red.length = 8;
  VAR_5->green.length = 8;
  VAR_5->blue.length = 8;
  break;

 default:
  FUNC_1(VAR_6->device,
   "Unsupported bpp size: %d\n", VAR_5->bits_per_pixel);
  return -VAR_0;
 }

 if (VAR_5->xres_virtual < VAR_5->xres)
  VAR_5->xres_virtual = VAR_5->xres;

 if (VAR_5->yres_virtual == -1) {
  VAR_5->yres_virtual = VAR_8 / VAR_5->xres_virtual;

  FUNC_3(VAR_6->device,
    "virtual resolution set to maximum of %dx%d\n",
    VAR_5->xres_virtual, VAR_5->yres_virtual);
 }
 if (VAR_5->yres_virtual < VAR_5->yres)
  VAR_5->yres_virtual = VAR_5->yres;

 if (VAR_5->xres_virtual * VAR_5->yres_virtual > VAR_8) {
  FUNC_2(VAR_6->device, "mode %dx%dx%d rejected... "
        "virtual resolution too high to fit into video memory!\n",
   VAR_5->xres_virtual, VAR_5->yres_virtual,
   VAR_5->bits_per_pixel);
  return -VAR_0;
 }

 if (VAR_5->xoffset < 0)
  VAR_5->xoffset = 0;
 if (VAR_5->yoffset < 0)
  VAR_5->yoffset = 0;


 if (VAR_5->xoffset > VAR_5->xres_virtual - VAR_5->xres)
  VAR_5->xoffset = VAR_5->xres_virtual - VAR_5->xres - 1;
 if (VAR_5->yoffset > VAR_5->yres_virtual - VAR_5->yres)
  VAR_5->yoffset = VAR_5->yres_virtual - VAR_5->yres - 1;

 VAR_5->red.msb_right =
     VAR_5->green.msb_right =
     VAR_5->blue.msb_right =
     VAR_5->transp.offset =
     VAR_5->transp.length =
     VAR_5->transp.msb_right = 0;

 VAR_7 = VAR_5->yres;
 if (VAR_5->vmode & VAR_2)
  VAR_7 *= 2;
 else if (VAR_5->vmode & VAR_3)
  VAR_7 = (VAR_7 + 1) / 2;

 if (VAR_7 >= 1280) {
  FUNC_2(VAR_6->device, "ERROR: VerticalTotal >= 1280; "
   "special treatment required! (TODO)\n");
  return -VAR_0;
 }

 if (FUNC_0(VAR_5, VAR_6))
  return -VAR_0;

 if (!FUNC_4(VAR_9))
  VAR_5->accel_flags = VAR_1;

 return 0;
}
