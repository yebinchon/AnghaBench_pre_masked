
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int dummy; } ;
struct fb_info {struct fb_var_screeninfo var; } ;
struct aafb_par {int dummy; } ;


 int FUNC_0 (struct fb_var_screeninfo*,struct aafb_par*) ;
 int FUNC_1 (struct aafb_par*) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_0, int VAR_1,
   struct fb_info *VAR_2)
{
 struct aafb_par VAR_3;

 FUNC_1(&VAR_3);
 FUNC_0(VAR_0, &VAR_3);
 VAR_2->var = *VAR_0;

 return 0;
}
