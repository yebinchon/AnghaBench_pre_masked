
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char) ;
 char VAR_1 ;
 scalar_t__* VAR_2 ;

uint8_t *FUNC_1(const char *VAR_3, uint32_t VAR_4, uint8_t *VAR_5, uint32_t VAR_6)
{
   uint32_t VAR_7 = 0;
   uint32_t VAR_8 = 0;
   uint32_t VAR_9;
   char VAR_10;
   uint8_t VAR_11;





   for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++)
   {
      VAR_10 = *VAR_3++;
      if (VAR_10 == '=')
         break;

      if (!FUNC_0(VAR_10))
         continue;

      VAR_11 = VAR_2[VAR_10 - VAR_1];
      if (VAR_11 == VAR_0)
         continue;

      VAR_8 = (VAR_8 << 6) | VAR_11;
      VAR_7++;

      if (VAR_7 == 4)
      {
         if (VAR_6 < 3)
            return ((void*)0);

         *VAR_5++ = (uint8_t)(VAR_8 >> 16);
         *VAR_5++ = (uint8_t)(VAR_8 >> 8);
         *VAR_5++ = (uint8_t)(VAR_8 );
         VAR_6 -= 3;

         VAR_7 = 0;
         VAR_8 = 0;
      }
   }




   switch (VAR_7)
   {
   case 0:
      break;
   case 2:
      if (!VAR_6)
         return ((void*)0);
      *VAR_5++ = (uint8_t)(VAR_8 >> 4);
      break;
   case 3:
      if (VAR_6 < 2)
         return ((void*)0);
      *VAR_5++ = (uint8_t)(VAR_8 >> 10);
      *VAR_5++ = (uint8_t)(VAR_8 >> 2);
      break;
   default:
      return ((void*)0);
   }


   return VAR_5;
}
