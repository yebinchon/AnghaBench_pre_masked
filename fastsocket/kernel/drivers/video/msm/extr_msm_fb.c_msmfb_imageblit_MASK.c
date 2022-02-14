
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;
struct fb_image {scalar_t__ height; scalar_t__ dy; scalar_t__ width; scalar_t__ dx; } ;


 int FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 (struct fb_info*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_0, const struct fb_image *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_1->dx, VAR_1->dy, VAR_1->dx + VAR_1->width,
       VAR_1->dy + VAR_1->height);
}
