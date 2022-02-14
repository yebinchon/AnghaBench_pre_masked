
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2fb_par {scalar_t__ disp_start; } ;
struct fb_var_screeninfo {int bits_per_pixel; scalar_t__ xres; scalar_t__ xoffset; } ;
struct fb_info {struct fb_var_screeninfo var; scalar_t__ par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_2)
{
 struct pvr2fb_par *VAR_3 = (struct pvr2fb_par *) VAR_2->par;
 struct fb_var_screeninfo *VAR_4 = &VAR_2->var;


 FUNC_0(VAR_3->disp_start, VAR_0);
 FUNC_0(VAR_3->disp_start +
    FUNC_1(VAR_4->xoffset+VAR_4->xres, VAR_4->bits_per_pixel),
           VAR_1);
}
