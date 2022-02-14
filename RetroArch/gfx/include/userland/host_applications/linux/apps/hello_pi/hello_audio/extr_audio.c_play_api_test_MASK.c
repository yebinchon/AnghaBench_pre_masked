
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;
typedef int AUDIOPLAY_STATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int * VAR_3 ;
 scalar_t__ FUNC_3 (int **,int,int,int,int,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (int) ;

void FUNC_10(int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
   AUDIOPLAY_STATE_T *VAR_8;
   int32_t VAR_9;
   unsigned int VAR_10, VAR_11, VAR_12;
   int VAR_13 = 0;
   int VAR_14 = 256<<16;
   int VAR_15 = 0;
   int VAR_16 = (VAR_0 * VAR_5 * FUNC_0(VAR_6))>>3;

   FUNC_2(VAR_7 == 0 || VAR_7 == 1);

   VAR_9 = FUNC_3(&VAR_8, VAR_4, VAR_6, VAR_5, 10, VAR_16);
   FUNC_2(VAR_9 == 0);

   VAR_9 = FUNC_8(VAR_8, VAR_3[VAR_7]);
   FUNC_2(VAR_9 == 0);


   for (VAR_12=0; VAR_12<((VAR_4 * 1000)/ VAR_0); VAR_12++)
   {
      uint8_t *VAR_17;
      int16_t *VAR_18;
      uint32_t VAR_19;

      while((VAR_17 = FUNC_5(VAR_8)) == ((void*)0))
         FUNC_9(10*1000);

      VAR_18 = (int16_t *) VAR_17;


      for (VAR_10=0; VAR_10<VAR_0; VAR_10++)
      {
         int16_t VAR_20 = FUNC_1(VAR_13);
         VAR_13 += VAR_14>>16;
         VAR_14 += VAR_15;
         if (VAR_14>>16 < 512)
            VAR_15++;
         else
            VAR_15--;

         for(VAR_11=0; VAR_11<FUNC_0(VAR_6); VAR_11++)
         {
            if (VAR_5 == 32)
               *VAR_18++ = 0;
            *VAR_18++ = VAR_20;
         }
      }



      while((VAR_19 = FUNC_6(VAR_8)) > (VAR_4 * (VAR_2 + VAR_1) / 1000))
         FUNC_9(VAR_1*1000);

      VAR_9 = FUNC_7(VAR_8, VAR_17, VAR_16);
      FUNC_2(VAR_9 == 0);
   }

   FUNC_4(VAR_8);
}
