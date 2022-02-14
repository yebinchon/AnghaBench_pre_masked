
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int code_bits; int code_buffer; TYPE_1__* img_comp; } ;
typedef TYPE_2__ rjpeg_jpeg ;
typedef int rjpeg_huffman ;
typedef int int16_t ;
typedef int data ;
struct TYPE_7__ {int dc_pred; } ;


 int VAR_0 ;
 int FUNC_0 (short*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 unsigned int* VAR_1 ;
 int FUNC_3 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_4(
      rjpeg_jpeg *VAR_2, short VAR_3[64],
      rjpeg_huffman *VAR_4,
      rjpeg_huffman *VAR_5,
      int16_t *VAR_6,
      int VAR_7,
      uint8_t *VAR_8)
{
   int VAR_9,VAR_10;
   int VAR_11;
   int VAR_12 = 0;

   if (VAR_2->code_bits < 16)
      FUNC_2(VAR_2);
   VAR_11 = FUNC_3(VAR_2, VAR_4);


   if (VAR_11 < 0)
      return 0;


   FUNC_0(VAR_3,0,64*sizeof(VAR_3[0]));

   if (VAR_11)
      VAR_12 = FUNC_1(VAR_2, VAR_11);
   VAR_9 = VAR_2->img_comp[VAR_7].dc_pred + VAR_12;
   VAR_2->img_comp[VAR_7].dc_pred = VAR_9;
   VAR_3[0] = (short) (VAR_9 * VAR_8[0]);


   VAR_10 = 1;
   do
   {
      unsigned int VAR_13;
      int VAR_14,VAR_15,VAR_16;
      if (VAR_2->code_bits < 16)
         FUNC_2(VAR_2);
      VAR_14 = (VAR_2->code_buffer >> (32 - VAR_0)) & ((1 << VAR_0)-1);
      VAR_15 = VAR_6[VAR_14];
      if (VAR_15)
      {

         VAR_10 += (VAR_15 >> 4) & 15;
         VAR_16 = VAR_15 & 15;
         VAR_2->code_buffer <<= VAR_16;
         VAR_2->code_bits -= VAR_16;

         VAR_13 = VAR_1[VAR_10++];
         VAR_3[VAR_13] = (short) ((VAR_15 >> 8) * VAR_8[VAR_13]);
      }
      else
      {
         int VAR_17 = FUNC_3(VAR_2, VAR_5);


         if (VAR_17 < 0)
            return 0;

         VAR_16 = VAR_17 & 15;
         VAR_15 = VAR_17 >> 4;
         if (VAR_16 == 0)
         {
            if (VAR_17 != 0xf0)
               break;
            VAR_10 += 16;
         }
         else
         {
            VAR_10 += VAR_15;

            VAR_13 = VAR_1[VAR_10++];
            VAR_3[VAR_13] = (short) (FUNC_1(VAR_2,VAR_16) * VAR_8[VAR_13]);
         }
      }
   } while (VAR_10 < 64);
   return 1;
}
