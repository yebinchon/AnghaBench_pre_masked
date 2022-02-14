
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_image {int height; int width; } ;
struct exynos_data {int perf; int g2d; int * blit_params; int dst; struct g2d_image** src; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,struct g2d_image*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct exynos_data *VAR_2,
                             unsigned VAR_3)
{
   struct g2d_image *VAR_4 = VAR_2->src[VAR_0];





   if (FUNC_3(VAR_2->g2d, VAR_4, VAR_2->dst, 0, 0,
            VAR_4->width, VAR_4->height, VAR_2->blit_params[0],
            VAR_2->blit_params[1], VAR_2->blit_params[2],
            VAR_2->blit_params[3], VAR_1) ||
         FUNC_2(VAR_2->g2d))
   {
      FUNC_0("[video_exynos]: failed to blend menu.\n");
      return -1;
   }





   return 0;
}
