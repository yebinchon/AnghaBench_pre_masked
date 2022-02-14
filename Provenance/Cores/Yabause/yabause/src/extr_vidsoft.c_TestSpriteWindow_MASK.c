
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;

int FUNC_0(int VAR_2, int VAR_3, int VAR_4)
{
   int VAR_5;
   int VAR_6 = (VAR_4*VAR_1) + VAR_3;

   if (VAR_6 >= (704 * 512))
      return 0;

   VAR_5 = VAR_0[VAR_6];

   if (VAR_2 & 0x20)
   {
      if (VAR_2 & 0x10)
      {
         if (VAR_5 == 0)
            return 0;
      }
      else
      {
         if (VAR_5)
            return 0;
      }

      return 1;
   }
   return 3;
}
