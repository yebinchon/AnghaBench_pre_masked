
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct par_info {int dummy; } ;
struct TYPE_10__ {int length; int offset; scalar_t__ msb_right; } ;
struct TYPE_9__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_8__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_7__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres_virtual; int yres_virtual; int yres; int xres; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; TYPE_1__ transp; } ;
struct fb_info {int dummy; } ;
struct TYPE_11__ {unsigned int smem_len; } ;
struct TYPE_12__ {TYPE_5__ fix; } ;
struct cfb_info {TYPE_6__ fb; } ;


 int VAR_0 ;
 int FUNC_0 (struct par_info*,struct cfb_info*,struct fb_var_screeninfo*) ;
 int FUNC_1 (struct par_info*,struct cfb_info*,struct fb_var_screeninfo*) ;

__attribute__((used)) static int
FUNC_2(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 struct cfb_info *VAR_3 = (struct cfb_info *)VAR_2;
 struct par_info VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_1->transp.msb_right = 0;
 VAR_1->red.msb_right = 0;
 VAR_1->green.msb_right = 0;
 VAR_1->blue.msb_right = 0;
 VAR_1->transp.offset = 0;
 VAR_1->transp.length = 0;

 switch (VAR_1->bits_per_pixel) {
 case 8:
  VAR_1->red.offset = 0;
  VAR_1->red.length = 8;
  VAR_1->green.offset = 0;
  VAR_1->green.length = 8;
  VAR_1->blue.offset = 0;
  VAR_1->blue.length = 8;
  break;

 case 16:
  switch (VAR_1->green.length) {
  case 6:
   VAR_1->red.offset = 11;
   VAR_1->red.length = 5;
   VAR_1->green.offset = 5;
   VAR_1->green.length = 6;
   VAR_1->blue.offset = 0;
   VAR_1->blue.length = 5;
   break;

  default:
  case 5:
   VAR_1->red.offset = 10;
   VAR_1->red.length = 5;
   VAR_1->green.offset = 5;
   VAR_1->green.length = 5;
   VAR_1->blue.offset = 0;
   VAR_1->blue.length = 5;
   break;

  case 4:
   VAR_1->transp.offset = 12;
   VAR_1->transp.length = 4;
   VAR_1->red.offset = 8;
   VAR_1->red.length = 4;
   VAR_1->green.offset = 4;
   VAR_1->green.length = 4;
   VAR_1->blue.offset = 0;
   VAR_1->blue.length = 4;
   break;
  }
  break;

 case 24:
  VAR_1->red.offset = 16;
  VAR_1->red.length = 8;
  VAR_1->green.offset = 8;
  VAR_1->green.length = 8;
  VAR_1->blue.offset = 0;
  VAR_1->blue.length = 8;
  break;

 case 32:
  VAR_1->transp.offset = 24;
  VAR_1->transp.length = 8;
  VAR_1->red.offset = 16;
  VAR_1->red.length = 8;
  VAR_1->green.offset = 8;
  VAR_1->green.length = 8;
  VAR_1->blue.offset = 0;
  VAR_1->blue.length = 8;
  break;

 default:
  return -VAR_0;
 }

 VAR_5 = VAR_1->xres_virtual * VAR_1->yres_virtual * (VAR_1->bits_per_pixel / 8);
 if (VAR_5 > VAR_3->fb.fix.smem_len)
  VAR_1->yres_virtual = VAR_3->fb.fix.smem_len * 8 /
        (VAR_1->bits_per_pixel * VAR_1->xres_virtual);

 if (VAR_1->yres > VAR_1->yres_virtual)
  VAR_1->yres = VAR_1->yres_virtual;
 if (VAR_1->xres > VAR_1->xres_virtual)
  VAR_1->xres = VAR_1->xres_virtual;

 VAR_6 = FUNC_0(&VAR_4, VAR_3, VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(&VAR_4, VAR_3, VAR_1);
 if (VAR_6)
  return VAR_6;

 return 0;
}
