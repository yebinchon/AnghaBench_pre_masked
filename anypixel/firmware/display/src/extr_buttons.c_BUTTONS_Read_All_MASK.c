
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ int8_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

uint32_t FUNC_1(void) {
 int8_t VAR_1;
 uint32_t VAR_2 = 0;
 for(VAR_1 = VAR_0-1; VAR_1 >= 0; VAR_1--)
  VAR_2 = (VAR_2 << 1) | FUNC_0(VAR_1);
 return VAR_2;
}
