
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;



__attribute__((used)) static size_t FUNC_0(const uint16_t *VAR_0, const uint16_t *VAR_1)
{
   const uint16_t *VAR_2 = VAR_0;
   {
      const uint32_t *VAR_3 = (const uint32_t*)VAR_0;
      const uint32_t *VAR_4 = (const uint32_t*)VAR_1;

      while (*VAR_3 != *VAR_4)
      {
         VAR_3++;
         VAR_4++;
      }
      VAR_0 = (const uint16_t*)VAR_3;
      VAR_1 = (const uint16_t*)VAR_4;

      if (VAR_0 != VAR_2 && VAR_0[-1] == VAR_1[-1])
      {
         VAR_0--;
         VAR_1--;
      }
   }
   return VAR_0 - VAR_2;
}
