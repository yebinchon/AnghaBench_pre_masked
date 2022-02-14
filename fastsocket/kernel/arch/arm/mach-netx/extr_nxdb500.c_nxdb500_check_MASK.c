
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; scalar_t__ msb_right; } ;
struct fb_var_screeninfo {TYPE_1__ green; } ;
struct clcd_fb {int dummy; } ;


 int FUNC_0 (struct clcd_fb*,struct fb_var_screeninfo*) ;

__attribute__((used)) static inline int FUNC_1(struct clcd_fb *VAR_0, struct fb_var_screeninfo *VAR_1)
{
 VAR_1->green.length = 5;
 VAR_1->green.msb_right = 0;

 return FUNC_0(VAR_0, VAR_1);
}
