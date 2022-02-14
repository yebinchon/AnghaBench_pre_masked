
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(uint8_t *VAR_2)
{
   size_t VAR_3;
   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
      if (VAR_2[VAR_3] != VAR_0[VAR_3])
         return 0;
   return 1;
}
