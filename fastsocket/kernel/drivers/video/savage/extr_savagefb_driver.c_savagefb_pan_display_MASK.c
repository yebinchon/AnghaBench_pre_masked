
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_par {int dummy; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {struct savagefb_par* par; } ;


 int FUNC_0 (struct savagefb_par*,struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_0,
    struct fb_info *VAR_1)
{
 struct savagefb_par *VAR_2 = VAR_1->par;

 FUNC_0(VAR_2, VAR_0);
 return 0;
}
