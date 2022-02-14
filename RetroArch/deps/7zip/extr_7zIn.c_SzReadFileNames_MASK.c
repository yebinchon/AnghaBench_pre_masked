
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
typedef int SRes ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static SRes FUNC_0(const uint8_t *VAR_2, size_t VAR_3, uint32_t VAR_4, size_t *VAR_5)
{
   uint32_t VAR_6;
   size_t VAR_7 = 0;
   for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
   {
      VAR_5[VAR_6] = VAR_7;
      for (;;)
      {
         if (VAR_7 >= VAR_3)
            return VAR_0;
         if (VAR_2[VAR_7 * 2] == 0 && VAR_2[VAR_7 * 2 + 1] == 0)
            break;
         VAR_7++;
      }
      VAR_7++;
   }
   VAR_5[VAR_6] = VAR_7;
   return (VAR_7 == VAR_3) ? VAR_1 : VAR_0;
}
