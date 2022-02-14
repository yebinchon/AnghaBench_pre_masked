
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g2d_image {unsigned int width; unsigned int height; unsigned int stride; int color_mode; unsigned char component_alpha; } ;
struct exynos_video {struct exynos_data* data; } ;
struct exynos_data {int perf; TYPE_1__** buf; struct g2d_image** src; } ;
typedef enum exynos_buffer_type { ____Placeholder_exynos_buffer_type } exynos_buffer_type ;
struct TYPE_4__ {int buf_type; } ;
struct TYPE_3__ {int vaddr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct exynos_data*,int const,unsigned int const) ;
 int FUNC_2 (int ,void const*,unsigned int const) ;

__attribute__((used)) static void FUNC_3(void *VAR_5, const void *VAR_6, bool VAR_7,
      unsigned VAR_8, unsigned VAR_9, float VAR_10)
{
   const enum exynos_buffer_type VAR_11 = VAR_4[VAR_0].buf_type;
   struct exynos_video *VAR_12 = VAR_5;
   struct exynos_data *VAR_13 = VAR_12->data;
   struct g2d_image *VAR_14 = VAR_13->src[VAR_0];
   const unsigned VAR_15 = VAR_8 * VAR_9 * (VAR_7 ? 4 : 2);

   if (FUNC_1(VAR_13, VAR_11, VAR_15) != 0)
      return;

   VAR_14->width = VAR_8;
   VAR_14->height = VAR_9;
   VAR_14->stride = VAR_8 * (VAR_7 ? 4 : 2);
   VAR_14->color_mode = VAR_7 ? VAR_2 | VAR_3 :
      VAR_1 | VAR_3;

   VAR_14->component_alpha = (unsigned char)(255.0f * VAR_10);





   FUNC_2(VAR_13->buf[VAR_11]->vaddr, VAR_6, VAR_15);




}
