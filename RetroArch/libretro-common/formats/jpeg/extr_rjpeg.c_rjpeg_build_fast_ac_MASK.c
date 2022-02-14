
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* fast; int* values; int* size; } ;
typedef TYPE_1__ rjpeg_huffman ;
typedef scalar_t__ int16_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(int16_t *VAR_1, rjpeg_huffman *VAR_2)
{
   int VAR_3;

   for (VAR_3 = 0; VAR_3 < (1 << VAR_0); ++VAR_3)
   {
      uint8_t VAR_4 = VAR_2->fast[VAR_3];

      VAR_1[VAR_3] = 0;

      if (VAR_4 < 255)
      {
         int VAR_5 = VAR_2->values[VAR_4];
         int VAR_6 = (VAR_5 >> 4) & 15;
         int VAR_7 = VAR_5 & 15;
         int VAR_8 = VAR_2->size[VAR_4];

         if (VAR_7 && VAR_8 + VAR_7 <= VAR_0)
         {

            int VAR_9 = ((VAR_3 << VAR_8) & ((1 << VAR_0) - 1)) >> (VAR_0 - VAR_7);
            int VAR_10 = 1 << (VAR_7 - 1);
            if (VAR_9 < VAR_10)
               VAR_9 += (-1 << VAR_7) + 1;


            if (VAR_9 >= -128 && VAR_9 <= 127)
               VAR_1[VAR_3] = (int16_t) ((VAR_9 << 8) + (VAR_6 << 4) + (VAR_8 + VAR_7));
         }
      }
   }
}
