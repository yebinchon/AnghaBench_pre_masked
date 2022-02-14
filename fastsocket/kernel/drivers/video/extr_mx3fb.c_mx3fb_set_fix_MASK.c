
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int xres_virtual; int bits_per_pixel; } ;
struct fb_fix_screeninfo {int line_length; int xpanstep; int ypanstep; int visual; int accel; int type; int id; } ;
struct fb_info {struct fb_var_screeninfo var; struct fb_fix_screeninfo fix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_3)
{
 struct fb_fix_screeninfo *VAR_4 = &VAR_3->fix;
 struct fb_var_screeninfo *VAR_5 = &VAR_3->var;

 FUNC_0(VAR_4->id, "DISP3 BG", 8);

 VAR_4->line_length = VAR_5->xres_virtual * VAR_5->bits_per_pixel / 8;

 VAR_4->type = VAR_1;
 VAR_4->accel = VAR_0;
 VAR_4->visual = VAR_2;
 VAR_4->xpanstep = 1;
 VAR_4->ypanstep = 1;

 return 0;
}
