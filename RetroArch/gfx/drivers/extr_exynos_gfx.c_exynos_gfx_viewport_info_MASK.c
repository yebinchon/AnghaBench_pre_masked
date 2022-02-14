
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_viewport {int full_height; int height; int full_width; int width; scalar_t__ y; scalar_t__ x; } ;
struct exynos_video {int height; int width; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, struct video_viewport *VAR_1)
{
   struct exynos_video *VAR_2 = (struct exynos_video*)VAR_0;

   if (!VAR_2)
      return;

   VAR_1->x = VAR_1->y = 0;

   VAR_1->width = VAR_1->full_width = VAR_2->width;
   VAR_1->height = VAR_1->full_height = VAR_2->height;
}
