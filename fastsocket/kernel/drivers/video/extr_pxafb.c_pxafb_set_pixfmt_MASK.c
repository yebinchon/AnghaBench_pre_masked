
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
struct TYPE_6__ {int length; scalar_t__ offset; } ;
struct TYPE_5__ {int length; scalar_t__ offset; } ;
struct fb_var_screeninfo {int bits_per_pixel; TYPE_4__ transp; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;


 int FUNC_0 (struct fb_var_screeninfo*,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct fb_var_screeninfo *VAR_0, int VAR_1)
{
 if (VAR_1 == 0)
  VAR_1 = VAR_0->bits_per_pixel;

 if (VAR_0->bits_per_pixel < 16) {

  VAR_0->red.offset = 0; VAR_0->red.length = 8;
  VAR_0->green.offset = 0; VAR_0->green.length = 8;
  VAR_0->blue.offset = 0; VAR_0->blue.length = 8;
  VAR_0->transp.offset = 0; VAR_0->transp.length = 8;
 }

 switch (VAR_1) {
 case 16: VAR_0->transp.length ?
   FUNC_0(VAR_0, 5, 5, 5, 1) :
   FUNC_0(VAR_0, 5, 6, 5, 0); break;
 case 18: FUNC_0(VAR_0, 6, 6, 6, 0); break;
 case 19: FUNC_0(VAR_0, 6, 6, 6, 1); break;
 case 24: VAR_0->transp.length ?
   FUNC_0(VAR_0, 8, 8, 7, 1) :
   FUNC_0(VAR_0, 8, 8, 8, 0); break;
 case 25: FUNC_0(VAR_0, 8, 8, 8, 1); break;
 }
}
