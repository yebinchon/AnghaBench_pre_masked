
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int length; int offset; scalar_t__ msb_right; } ;
struct TYPE_7__ {int length; int offset; scalar_t__ msb_right; } ;
struct TYPE_6__ {int length; int offset; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_4__ green; TYPE_3__ blue; TYPE_2__ red; int transp; } ;
struct clcd_fb {TYPE_1__* panel; } ;
struct TYPE_5__ {int cntl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct clcd_fb *VAR_3, struct fb_var_screeninfo *VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(&VAR_4->transp, 0, sizeof(VAR_4->transp));

 VAR_4->red.msb_right = 0;
 VAR_4->green.msb_right = 0;
 VAR_4->blue.msb_right = 0;

 switch (VAR_4->bits_per_pixel) {
 case 1:
 case 2:
 case 4:
 case 8:
  VAR_4->red.length = VAR_4->bits_per_pixel;
  VAR_4->red.offset = 0;
  VAR_4->green.length = VAR_4->bits_per_pixel;
  VAR_4->green.offset = 0;
  VAR_4->blue.length = VAR_4->bits_per_pixel;
  VAR_4->blue.offset = 0;
  break;
 case 16:
  VAR_4->red.length = 5;
  VAR_4->blue.length = 5;




  if (VAR_4->green.length != 5 && VAR_4->green.length != 6)
   VAR_4->green.length = 6;
  break;
 case 32:
  if (VAR_3->panel->cntl & VAR_1) {
   VAR_4->red.length = 8;
   VAR_4->green.length = 8;
   VAR_4->blue.length = 8;
   break;
  }
 default:
  VAR_5 = -VAR_2;
  break;
 }






 if (VAR_5 == 0 && VAR_4->bits_per_pixel >= 16) {
  if (VAR_3->panel->cntl & VAR_0) {
   VAR_4->blue.offset = 0;
   VAR_4->green.offset = VAR_4->blue.offset + VAR_4->blue.length;
   VAR_4->red.offset = VAR_4->green.offset + VAR_4->green.length;
  } else {
   VAR_4->red.offset = 0;
   VAR_4->green.offset = VAR_4->red.offset + VAR_4->red.length;
   VAR_4->blue.offset = VAR_4->green.offset + VAR_4->green.length;
  }
 }

 return VAR_5;
}
