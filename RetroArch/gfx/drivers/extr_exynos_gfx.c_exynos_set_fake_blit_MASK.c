
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_data {unsigned int num_pages; TYPE_1__* pages; scalar_t__ height; scalar_t__* blit_params; scalar_t__ width; } ;
struct TYPE_2__ {int clear; } ;



__attribute__((used)) static void FUNC_0(struct exynos_data *VAR_0)
{
   unsigned VAR_1;

   VAR_0->blit_params[0] = 0;
   VAR_0->blit_params[1] = 0;
   VAR_0->blit_params[2] = VAR_0->width;
   VAR_0->blit_params[3] = VAR_0->height;

   for (VAR_1 = 0; VAR_1 < VAR_0->num_pages; ++VAR_1)
      VAR_0->pages[VAR_1].clear = 1;
}
