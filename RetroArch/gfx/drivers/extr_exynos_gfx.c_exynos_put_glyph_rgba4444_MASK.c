
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct exynos_data {TYPE_2__** buf; TYPE_1__** src; } ;
typedef enum exynos_image_type { ____Placeholder_exynos_image_type } exynos_image_type ;
struct TYPE_6__ {int buf_type; } ;
struct TYPE_5__ {scalar_t__ vaddr; } ;
struct TYPE_4__ {unsigned int width; } ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct exynos_data *VAR_2,
      const uint8_t *__restrict__ VAR_3,
      uint16_t VAR_4, unsigned VAR_5, unsigned VAR_6,
      unsigned VAR_7, unsigned VAR_8, unsigned VAR_9)
{
   unsigned VAR_10, VAR_11;
   const enum exynos_image_type VAR_12 = VAR_1[VAR_0].buf_type;
   const unsigned VAR_13 = VAR_2->src[VAR_0]->width;
   uint16_t *__restrict__ VAR_14 = (uint16_t*)VAR_2->buf[VAR_12]->vaddr +
      VAR_9 * VAR_13 + VAR_8;

   for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11, VAR_3 += VAR_7, VAR_14 += VAR_13)
   {
      for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10)
      {
         const uint16_t VAR_15 = VAR_3[VAR_10];
         VAR_14[VAR_10] = VAR_4 | ((VAR_15 << 8) & 0xf000);
      }
   }
}
