
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; scalar_t__ offset; scalar_t__ msb_right; } ;
struct TYPE_4__ {scalar_t__ length; scalar_t__ offset; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_1__ red; TYPE_1__ blue; TYPE_1__ green; TYPE_2__ transp; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 VAR_1->transp.msb_right = 0;
 VAR_1->transp.offset = 0;
 VAR_1->transp.length = 0;
 VAR_1->red.msb_right = 0;
 VAR_1->red.offset = 0;
 VAR_1->red.length = VAR_1->bits_per_pixel;
 VAR_1->green = VAR_1->red;
 VAR_1->blue = VAR_1->red;

 if (VAR_1->bits_per_pixel > 4)
  return -VAR_0;

 return 0;
}
