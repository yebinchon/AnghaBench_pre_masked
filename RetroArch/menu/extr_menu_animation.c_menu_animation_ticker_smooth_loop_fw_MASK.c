
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;


 int FUNC_0 (size_t,unsigned int,unsigned int,unsigned int,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_1(uint64_t VAR_0,
      unsigned VAR_1, size_t VAR_2,
      unsigned VAR_3, size_t VAR_4,
      unsigned VAR_5, unsigned VAR_6,
      unsigned *VAR_7, unsigned *VAR_8,
      unsigned *VAR_9, unsigned *VAR_10,
      unsigned *VAR_11, unsigned *VAR_12,
      unsigned *VAR_13)
{
   unsigned VAR_14 = VAR_1 + VAR_3;
   unsigned VAR_15 = VAR_0 % VAR_14;

   unsigned VAR_16 = VAR_6;


   *VAR_7 = 0;
   *VAR_8 = 0;
   *VAR_9 = 0;
   *VAR_10 = 0;
   *VAR_11 = 0;
   *VAR_12 = 0;
   *VAR_13 = 0;


   if ((VAR_2 < 1) || (VAR_4 < 1))
      return;
   if (VAR_15 < VAR_1)
   {
      unsigned VAR_17 = VAR_15;

      FUNC_0(
            VAR_2, VAR_5, VAR_16, VAR_17,
            VAR_7, VAR_8, VAR_13);
      VAR_16 -= (*VAR_13 + (*VAR_8 * VAR_5));
   }


   if (VAR_16 > VAR_5)
   {
      unsigned VAR_18 = 0;
      unsigned VAR_19 = 0;


      if (VAR_15 > VAR_1)
         VAR_18 = VAR_15 - VAR_1;
      else
         VAR_18 = 0;

      FUNC_0(
            VAR_4, VAR_5, VAR_16, VAR_18,
            VAR_9, VAR_10, &VAR_19);


      VAR_16 -= (VAR_19 + (*VAR_10 * VAR_5));




      if (VAR_18 > 0)
         *VAR_13 = VAR_19;
   }


   if (VAR_16 > VAR_5)
   {


      *VAR_11 = 0;


      *VAR_12 = VAR_16 / VAR_5;
      *VAR_12 = (*VAR_12 > VAR_2) ? VAR_2 : *VAR_12;
   }
}
