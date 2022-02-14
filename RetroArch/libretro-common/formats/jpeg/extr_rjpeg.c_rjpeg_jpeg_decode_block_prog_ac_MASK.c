
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int spec_start; scalar_t__ succ_high; int succ_low; int eob_run; int spec_end; int code_bits; int code_buffer; } ;
typedef TYPE_1__ rjpeg_jpeg ;
typedef int rjpeg_huffman ;
typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 size_t* VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_5(
      rjpeg_jpeg *VAR_2,
      short VAR_3[64],
      rjpeg_huffman *VAR_4,
      int16_t *VAR_5)
{
   int VAR_6;


   if (VAR_2->spec_start == 0)
      return 0;

   if (VAR_2->succ_high == 0)
   {
      int VAR_7 = VAR_2->succ_low;

      if (VAR_2->eob_run)
      {
         --VAR_2->eob_run;
         return 1;
      }

      VAR_6 = VAR_2->spec_start;
      do
      {
         unsigned int VAR_8;
         int VAR_9,VAR_10,VAR_11;
         if (VAR_2->code_bits < 16)
            FUNC_1(VAR_2);
         VAR_9 = (VAR_2->code_buffer >> (32 - VAR_0)) & ((1 << VAR_0)-1);
         VAR_10 = VAR_5[VAR_9];
         if (VAR_10)
         {

            VAR_6 += (VAR_10 >> 4) & 15;
            VAR_11 = VAR_10 & 15;
            VAR_2->code_buffer <<= VAR_11;
            VAR_2->code_bits -= VAR_11;
            VAR_8 = VAR_1[VAR_6++];
            VAR_3[VAR_8] = (short) ((VAR_10 >> 8) << VAR_7);
         }
         else
         {
            int VAR_12 = FUNC_4(VAR_2, VAR_4);


            if (VAR_12 < 0)
               return 0;

            VAR_11 = VAR_12 & 15;
            VAR_10 = VAR_12 >> 4;
            if (VAR_11 == 0)
            {
               if (VAR_10 < 15)
               {
                  VAR_2->eob_run = (1 << VAR_10);
                  if (VAR_10)
                     VAR_2->eob_run += FUNC_3(VAR_2, VAR_10);
                  --VAR_2->eob_run;
                  break;
               }
               VAR_6 += 16;
            }
            else
            {
               VAR_6 += VAR_10;
               VAR_8 = VAR_1[VAR_6++];
               VAR_3[VAR_8] = (short) (FUNC_0(VAR_2,VAR_11) << VAR_7);
            }
         }
      } while (VAR_6 <= VAR_2->spec_end);
   }
   else
   {


      short VAR_13 = (short) (1 << VAR_2->succ_low);

      if (VAR_2->eob_run)
      {
         --VAR_2->eob_run;
         for (VAR_6 = VAR_2->spec_start; VAR_6 <= VAR_2->spec_end; ++VAR_6)
         {
            short *VAR_14 = &VAR_3[VAR_1[VAR_6]];
            if (*VAR_14 != 0)
               if (FUNC_2(VAR_2))
                  if ((*VAR_14 & VAR_13) == 0)
                  {
                     if (*VAR_14 > 0)
                        *VAR_14 += VAR_13;
                     else
                        *VAR_14 -= VAR_13;
                  }
         }
      }
      else
      {
         VAR_6 = VAR_2->spec_start;
         do
         {
            int VAR_15,VAR_16;
            int VAR_17 = FUNC_4(VAR_2, VAR_4);


            if (VAR_17 < 0)
               return 0;

            VAR_16 = VAR_17 & 15;
            VAR_15 = VAR_17 >> 4;
            if (VAR_16 == 0)
            {
               if (VAR_15 < 15)
               {
                  VAR_2->eob_run = (1 << VAR_15) - 1;
                  if (VAR_15)
                     VAR_2->eob_run += FUNC_3(VAR_2, VAR_15);
                  VAR_15 = 64;
               }
               else
               {



               }
            }
            else
            {

               if (VAR_16 != 1)
                  return 0;


               if (FUNC_2(VAR_2))
                  VAR_16 = VAR_13;
               else
                  VAR_16 = -VAR_13;
            }


            while (VAR_6 <= VAR_2->spec_end)
            {
               short *VAR_18 = &VAR_3[VAR_1[VAR_6++]];
               if (*VAR_18 != 0)
               {
                  if (FUNC_2(VAR_2))
                     if ((*VAR_18 & VAR_13) == 0)
                     {
                        if (*VAR_18 > 0)
                           *VAR_18 += VAR_13;
                        else
                           *VAR_18 -= VAR_13;
                     }
               }
               else
               {
                  if (VAR_15 == 0)
                  {
                     *VAR_18 = (short) VAR_16;
                     break;
                  }
                  --VAR_15;
               }
            }
         } while (VAR_6 <= VAR_2->spec_end);
      }
   }
   return 1;
}
