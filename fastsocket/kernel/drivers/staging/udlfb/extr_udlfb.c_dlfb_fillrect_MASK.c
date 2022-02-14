
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct dlfb_data* par; } ;
struct fb_fillrect {int height; int width; int dy; int dx; int color; } ;
struct dlfb_data {int dummy; } ;


 int FUNC_0 (struct dlfb_data*,int ,int ,int ,int ,unsigned char,unsigned char,unsigned char) ;
 int FUNC_1 (unsigned char*,int *,int) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_0,
     const struct fb_fillrect *VAR_1)
{

 unsigned char VAR_2, VAR_3, VAR_4;
 struct dlfb_data *VAR_5 = VAR_0->par;

 FUNC_1(&VAR_2, &VAR_1->color, 1);
 FUNC_1(&VAR_3, &VAR_1->color + 1, 1);
 FUNC_1(&VAR_4, &VAR_1->color + 2, 1);
 FUNC_0(VAR_5, VAR_1->dx, VAR_1->dy, VAR_1->width, VAR_1->height,
    VAR_2, VAR_3, VAR_4);


}
