
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct fb_var_screeninfo {scalar_t__ yoffset; int vmode; scalar_t__ yres; scalar_t__ yres_virtual; } ;
struct fb_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct fb_info*,struct fb_var_screeninfo*) ;

__attribute__((used)) static int
FUNC_2(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 u_int VAR_3 = VAR_1->yoffset;

 if (!(VAR_1->vmode & VAR_0))
  VAR_3 += VAR_1->yres;

 FUNC_0(VAR_3 > VAR_1->yres_virtual);

 FUNC_1(VAR_2, VAR_1);

 return 0;
}
