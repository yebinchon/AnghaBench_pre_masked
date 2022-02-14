
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {scalar_t__ vmode; scalar_t__ yoffset; scalar_t__ xoffset; } ;
struct fb_info {scalar_t__ par; } ;
struct cg6_par {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cg6_par*) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 struct cg6_par *VAR_3 = (struct cg6_par *)VAR_2->par;




 FUNC_0(VAR_3);

 if (VAR_1->xoffset || VAR_1->yoffset || VAR_1->vmode)
  return -VAR_0;
 return 0;
}
