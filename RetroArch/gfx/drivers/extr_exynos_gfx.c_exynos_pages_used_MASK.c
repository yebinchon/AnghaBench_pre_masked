
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_page {scalar_t__ used; } ;



__attribute__((used)) static unsigned FUNC_0(struct exynos_page *VAR_0, unsigned VAR_1)
{
   unsigned VAR_2;
   unsigned VAR_3 = 0;

   for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2)
   {
      if (VAR_0[VAR_2].used)
         ++VAR_3;
   }

   return VAR_3;
}
