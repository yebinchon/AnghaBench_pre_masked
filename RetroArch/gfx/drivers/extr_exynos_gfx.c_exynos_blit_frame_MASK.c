
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g2d_image {unsigned int stride; } ;
struct exynos_data {unsigned int* blit_params; int perf; int g2d; int dst; TYPE_1__** buf; struct g2d_image** src; } ;
typedef enum exynos_buffer_type { ____Placeholder_exynos_buffer_type } exynos_buffer_type ;
struct TYPE_4__ {int buf_type; } ;
struct TYPE_3__ {int vaddr; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (struct exynos_data*,int const,unsigned int const) ;
 scalar_t__ FUNC_4 (int ,struct g2d_image*,int ,int ,int ,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,void const*,unsigned int const) ;

__attribute__((used)) static int FUNC_7(struct exynos_data *VAR_2, const void *VAR_3,
                             unsigned VAR_4)
{
   const enum exynos_buffer_type VAR_5 = VAR_1[VAR_0].buf_type;
   const unsigned VAR_6 = VAR_4 * VAR_2->blit_params[5];
   struct g2d_image *VAR_7 = VAR_2->src[VAR_0];

   if (FUNC_3(VAR_2, VAR_5, VAR_6) != 0)
      return -1;






   FUNC_6(VAR_2->buf[VAR_5]->vaddr, VAR_3, VAR_6);
   VAR_7->stride = VAR_4;
   if (FUNC_4(VAR_2->g2d, VAR_7, VAR_2->dst, 0, 0,
            VAR_2->blit_params[4], VAR_2->blit_params[5],
            VAR_2->blit_params[0], VAR_2->blit_params[1],
            VAR_2->blit_params[2], VAR_2->blit_params[3], 0) ||
         FUNC_5(VAR_2->g2d))
   {
      FUNC_0("[video_exynos]: failed to blit frame.\n");
      return -1;
   }





   return 0;
}
