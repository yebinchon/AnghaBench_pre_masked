
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int screen_base; struct dlfb_data* par; } ;
struct fb_image {int height; int width; int dy; int dx; } ;
struct dlfb_data {int dummy; } ;


 int FUNC_0 (struct fb_info*,struct fb_image const*) ;
 int FUNC_1 (struct dlfb_data*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_0, const struct fb_image *VAR_1)
{

 int VAR_2;
 struct dlfb_data *VAR_3 = VAR_0->par;

 FUNC_0(VAR_0, VAR_1);
 VAR_2 =
     FUNC_1(VAR_3, VAR_1->dx, VAR_1->dy, VAR_1->width, VAR_1->height,
         VAR_0->screen_base);

}
