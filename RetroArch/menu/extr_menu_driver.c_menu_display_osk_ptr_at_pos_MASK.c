
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(void *VAR_0, int VAR_1, int VAR_2,
      unsigned VAR_3, unsigned VAR_4)
{
   unsigned VAR_5;
   int VAR_6 = VAR_3 / 11;
   int VAR_7 = VAR_4 / 10;

   if (VAR_6 >= VAR_7)
      VAR_6 = VAR_7;

   for (VAR_5 = 0; VAR_5 < 44; VAR_5++)
   {
      int VAR_8 = (VAR_5 / 11)*VAR_4/10.0;
      int VAR_9 = VAR_3/2.0 - (11*VAR_6)/2.0 + (VAR_5 % 11) * VAR_6;
      int VAR_10 = VAR_4/2.0 + VAR_7*1.5 + VAR_8 - VAR_7;

      if (VAR_1 > VAR_9 && VAR_1 < VAR_9 + VAR_6
       && VAR_2 > VAR_10 && VAR_2 < VAR_10 + VAR_7)
         return VAR_5;
   }

   return -1;
}
