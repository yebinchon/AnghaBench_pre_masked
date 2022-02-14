
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_device {int dummy; } ;
struct exynos_bo {int vaddr; } ;


 int FUNC_0 (char*) ;
 struct exynos_bo* FUNC_1 (struct exynos_device*,unsigned int,unsigned int const) ;
 int FUNC_2 (struct exynos_bo*) ;
 int FUNC_3 (struct exynos_bo*) ;
 int FUNC_4 (int ,int ,unsigned int) ;

__attribute__((used)) static struct exynos_bo *FUNC_5(
      struct exynos_device *VAR_0, unsigned VAR_1)
{
   const unsigned VAR_2 = 0;
   struct exynos_bo *VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);

   if (!VAR_3)
   {
      FUNC_0("[video_exynos]: failed to create temp buffer object\n");
      return ((void*)0);
   }

   if (!FUNC_3(VAR_3))
   {
      FUNC_0("[video_exynos]: failed to map temp buffer object\n");
      FUNC_2(VAR_3);
      return ((void*)0);
   }

   FUNC_4(VAR_3->vaddr, 0, VAR_1);

   return VAR_3;
}
