
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static unsigned int
FUNC_1(int VAR_0, int VAR_1, unsigned int *VAR_2,
   int VAR_3)
{
   if (*VAR_2)
      return 16;

   else
   {
      int VAR_4 = FUNC_0(VAR_0, VAR_1);

      if (VAR_3)
      {
         if (VAR_4 <= 8)
            return 1 << VAR_4;

         else
            return 256;
      }

      else if (VAR_4 < 8)
         return 64;

      else if (VAR_4 > 16)
         return 1024;

      else
         return 256;
   }
}
