
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char) ;
 char VAR_1 ;
 scalar_t__* VAR_2 ;

uint32_t FUNC_1(const char *VAR_3, uint32_t VAR_4)
{
   uint32_t VAR_5 = 0;
   uint32_t VAR_6;
   char VAR_7;





   for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
   {
      VAR_7 = *VAR_3++;
      if (VAR_7 == '=')
         break;

      if (!FUNC_0(VAR_7))
         continue;

      if (VAR_2[VAR_7 - VAR_1] != VAR_0)
         VAR_5++;
   }

   return (VAR_5 * 3) >> 2;
}
