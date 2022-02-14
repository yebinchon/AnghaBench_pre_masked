
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;
typedef int qboolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

qboolean FUNC_1 (vec3_t VAR_1, vec3_t VAR_2)
{
 int VAR_3;

 for (VAR_3=0 ; VAR_3<3 ; VAR_3++)
  if (FUNC_0(VAR_1[VAR_3]-VAR_2[VAR_3]) > VAR_0)
   return 0;

 return 1;
}
