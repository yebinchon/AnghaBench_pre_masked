
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct clcd_fb {int clcd_cntl; } ;


 int FUNC_0 (struct clcd_fb*) ;
 int FUNC_1 (struct clcd_fb*,int ) ;
 struct clcd_fb* FUNC_2 (struct fb_info*) ;

__attribute__((used)) static int FUNC_3(int VAR_0, struct fb_info *VAR_1)
{
 struct clcd_fb *VAR_2 = FUNC_2(VAR_1);

 if (VAR_0 != 0) {
  FUNC_0(VAR_2);
 } else {
  FUNC_1(VAR_2, VAR_2->clcd_cntl);
 }
 return 0;
}
