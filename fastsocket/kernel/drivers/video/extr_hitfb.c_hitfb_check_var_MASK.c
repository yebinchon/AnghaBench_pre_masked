
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


struct TYPE_12__ {int length; int offset; } ;
struct TYPE_11__ {int length; int offset; } ;
struct TYPE_10__ {int offset; int length; } ;
struct TYPE_9__ {int offset; int length; } ;
struct fb_var_screeninfo {int xres; int xres_virtual; int yres; int bits_per_pixel; int yres_virtual; TYPE_6__ transp; TYPE_5__ blue; TYPE_4__ green; TYPE_3__ red; scalar_t__ yoffset; scalar_t__ xoffset; } ;
struct TYPE_8__ {int smem_len; } ;
struct TYPE_7__ {int xres; int yres; int bits_per_pixel; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; } ;



__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_0, struct fb_info *VAR_1)
{
 int VAR_2;

 VAR_0->xres = VAR_1->var.xres;
 VAR_0->xres_virtual = VAR_1->var.xres;
 VAR_0->yres = VAR_1->var.yres;

 if ((VAR_0->bits_per_pixel != 8) && (VAR_0->bits_per_pixel != 16))
  VAR_0->bits_per_pixel = VAR_1->var.bits_per_pixel;

 if (VAR_0->yres_virtual < VAR_0->yres)
  VAR_0->yres_virtual = VAR_0->yres;

 VAR_2 = VAR_1->fix.smem_len / VAR_0->xres;

 if (VAR_0->bits_per_pixel == 16)
  VAR_2 /= 2;

 if (VAR_0->yres_virtual > VAR_2)
  VAR_0->yres_virtual = VAR_2;

 VAR_0->xoffset = 0;
 VAR_0->yoffset = 0;

 switch (VAR_0->bits_per_pixel) {
 case 8:
  VAR_0->red.offset = 0;
  VAR_0->red.length = 8;
  VAR_0->green.offset = 0;
  VAR_0->green.length = 8;
  VAR_0->blue.offset = 0;
  VAR_0->blue.length = 8;
  VAR_0->transp.offset = 0;
  VAR_0->transp.length = 0;
  break;
 case 16:
  VAR_0->red.offset = 11;
  VAR_0->red.length = 5;
  VAR_0->green.offset = 5;
  VAR_0->green.length = 6;
  VAR_0->blue.offset = 0;
  VAR_0->blue.length = 5;
  VAR_0->transp.offset = 0;
  VAR_0->transp.length = 0;
  break;
 }

 return 0;
}
