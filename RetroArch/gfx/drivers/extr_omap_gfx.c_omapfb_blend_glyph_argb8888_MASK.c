
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int bpp; TYPE_3__* cur_page; TYPE_2__* current_state; } ;
typedef TYPE_4__ omapfb_data_t ;
struct TYPE_8__ {scalar_t__ buf; } ;
struct TYPE_6__ {int xres; } ;
struct TYPE_7__ {TYPE_1__ si; } ;


 int FUNC_0 (int*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(omapfb_data_t *VAR_0,
      const uint8_t *VAR_1, uint8_t *VAR_2,
      unsigned VAR_3, unsigned VAR_4, unsigned VAR_5,
      unsigned VAR_6, unsigned VAR_7)
{
   unsigned VAR_8, VAR_9;
   unsigned VAR_10, VAR_11, VAR_12;
   unsigned VAR_13 = (VAR_0->current_state->si.xres * VAR_0->bpp) >> 2;
   uint32_t *VAR_14 = (uint32_t*)VAR_0->cur_page->buf + VAR_7 * VAR_13 + VAR_6;

   for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9, VAR_1 += VAR_5, VAR_14 += VAR_13)
   {
      for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8)
      {
         const uint8_t VAR_15 = VAR_1[VAR_8];
         const uint32_t VAR_16 = VAR_14[VAR_8];

         if (VAR_15 == 0)
            continue;
         if (VAR_15 == 255)
         {
            FUNC_0(&VAR_14[VAR_8], VAR_2[0], VAR_2[1], VAR_2[2]);
            continue;
         }

         VAR_10 = (VAR_16 & 0xff0000) >> 16;
         VAR_11 = (VAR_16 & 0x00ff00) >> 8;
         VAR_12 = (VAR_16 & 0x0000ff) >> 0;

         FUNC_0(&VAR_14[VAR_8], (VAR_10 * (256 - VAR_15) + VAR_2[0] * VAR_15) >> 8,
               (VAR_11 * (256 - VAR_15) + VAR_2[1] * VAR_15) >> 8,
               (VAR_12 * (256 - VAR_15) + VAR_2[2] * VAR_15) >> 8);
      }
   }
}
