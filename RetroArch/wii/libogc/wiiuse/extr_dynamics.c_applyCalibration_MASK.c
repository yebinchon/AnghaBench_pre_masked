
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(float VAR_0,float VAR_1, float VAR_2,float VAR_3)
{
   float VAR_4;



   if (VAR_0 == VAR_3)
      VAR_4 = 0;
   else if (VAR_0 < VAR_3)
      VAR_4 = (VAR_0 - VAR_3) / (VAR_3 - VAR_1 + 1);
   else
      VAR_4 = (VAR_0 - VAR_3) / (VAR_2 - VAR_3 + 1);
   return VAR_4;
}
