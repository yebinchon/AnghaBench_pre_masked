
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int accel; } ;
struct fb_info {TYPE_1__ fix; } ;
struct fb_fillrect {int dummy; } ;






 int FUNC_0 (struct fb_info*,struct fb_fillrect const*) ;
 int FUNC_1 (struct fb_info*,struct fb_fillrect const*) ;

__attribute__((used)) static void
FUNC_2(struct fb_info *VAR_0, const struct fb_fillrect *VAR_1)
{
 switch (VAR_0->fix.accel) {
  case 131:
  case 130:
  case 129:
  case 128:
   FUNC_1(VAR_0, VAR_1);
   break;
  default:
   FUNC_0(VAR_0, VAR_1);
   break;
 }
}
