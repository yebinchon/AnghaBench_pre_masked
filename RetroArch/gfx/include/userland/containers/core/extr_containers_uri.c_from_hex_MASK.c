
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(const char *VAR_0, uint32_t VAR_1)
{
   uint32_t VAR_2 = 0;

   while (VAR_1--)
   {
      char VAR_3 = *VAR_0++;
      if (VAR_3 >= '0' && VAR_3 <= '9')
         VAR_3 -= '0';
      else if (VAR_3 >= 'A' && VAR_3 <= 'F')
         VAR_3 -= 'A' - 10;
      else if (VAR_3 >= 'a' && VAR_3 <= 'f')
         VAR_3 -= 'a' - 10;
      else
         VAR_3 = 0;
      VAR_2 = (VAR_2 << 4) + VAR_3;
   }

   return VAR_2;
}
