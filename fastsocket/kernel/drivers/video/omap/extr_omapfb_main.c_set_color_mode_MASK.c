
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_plane_struct {int color_mode; } ;
struct fb_var_screeninfo {int nonstd; int bits_per_pixel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




__attribute__((used)) static int FUNC_0(struct omapfb_plane_struct *VAR_7,
     struct fb_var_screeninfo *VAR_8)
{
 switch (VAR_8->nonstd) {
 case 0:
  break;
 case 129:
  VAR_8->bits_per_pixel = 16;
  VAR_7->color_mode = VAR_8->nonstd;
  return 0;
 case 130:
  VAR_8->bits_per_pixel = 12;
  VAR_7->color_mode = VAR_8->nonstd;
  return 0;
 case 128:
  VAR_8->bits_per_pixel = 16;
  VAR_7->color_mode = VAR_8->nonstd;
  return 0;
 default:
  return -VAR_0;
 }

 switch (VAR_8->bits_per_pixel) {
 case 1:
  VAR_7->color_mode = VAR_1;
  return 0;
 case 2:
  VAR_7->color_mode = VAR_2;
  return 0;
 case 4:
  VAR_7->color_mode = VAR_3;
  return 0;
 case 8:
  VAR_7->color_mode = VAR_4;
  return 0;
 case 12:
  VAR_8->bits_per_pixel = 16;
  VAR_7->color_mode = VAR_5;
  return 0;
 case 16:
  VAR_7->color_mode = VAR_6;
  return 0;
 default:
  return -VAR_0;
 }
}
