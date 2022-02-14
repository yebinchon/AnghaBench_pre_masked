
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_video {int aspect_changed; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, unsigned VAR_1)
{
   struct exynos_video *VAR_2 = (struct exynos_video*)VAR_0;

   if (!VAR_2)
      return;

   VAR_2->aspect_changed = 1;
}
