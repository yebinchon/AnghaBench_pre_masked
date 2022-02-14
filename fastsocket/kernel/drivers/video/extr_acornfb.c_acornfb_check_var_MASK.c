
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int offset; int length; scalar_t__ msb_right; } ;
struct TYPE_3__ {int offset; int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_2__ transp; TYPE_1__ blue; TYPE_1__ green; TYPE_1__ red; } ;
struct fb_info {int monspecs; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*,struct fb_var_screeninfo*,int) ;
 int FUNC_1 (struct fb_var_screeninfo*) ;
 int FUNC_2 (struct fb_var_screeninfo*,int *) ;

__attribute__((used)) static int
FUNC_3(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 u_int VAR_3;
 int VAR_4;




 VAR_3 = 8;

 VAR_1->red.msb_right = 0;
 VAR_1->green.msb_right = 0;
 VAR_1->blue.msb_right = 0;
 VAR_1->transp.msb_right = 0;

 switch (VAR_1->bits_per_pixel) {
 case 1: case 2: case 4: case 8:
  VAR_1->red.offset = 0;
  VAR_1->red.length = VAR_1->bits_per_pixel;
  VAR_1->green = VAR_1->red;
  VAR_1->blue = VAR_1->red;
  VAR_1->transp.offset = 0;
  VAR_1->transp.length = 0;
  break;
 default:
  return -VAR_0;
 }




 if (!FUNC_1(VAR_1))
  return -VAR_0;





 VAR_4 = FUNC_0(VAR_2, VAR_1, VAR_3);
 if (VAR_4)
  return VAR_4;





 return FUNC_2(VAR_1, &VAR_2->monspecs);
}
