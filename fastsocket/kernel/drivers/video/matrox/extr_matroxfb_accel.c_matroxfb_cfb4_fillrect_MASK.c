
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct matrox_fb_info {int dummy; } ;
struct fb_info {scalar_t__ pseudo_palette; } ;
struct fb_fillrect {int rop; size_t color; int width; int height; int dx; int dy; } ;



 struct matrox_fb_info* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct matrox_fb_info*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct fb_info* VAR_0, const struct fb_fillrect* VAR_1) {
 struct matrox_fb_info *VAR_2 = FUNC_0(VAR_0);

 switch (VAR_1->rop) {
  case 128:
   FUNC_1(VAR_2, ((u_int32_t *)VAR_0->pseudo_palette)[VAR_1->color], VAR_1->dy, VAR_1->dx, VAR_1->height, VAR_1->width);
   break;
 }
}
