
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;



__attribute__((used)) static uint32_t FUNC_0( const char *VAR_0, uint32_t VAR_1 )
{
   uint32_t VAR_2;
   uint32_t VAR_3 = 0;

   for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
   {
      if (*VAR_0++ == '%' && (VAR_2 + 2) < VAR_1)
      {
         VAR_0 += 2;
         VAR_2 += 2;
      }
      VAR_3++;
   }

   return VAR_3;
}
