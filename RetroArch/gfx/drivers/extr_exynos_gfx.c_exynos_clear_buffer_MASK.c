
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_image {int height; int width; } ;
struct g2d_context {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct g2d_context*) ;
 int FUNC_2 (struct g2d_context*,struct g2d_image*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct g2d_context *VAR_0, struct g2d_image *VAR_1)
{
   int VAR_2 = FUNC_2(VAR_0, VAR_1, 0, 0, VAR_1->width, VAR_1->height);

   if (VAR_2 == 0)
      VAR_2 = FUNC_1(VAR_0);

   if (VAR_2 != 0)
      FUNC_0("[video_exynos]: failed to clear buffer using G2D\n");

   return VAR_2;
}
