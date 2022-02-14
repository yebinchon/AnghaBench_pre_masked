
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vec3_t ;
typedef int qboolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_1( const vec3_t VAR_3, const vec3_t VAR_4 ) {
 int VAR_5;

 for (VAR_5=0 ; VAR_5<3 ; VAR_5++)
  if (FUNC_0(VAR_3[VAR_5]-VAR_4[VAR_5]) > VAR_0)
   return VAR_1;

 return VAR_2;
}
