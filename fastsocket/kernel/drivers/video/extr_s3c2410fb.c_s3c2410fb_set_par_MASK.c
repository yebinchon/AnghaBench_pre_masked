
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_var_screeninfo {int bits_per_pixel; int xres_virtual; } ;
struct TYPE_2__ {int line_length; int visual; } ;
struct fb_info {TYPE_1__ fix; struct fb_var_screeninfo var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fb_info*) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_3)
{
 struct fb_var_screeninfo *VAR_4 = &VAR_3->var;

 switch (VAR_4->bits_per_pixel) {
 case 32:
 case 16:
 case 12:
  VAR_3->fix.visual = VAR_2;
  break;
 case 1:
  VAR_3->fix.visual = VAR_0;
  break;
 default:
  VAR_3->fix.visual = VAR_1;
  break;
 }

 VAR_3->fix.line_length = (VAR_4->xres_virtual * VAR_4->bits_per_pixel) / 8;



 FUNC_0(VAR_3);
 return 0;
}
