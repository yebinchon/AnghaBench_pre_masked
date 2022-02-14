
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g2d_image {int * bo; } ;
struct exynos_page {int clear; int used; TYPE_1__* bo; } ;
struct exynos_data {int g2d; int num_pages; int pages; struct g2d_image* dst; } ;
struct TYPE_2__ {int handle; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct g2d_image*) ;
 struct exynos_page* FUNC_2 (int ,int ) ;

__attribute__((used)) static struct exynos_page *FUNC_3(struct exynos_data *VAR_0)
{
   struct exynos_page *VAR_1 = ((void*)0);
   struct g2d_image *VAR_2 = VAR_0->dst;


   while (!VAR_1)
   {
      VAR_1 = FUNC_2(VAR_0->pages, VAR_0->num_pages);

      if (!VAR_1)
         FUNC_0(-1);
   }

   VAR_2->bo[0] = VAR_1->bo->handle;

   if (VAR_1->clear)
   {
      if (FUNC_1(VAR_0->g2d, VAR_2) == 0)
         VAR_1->clear = 0;
   }

   VAR_1->used = 1;
   return VAR_1;
}
