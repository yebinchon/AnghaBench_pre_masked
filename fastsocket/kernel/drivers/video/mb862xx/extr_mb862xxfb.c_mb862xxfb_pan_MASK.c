
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb862xxfb_par {int dummy; } ;
struct fb_var_screeninfo {int xres_virtual; int yres_virtual; int xoffset; int yoffset; } ;
struct fb_info {struct mb862xxfb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned long) ;
 unsigned long FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_3,
    struct fb_info *VAR_4)
{
 struct mb862xxfb_par *VAR_5 = VAR_4->par;
 unsigned long VAR_6;

 VAR_6 = FUNC_1(VAR_3->yoffset, VAR_3->xoffset);
 FUNC_0(VAR_2, VAR_1, VAR_6);

 VAR_6 = FUNC_1(VAR_3->yres_virtual, VAR_3->xres_virtual);
 FUNC_0(VAR_2, VAR_0, VAR_6);
 return 0;
}
