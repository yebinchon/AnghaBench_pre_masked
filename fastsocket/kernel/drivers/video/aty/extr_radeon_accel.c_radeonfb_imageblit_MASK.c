
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeonfb_info {int dummy; } ;
struct fb_info {scalar_t__ state; struct radeonfb_info* par; } ;
struct fb_image {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 () ;

void FUNC_2(struct fb_info *VAR_1, const struct fb_image *VAR_2)
{
 struct radeonfb_info *VAR_3 = VAR_1->par;

 if (VAR_1->state != VAR_0)
  return;
 FUNC_1();

 FUNC_0(VAR_1, VAR_2);
}
