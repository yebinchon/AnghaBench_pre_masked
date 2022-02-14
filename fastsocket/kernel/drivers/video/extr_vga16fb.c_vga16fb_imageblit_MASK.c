
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct fb_image {int depth; } ;


 int FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 (struct fb_info*,struct fb_image const*) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_0, const struct fb_image *VAR_1)
{
 if (VAR_1->depth == 1)
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1);
}
