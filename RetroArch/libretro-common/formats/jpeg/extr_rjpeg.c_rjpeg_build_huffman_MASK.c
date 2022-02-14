
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int* size; int* delta; int* code; int* maxcode; void** fast; } ;
typedef TYPE_1__ rjpeg_huffman ;


 int VAR_0 ;
 int FUNC_0 (void**,int,int) ;

__attribute__((used)) static int FUNC_1(rjpeg_huffman *VAR_1, int *VAR_2)
{
   int VAR_3,VAR_4,VAR_5 = 0,VAR_6;


   for (VAR_3 = 0; VAR_3 < 16; ++VAR_3)
      for (VAR_4 = 0; VAR_4 < VAR_2[VAR_3]; ++VAR_4)
         VAR_1->size[VAR_5++] = (uint8_t) (VAR_3+1);

   VAR_1->size[VAR_5] = 0;

   VAR_6 = 0;
   VAR_5 = 0;

   for (VAR_4 = 1; VAR_4 <= 16; ++VAR_4)
   {

      VAR_1->delta[VAR_4] = VAR_5 - VAR_6;
      if (VAR_1->size[VAR_5] == VAR_4)
      {
         while (VAR_1->size[VAR_5] == VAR_4)
            VAR_1->code[VAR_5++] = (uint16_t) (VAR_6++);


         if (VAR_6-1 >= (1 << VAR_4))
            return 0;
      }

      VAR_1->maxcode[VAR_4] = VAR_6 << (16-VAR_4);
      VAR_6 <<= 1;
   }
   VAR_1->maxcode[VAR_4] = 0xffffffff;


   FUNC_0(VAR_1->fast, 255, 1 << VAR_0);
   for (VAR_3 = 0; VAR_3 < VAR_5; ++VAR_3)
   {
      int VAR_7 = VAR_1->size[VAR_3];
      if (VAR_7 <= VAR_0)
      {
         int VAR_8 = VAR_1->code[VAR_3] << (VAR_0-VAR_7);
         int VAR_9 = 1 << (VAR_0-VAR_7);
         for (VAR_4 = 0; VAR_4 < VAR_9; ++VAR_4)
            VAR_1->fast[VAR_8+VAR_4] = (uint8_t) VAR_3;
      }
   }
   return 1;
}
