
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int width; int * vtable; int * utable; int * ytable; TYPE_1__* image; } ;
typedef TYPE_2__ xv_t ;
typedef int uint8_t ;
typedef size_t uint16_t ;
struct TYPE_4__ {scalar_t__ data; } ;



__attribute__((used)) static void FUNC_0(xv_t *VAR_0, const void *VAR_1,
      unsigned VAR_2, unsigned VAR_3, unsigned VAR_4)
{
   unsigned VAR_5, VAR_6;
   const uint16_t *VAR_7 = (const uint16_t*)VAR_1;
   uint8_t *VAR_8 = (uint8_t*)VAR_0->image->data;

   for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
   {
      for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
      {
         uint16_t VAR_9 = *VAR_7++;
         uint8_t VAR_10 = VAR_0->ytable[VAR_9];
         uint8_t VAR_11 = VAR_0->utable[VAR_9];
         uint8_t VAR_12 = VAR_0->vtable[VAR_9];
         unsigned VAR_13 = VAR_0->width << 1;

         VAR_8[0] = VAR_8[VAR_13] = VAR_11;
         VAR_8[1] = VAR_8[VAR_13 + 1] = VAR_10;
         VAR_8[2] = VAR_8[VAR_13 + 2] = VAR_12;
         VAR_8[3] = VAR_8[VAR_13 + 3] = VAR_10;
         VAR_8 += 4;
      }

      VAR_7 += (VAR_4 >> 1) - VAR_2;
      VAR_8 += (VAR_0->width - VAR_2) << 2;
   }
}
