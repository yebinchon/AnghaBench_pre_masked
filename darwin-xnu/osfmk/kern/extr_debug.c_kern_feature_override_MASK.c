
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int fdisables ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int*,int) ;
 int VAR_1 ;

boolean_t FUNC_1(uint32_t VAR_2) {
 if (VAR_1 == 0) {
  uint32_t VAR_3 = 0;



  if (FUNC_0("validation_disables", &VAR_3, sizeof(VAR_3))) {
   VAR_3 |= VAR_0;
   VAR_1 = VAR_3;
  } else {
   VAR_1 |= VAR_0;
  }
 }
 return ((VAR_1 & VAR_2) == VAR_2);
}
