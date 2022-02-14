
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa168fb_info {scalar_t__ reg_base; } ;
struct fb_var_screeninfo {int xres; int right_margin; int hsync_len; int left_margin; int yres; int lower_margin; int vsync_len; int upper_margin; } ;
struct fb_info {struct fb_var_screeninfo var; struct pxa168fb_info* par; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_1)
{
 struct pxa168fb_info *VAR_2 = VAR_1->par;
 struct fb_var_screeninfo *VAR_3 = &VAR_1->var;
 int VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->xres + VAR_3->right_margin + VAR_3->hsync_len + VAR_3->left_margin;
 VAR_5 = VAR_3->yres + VAR_3->lower_margin + VAR_3->vsync_len + VAR_3->upper_margin;

 FUNC_0((VAR_5 << 16) | VAR_4, VAR_2->reg_base + VAR_0);
}
