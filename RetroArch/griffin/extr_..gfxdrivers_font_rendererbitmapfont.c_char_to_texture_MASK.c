
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int* buffer; unsigned int width; int dirty; } ;
struct TYPE_5__ {unsigned int scale_factor; TYPE_1__ atlas; } ;
typedef TYPE_2__ bm_renderer_t ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static void FUNC_1(bm_renderer_t *VAR_3, uint8_t VAR_4,
      unsigned VAR_5, unsigned VAR_6)
{
   unsigned VAR_7, VAR_8;
   uint8_t *VAR_9 = VAR_3->atlas.buffer + VAR_5 +
      VAR_6 * VAR_3->atlas.width;

   for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   {
      for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
      {
         unsigned VAR_10, VAR_11;
         unsigned VAR_12 = VAR_8 + VAR_7 * VAR_1;
         uint8_t VAR_13 = 1 << (VAR_12 & 7);
         unsigned VAR_14 = VAR_12 >> 3;
         uint8_t VAR_15 = (VAR_2[FUNC_0(VAR_4) + VAR_14] & VAR_13) ? 0xff : 0;
         uint8_t *VAR_16 = VAR_9;

         VAR_16 += VAR_8 * VAR_3->scale_factor;
         VAR_16 += VAR_7 * VAR_3->scale_factor * VAR_3->atlas.width;

         for (VAR_11 = 0; VAR_11 < VAR_3->scale_factor; VAR_11++)
            for (VAR_10 = 0; VAR_10 < VAR_3->scale_factor; VAR_10++)
               VAR_16[VAR_10 + VAR_11 * VAR_3->atlas.width] = VAR_15;
      }
   }
   VAR_3->atlas.dirty = 1;
}
