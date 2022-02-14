
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int bits_per_pixel; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_1)
{
 int VAR_2 = -VAR_0;

 switch (VAR_1->bits_per_pixel) {
 case 1: VAR_2 = 0; break;
 case 2: VAR_2 = 1; break;
 case 4: VAR_2 = 2; break;
 case 8: VAR_2 = 3; break;
 case 16: VAR_2 = 4; break;
 case 24:
  switch (FUNC_0(VAR_1)) {
  case 18: VAR_2 = 6; break;
  case 19: VAR_2 = 8; break;
  case 24: VAR_2 = 9; break;
  }
  break;
 case 32:
  switch (FUNC_0(VAR_1)) {
  case 18: VAR_2 = 5; break;
  case 19: VAR_2 = 7; break;
  case 25: VAR_2 = 10; break;
  }
  break;
 }
 return VAR_2;
}
