
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int length; scalar_t__ offset; } ;
struct TYPE_7__ {int length; scalar_t__ offset; } ;
struct TYPE_6__ {int length; } ;
struct TYPE_5__ {int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_4__ blue; TYPE_3__ red; TYPE_2__ transp; TYPE_1__ green; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_12)
{



 if (VAR_12->bits_per_pixel == 8)
  return VAR_6;




 if (VAR_12->bits_per_pixel == 16 && VAR_12->red.length <= 5 &&
     VAR_12->green.length <= 6 && VAR_12->blue.length <= 5) {
  if (VAR_12->transp.length == 0) {
   if (VAR_12->red.offset >= VAR_12->blue.offset)
    return VAR_8;
   else
    return VAR_2;
  }

  if (VAR_12->transp.length == 1 && VAR_12->green.length <= 5) {
   if (VAR_12->red.offset >= VAR_12->blue.offset)
    return VAR_7;
   else
    return VAR_1;
  }


 }




 if (VAR_12->bits_per_pixel <= 32 && VAR_12->red.length <= 8 &&
     VAR_12->green.length <= 8 && VAR_12->blue.length <= 8) {
  if (VAR_12->bits_per_pixel == 24 && VAR_12->transp.length == 0) {
   if (VAR_12->red.offset >= VAR_12->blue.offset)
    return VAR_9;
   else
    return VAR_3;
  }

  if (VAR_12->bits_per_pixel == 32 && VAR_12->transp.length == 8) {
   if (VAR_12->red.offset >= VAR_12->blue.offset)
    return VAR_11;
   else
    return VAR_5;
  } else {
   if (VAR_12->red.offset >= VAR_12->blue.offset)
    return VAR_10;
   else
    return VAR_4;
  }


 }

 return -VAR_0;
}
