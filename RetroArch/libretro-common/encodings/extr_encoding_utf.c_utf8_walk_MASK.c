
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (char const**) ;

uint32_t FUNC_1(const char **VAR_0)
{
   uint8_t VAR_1 = FUNC_0(VAR_0);
   uint32_t VAR_2 = 0;

   if (VAR_1 < 128)
      return VAR_1;

   VAR_2 = (VAR_2 << 6) | (FUNC_0(VAR_0) & 0x3F);
   if (VAR_1 >= 0xE0)
   {
      VAR_2 = (VAR_2 << 6) | (FUNC_0(VAR_0) & 0x3F);
      if (VAR_1 >= 0xF0)
      {
         VAR_2 = (VAR_2 << 6) | (FUNC_0(VAR_0) & 0x3F);
         return VAR_2 | (VAR_1 & 7) << 18;
      }
      return VAR_2 | (VAR_1 & 15) << 12;
   }

   return VAR_2 | (VAR_1 & 31) << 6;
}
