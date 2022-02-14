
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; } ;
struct fb_image {int depth; } ;


 int FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 (struct fb_info*,struct fb_image const*) ;
 int FUNC_2 (struct fb_info*,struct fb_image const*) ;

__attribute__((used)) static void
FUNC_3(struct fb_info *VAR_0, const struct fb_image *VAR_1)
{
 unsigned int VAR_2 = VAR_0->var.bits_per_pixel == 8;


 if (VAR_1->depth == 1) {
  FUNC_2(VAR_0, VAR_1);
  return;
 }





 if (VAR_1->depth == VAR_0->var.bits_per_pixel) {
  FUNC_0(VAR_0, VAR_1);
  return;
 }


 if (!VAR_2 && VAR_1->depth == 8) {
  FUNC_1(VAR_0, VAR_1);
  return;
 }


}
