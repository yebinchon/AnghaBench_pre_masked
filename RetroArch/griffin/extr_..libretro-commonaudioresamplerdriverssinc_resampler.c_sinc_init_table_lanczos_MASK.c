
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rarch_sinc_resampler_t ;


 double VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(rarch_sinc_resampler_t *VAR_1, double VAR_2,
      float *VAR_3, int VAR_4, int VAR_5, bool VAR_6)
{
   int VAR_7, VAR_8;
   double VAR_9 = FUNC_0(0.0);
   int VAR_10 = VAR_6 ? 2 : 1;
   double VAR_11 = VAR_5 / 2.0;

   for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
   {
      for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
      {
         double VAR_12;
         float VAR_13;
         int VAR_14 = VAR_8 * VAR_4 + VAR_7;
         double VAR_15 = (double)VAR_14 / (VAR_4 * VAR_5);
         VAR_15 = 2.0 * VAR_15 - 1.0;
         VAR_12 = VAR_11 * VAR_15;
         VAR_13 = VAR_2 * FUNC_1(VAR_0 * VAR_12 * VAR_2) *
            FUNC_0(VAR_15) / VAR_9;
         VAR_3[VAR_7 * VAR_10 * VAR_5 + VAR_8] = VAR_13;
      }
   }

   if (VAR_6)
   {
      int VAR_16;
      int VAR_17;

      for (VAR_17 = 0; VAR_17 < VAR_4 - 1; VAR_17++)
      {
         for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
         {
            float VAR_18 = VAR_3[(VAR_17 + 1) * VAR_10 * VAR_5 + VAR_8] -
               VAR_3[VAR_17 * VAR_10 * VAR_5 + VAR_8];
            VAR_3[(VAR_17 * VAR_10 + 1) * VAR_5 + VAR_8] = VAR_18;
         }
      }

      VAR_16 = VAR_4 - 1;
      for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
      {
         float VAR_19, VAR_20;
         double VAR_21;
         int VAR_22 = VAR_8 * VAR_4 + (VAR_16 + 1);
         double VAR_23 = (double)VAR_22 / (VAR_4 * VAR_5);
         VAR_23 = 2.0 * VAR_23 - 1.0;
         VAR_21 = VAR_11 * VAR_23;

         VAR_19 = VAR_2 * FUNC_1(VAR_0 * VAR_21 * VAR_2) *
            FUNC_0(VAR_23) / VAR_9;
         VAR_20 = (VAR_19 - VAR_3[VAR_16 * VAR_10 * VAR_5 + VAR_8]);
         VAR_3[(VAR_16 * VAR_10 + 1) * VAR_5 + VAR_8] = VAR_20;
      }
   }
}
