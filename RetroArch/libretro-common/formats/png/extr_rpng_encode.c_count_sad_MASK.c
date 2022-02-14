
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int int8_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static unsigned FUNC_1(const uint8_t *VAR_0, size_t VAR_1)
{
   size_t VAR_2;
   unsigned VAR_3 = 0;
   for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
   {
      if (VAR_0[VAR_2])
         VAR_3 += FUNC_0((int8_t)VAR_0[VAR_2]);
   }
   return VAR_3;
}
