
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 float FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

float FUNC_4(vec3_t VAR_0, vec3_t VAR_1, vec3_t VAR_2)
{
 vec3_t VAR_3, VAR_4;
 int VAR_5;

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
  if ((VAR_3[VAR_5] > VAR_1[VAR_5] && VAR_3[VAR_5] > VAR_2[VAR_5]) ||
   (VAR_3[VAR_5] < VAR_1[VAR_5] && VAR_3[VAR_5] < VAR_2[VAR_5]))
   break;
 if (VAR_5 < 3) {
  if (FUNC_3(VAR_3[VAR_5] - VAR_1[VAR_5]) < FUNC_3(VAR_3[VAR_5] - VAR_2[VAR_5]))
   FUNC_2(VAR_0, VAR_1, VAR_4);
  else
   FUNC_2(VAR_0, VAR_2, VAR_4);
  return FUNC_1(VAR_4);
 }
 FUNC_2(VAR_0, VAR_3, VAR_4);
 return FUNC_1(VAR_4);
}
