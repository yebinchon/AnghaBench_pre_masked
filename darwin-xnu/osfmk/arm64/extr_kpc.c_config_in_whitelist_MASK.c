
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ kpc_config_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static boolean_t
FUNC_0(kpc_config_t VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_4 == VAR_3[VAR_5]) {
   return VAR_1;
  }
 }

 return VAR_0;
}
