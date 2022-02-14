
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {unsigned int xoffset; scalar_t__ yoffset; } ;
struct fb_par_control {int cmode; scalar_t__ xres; scalar_t__ vxres; scalar_t__ yres; scalar_t__ vyres; } ;
struct fb_info_control {struct fb_par_control par; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,scalar_t__,struct fb_info_control*) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_1,
     struct fb_info *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 struct fb_info_control *VAR_5 = (struct fb_info_control *)VAR_2;
 struct fb_par_control *VAR_6 = &VAR_5->par;




 VAR_4 = 0x1f >> VAR_6->cmode;
 VAR_3 = (VAR_1->xoffset + VAR_4) & ~VAR_4;

 if (VAR_3+VAR_6->xres > VAR_6->vxres ||
     VAR_1->yoffset+VAR_6->yres > VAR_6->vyres)
  return -VAR_0;

 FUNC_0(VAR_3, VAR_1->yoffset, VAR_5);

 return 0;
}
