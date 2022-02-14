
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {int bits_per_pixel; } ;
struct fb_info {TYPE_2__ fix; TYPE_1__ var; } ;
struct fb_image {int depth; int width; int dx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 (struct fb_info*,struct fb_image const*) ;
 int FUNC_2 (struct fb_info*,struct fb_image const*) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_1, const struct fb_image *VAR_2)
{
 if ((VAR_1->var.bits_per_pixel == 4) && (VAR_2->depth == 1)
     && ((VAR_2->width % 8) == 0) && ((VAR_2->dx % 8) == 0)) {
  if (VAR_1->fix.type == VAR_0)
   FUNC_1(VAR_1, VAR_2);
  else
   FUNC_0(VAR_1, VAR_2);
 } else
  FUNC_2(VAR_1, VAR_2);
}
