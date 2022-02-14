
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int vmode; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct fb_var_screeninfo*,struct fb_info*) ;
 int FUNC_1 (struct fb_var_screeninfo*) ;
 int FUNC_2 (struct fb_var_screeninfo*) ;
 int FUNC_3 (struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_4(struct fb_var_screeninfo *VAR_4,
       struct fb_info *VAR_5)
{
 int VAR_6;

 if (VAR_3) {
  VAR_4->vmode &= ~VAR_1;
  VAR_4->vmode |= VAR_2;
 }
 if (VAR_4->vmode & VAR_0) {
  VAR_4->vmode &= ~VAR_1;
  VAR_4->vmode |= VAR_2;
 }

 FUNC_1(VAR_4);
 if ((VAR_6 = FUNC_0(VAR_4, VAR_5)))
  return VAR_6;

 FUNC_2(VAR_4);
 FUNC_3(VAR_4);
 return 0;
}
