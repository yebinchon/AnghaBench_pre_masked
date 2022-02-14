
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;


 int FUNC_0 (unsigned int const*,size_t,unsigned int,unsigned int,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_1(uint64_t VAR_0,
      const unsigned *VAR_1, size_t VAR_2,
      const unsigned *VAR_3, size_t VAR_4,
      unsigned VAR_5, unsigned VAR_6, unsigned VAR_7,
      unsigned *VAR_8, unsigned *VAR_9,
      unsigned *VAR_10, unsigned *VAR_11,
      unsigned *VAR_12, unsigned *VAR_13,
      unsigned *VAR_14, unsigned *VAR_15)

{
   unsigned VAR_16 = VAR_5 + VAR_6;
   unsigned VAR_17 = VAR_0 % VAR_16;

   unsigned VAR_18 = VAR_7;


   *VAR_8 = 0;
   *VAR_9 = 0;
   *VAR_10 = 0;
   *VAR_11 = 0;
   *VAR_12 = 0;
   *VAR_13 = 0;
   *VAR_14 = 0;
   if (VAR_15)
      *VAR_15 = 0;


   if ((VAR_2 < 1) || (VAR_4 < 1))
      return;
   if (VAR_17 < VAR_5)
   {
      unsigned VAR_19 = VAR_17;
      unsigned VAR_20 = 0;
      unsigned VAR_21 = 0;

      FUNC_0(
            VAR_1, VAR_2, VAR_18, VAR_19,
            VAR_8, VAR_9, VAR_14, &VAR_21, &VAR_20);


      VAR_18 -= VAR_20;


      if (VAR_15)
         *VAR_15 += VAR_21;
   }


   if (VAR_18 > 0)
   {
      unsigned VAR_22 = 0;
      unsigned VAR_23 = 0;
      unsigned VAR_24 = 0;
      unsigned VAR_25 = 0;


      if (VAR_17 > VAR_5)
         VAR_22 = VAR_17 - VAR_5;
      else
         VAR_22 = 0;

      FUNC_0(
            VAR_3, VAR_4, VAR_18, VAR_22,
            VAR_10, VAR_11, &VAR_25, &VAR_24, &VAR_23);


      VAR_18 -= VAR_23;


      if (VAR_15)
         *VAR_15 += VAR_24;




      if (VAR_22 > 0)
         *VAR_14 = VAR_25;
   }


   if (VAR_18 > 0)
   {


      unsigned VAR_26;
      unsigned VAR_27 = 0;
      *VAR_12 = 0;


      for (VAR_26 = 0; VAR_26 < VAR_2; VAR_26++)
      {
         VAR_27 += VAR_1[VAR_26];

         if (VAR_27 <= VAR_18)
            (*VAR_13)++;
         else
         {

            if (VAR_15)
               *VAR_15 += VAR_27 - VAR_1[VAR_26];
            break;
         }
      }
   }
}
