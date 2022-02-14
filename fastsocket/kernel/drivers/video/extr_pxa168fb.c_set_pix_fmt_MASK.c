
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int offset; int length; } ;
struct TYPE_8__ {int offset; int length; } ;
struct TYPE_7__ {int offset; int length; } ;
struct TYPE_6__ {int offset; int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_1__ transp; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
__attribute__((used)) static void FUNC_0(struct fb_var_screeninfo *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 130:
  VAR_0->bits_per_pixel = 16;
  VAR_0->red.offset = 11; VAR_0->red.length = 5;
  VAR_0->green.offset = 5; VAR_0->green.length = 6;
  VAR_0->blue.offset = 0; VAR_0->blue.length = 5;
  VAR_0->transp.offset = 0; VAR_0->transp.length = 0;
  break;
 case 135:
  VAR_0->bits_per_pixel = 16;
  VAR_0->red.offset = 0; VAR_0->red.length = 5;
  VAR_0->green.offset = 5; VAR_0->green.length = 6;
  VAR_0->blue.offset = 11; VAR_0->blue.length = 5;
  VAR_0->transp.offset = 0; VAR_0->transp.length = 0;
  break;
 case 131:
  VAR_0->bits_per_pixel = 16;
  VAR_0->red.offset = 10; VAR_0->red.length = 5;
  VAR_0->green.offset = 5; VAR_0->green.length = 5;
  VAR_0->blue.offset = 0; VAR_0->blue.length = 5;
  VAR_0->transp.offset = 15; VAR_0->transp.length = 1;
  break;
 case 136:
  VAR_0->bits_per_pixel = 16;
  VAR_0->red.offset = 0; VAR_0->red.length = 5;
  VAR_0->green.offset = 5; VAR_0->green.length = 5;
  VAR_0->blue.offset = 10; VAR_0->blue.length = 5;
  VAR_0->transp.offset = 15; VAR_0->transp.length = 1;
  break;
 case 129:
  VAR_0->bits_per_pixel = 24;
  VAR_0->red.offset = 16; VAR_0->red.length = 8;
  VAR_0->green.offset = 8; VAR_0->green.length = 8;
  VAR_0->blue.offset = 0; VAR_0->blue.length = 8;
  VAR_0->transp.offset = 0; VAR_0->transp.length = 0;
  break;
 case 134:
  VAR_0->bits_per_pixel = 24;
  VAR_0->red.offset = 0; VAR_0->red.length = 8;
  VAR_0->green.offset = 8; VAR_0->green.length = 8;
  VAR_0->blue.offset = 16; VAR_0->blue.length = 8;
  VAR_0->transp.offset = 0; VAR_0->transp.length = 0;
  break;
 case 128:
  VAR_0->bits_per_pixel = 32;
  VAR_0->red.offset = 16; VAR_0->red.length = 8;
  VAR_0->green.offset = 8; VAR_0->green.length = 8;
  VAR_0->blue.offset = 0; VAR_0->blue.length = 8;
  VAR_0->transp.offset = 24; VAR_0->transp.length = 8;
  break;
 case 133:
  VAR_0->bits_per_pixel = 32;
  VAR_0->red.offset = 0; VAR_0->red.length = 8;
  VAR_0->green.offset = 8; VAR_0->green.length = 8;
  VAR_0->blue.offset = 16; VAR_0->blue.length = 8;
  VAR_0->transp.offset = 24; VAR_0->transp.length = 8;
  break;
 case 132:
  VAR_0->bits_per_pixel = 8;
  VAR_0->red.offset = 0; VAR_0->red.length = 8;
  VAR_0->green.offset = 0; VAR_0->green.length = 8;
  VAR_0->blue.offset = 0; VAR_0->blue.length = 8;
  VAR_0->transp.offset = 0; VAR_0->transp.length = 0;
  break;
 }
}
