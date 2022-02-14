
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int tmrHw_ID_t ;
typedef int tmrHw_CAPABILITY_e ;




 int VAR_0 ;
 int VAR_1 ;

uint32_t FUNC_0(tmrHw_ID_t VAR_2,
      tmrHw_CAPABILITY_e VAR_3
) {
 switch (VAR_3) {
 case 129:
  return (VAR_2 <=
   1) ? VAR_1 :
      VAR_0;
 case 128:
  return 32;
 default:
  return 0;
 }
 return 0;
}
