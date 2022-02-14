
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(
      size_t VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3,
      unsigned *VAR_4, unsigned *VAR_5, unsigned *VAR_6)
{
   unsigned VAR_7 = 0;


   *VAR_4 = 0;
   *VAR_5 = 0;
   *VAR_6 = 0;


   if (VAR_3 > 0)
   {
      *VAR_4 = (VAR_3 / VAR_1) + 1;
      *VAR_6 = VAR_1 - (VAR_3 % VAR_1);
   }



   VAR_7 = (*VAR_4 >= VAR_0) ? 0 : VAR_0 - *VAR_4;


   if ((VAR_7 > 0) && (VAR_2 > *VAR_6))
   {
      *VAR_5 = (VAR_2 - *VAR_6) / VAR_1;
      *VAR_5 = (*VAR_5 > VAR_7) ? VAR_7 : *VAR_5;
   }
}
