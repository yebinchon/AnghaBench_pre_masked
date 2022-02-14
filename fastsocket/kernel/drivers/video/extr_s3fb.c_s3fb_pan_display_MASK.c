
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_var_screeninfo {int bits_per_pixel; int yoffset; int xres_virtual; int xoffset; } ;
struct TYPE_2__ {int line_length; } ;
struct fb_info {TYPE_1__ fix; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2) {

 unsigned int VAR_3;


 if (VAR_1->bits_per_pixel == 0) {
  VAR_3 = (VAR_1->yoffset / 16) * (VAR_1->xres_virtual / 2) + (VAR_1->xoffset / 2);
  VAR_3 = VAR_3 >> 2;
 } else {
  VAR_3 = (VAR_1->yoffset * VAR_2->fix.line_length) +
    (VAR_1->xoffset * VAR_1->bits_per_pixel / 8);
  VAR_3 = VAR_3 >> 2;
 }


 FUNC_0(VAR_0, VAR_3);

 return 0;
}
