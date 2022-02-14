
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(
      const unsigned *VAR_0, size_t VAR_1, unsigned VAR_2, unsigned VAR_3,
      unsigned *VAR_4, unsigned *VAR_5, unsigned *VAR_6,
      unsigned *VAR_7, unsigned *VAR_8)
{
   unsigned VAR_9 = 0;
   unsigned VAR_10 = VAR_3;
   bool VAR_11 = 1;
   unsigned VAR_12;


   *VAR_4 = 0;
   *VAR_5 = 0;
   *VAR_6 = 0;
   if (VAR_7)
      *VAR_7 = 0;
   if (VAR_8)
      *VAR_8 = 0;


   if (VAR_10 > 0)
   {
      for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++)
      {
         if (VAR_10 > VAR_0[VAR_12])
            VAR_10 -= VAR_0[VAR_12];
         else
         {



            *VAR_4 = VAR_12 + 1;
            *VAR_6 = VAR_0[VAR_12] - VAR_10;
            break;
         }
      }
   }


   for (VAR_12 = *VAR_4; VAR_12 < VAR_1; VAR_12++)
   {
      VAR_9 += VAR_0[VAR_12];

      if (*VAR_6 + VAR_9 <= VAR_2)
         (*VAR_5)++;
      else
      {





         if (VAR_7)
         {
            VAR_11 = 0;
            *VAR_7 = VAR_9 - VAR_0[VAR_12];
         }
         break;
      }
   }


   if (VAR_7)
      if (VAR_11)
         *VAR_7 = VAR_9;



   if (VAR_8)
   {
      *VAR_8 = *VAR_6 + VAR_9;
      *VAR_8 = (*VAR_8 > VAR_2) ? VAR_2 : *VAR_8;
   }
}
