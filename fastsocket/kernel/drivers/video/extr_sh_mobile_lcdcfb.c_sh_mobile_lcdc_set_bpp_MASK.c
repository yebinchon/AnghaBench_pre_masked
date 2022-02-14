
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ msb_right; int length; int offset; } ;
struct TYPE_7__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_6__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_5__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 16:
  VAR_1->red.offset = 11;
  VAR_1->red.length = 5;
  VAR_1->green.offset = 5;
  VAR_1->green.length = 6;
  VAR_1->blue.offset = 0;
  VAR_1->blue.length = 5;
  VAR_1->transp.offset = 0;
  VAR_1->transp.length = 0;
  break;

 case 32:



  VAR_1->red.offset = 0;
  VAR_1->red.length = 8;
  VAR_1->green.offset = 24;
  VAR_1->green.length = 8;
  VAR_1->blue.offset = 16;
  VAR_1->blue.length = 8;
  VAR_1->transp.offset = 0;
  VAR_1->transp.length = 0;
  break;
 default:
  return -VAR_0;
 }
 VAR_1->bits_per_pixel = VAR_2;
 VAR_1->red.msb_right = 0;
 VAR_1->green.msb_right = 0;
 VAR_1->blue.msb_right = 0;
 VAR_1->transp.msb_right = 0;
 return 0;
}
