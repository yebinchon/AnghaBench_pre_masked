
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stripes_handle_t ;



__attribute__((used)) static int FUNC_0(void *VAR_0, int VAR_1, int VAR_2, unsigned VAR_3, unsigned VAR_4)
{
   unsigned VAR_5;
   int VAR_6, VAR_7;
   stripes_handle_t *VAR_8 = (stripes_handle_t*)VAR_0;

   if (!VAR_8)
      return -1;

   VAR_6 = VAR_3 / 11;
   VAR_7 = VAR_4 / 10;

   if (VAR_6 >= VAR_7)
      VAR_6 = VAR_7;

   for (VAR_5 = 0; VAR_5 < 44; VAR_5++)
   {
      int VAR_9 = (VAR_5 / 11)*VAR_4/10.0;
      int VAR_10 = VAR_3/2.0 - (11*VAR_6)/2.0 + (VAR_5 % 11) * VAR_6;
      int VAR_11 = VAR_4/2.0 + VAR_7*1.5 + VAR_9 - VAR_7;

      if (VAR_1 > VAR_10 && VAR_1 < VAR_10 + VAR_6
       && VAR_2 > VAR_11 && VAR_2 < VAR_11 + VAR_7)
         return VAR_5;
   }

   return -1;
}
