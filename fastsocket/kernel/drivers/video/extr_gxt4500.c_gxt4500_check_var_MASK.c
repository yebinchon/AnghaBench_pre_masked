
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gxt4500_par {int pixfmt; } ;
struct fb_var_screeninfo {int pixclock; } ;
struct fb_info {scalar_t__ par; } ;


 int FUNC_0 (struct gxt4500_par*) ;
 int FUNC_1 (struct fb_var_screeninfo*,int ) ;
 int FUNC_2 (struct fb_var_screeninfo*,struct gxt4500_par*) ;

__attribute__((used)) static int FUNC_3(struct fb_var_screeninfo *VAR_0,
        struct fb_info *VAR_1)
{
 struct gxt4500_par VAR_2;
 int VAR_3;

 VAR_2 = *(struct gxt4500_par *)VAR_1->par;
 VAR_3 = FUNC_2(VAR_0, &VAR_2);
 if (!VAR_3) {
  VAR_0->pixclock = FUNC_0(&VAR_2);
  FUNC_1(VAR_0, VAR_2.pixfmt);
 }
 return VAR_3;
}
