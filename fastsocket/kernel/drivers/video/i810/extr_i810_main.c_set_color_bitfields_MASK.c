
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_7__ {int length; scalar_t__ msb_right; int offset; } ;
struct TYPE_6__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_5__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;



__attribute__((used)) static void FUNC_0(struct fb_var_screeninfo *VAR_0)
{
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
  VAR_0->green.length = (VAR_0->green.length == 5) ? 5 : 6;
  VAR_0->red.length = 5;
  VAR_0->blue.length = 5;
  VAR_0->transp.length = 6 - VAR_0->green.length;
  VAR_0->blue.offset = 0;
  VAR_0->green.offset = 5;
  VAR_0->red.offset = 5 + VAR_0->green.length;
  VAR_0->transp.offset = (5 + VAR_0->red.offset) & 15;
  break;
 case 24:
 case 32:
  VAR_0->red.offset = 16;
  VAR_0->red.length = 8;
  VAR_0->green.offset = 8;
  VAR_0->green.length = 8;
  VAR_0->blue.offset = 0;
  VAR_0->blue.length = 8;
  VAR_0->transp.length = VAR_0->bits_per_pixel - 24;
  VAR_0->transp.offset = (VAR_0->transp.length) ? 24 : 0;
  break;
 }
 VAR_0->red.msb_right = 0;
 VAR_0->green.msb_right = 0;
 VAR_0->blue.msb_right = 0;
 VAR_0->transp.msb_right = 0;
}
