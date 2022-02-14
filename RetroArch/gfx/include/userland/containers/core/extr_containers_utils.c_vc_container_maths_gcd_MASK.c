
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;



int64_t FUNC_0(int64_t VAR_0, int64_t VAR_1)
{
   while(VAR_1 != 0)
   {
      int64_t VAR_2 = VAR_1;
      VAR_1 = VAR_0 % VAR_1;
      VAR_0 = VAR_2;
   }
   return VAR_0;
}
