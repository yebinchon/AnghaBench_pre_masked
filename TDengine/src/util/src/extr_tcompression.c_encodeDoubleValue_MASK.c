
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef char int8_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;

void FUNC_2(uint64_t VAR_2, uint8_t VAR_3, char *const VAR_4, int *const VAR_5) {
  uint8_t VAR_6 = (VAR_3 & FUNC_1(3)) + 1;
  int VAR_7 = (VAR_1 * VAR_0 - VAR_6 * VAR_0) * (VAR_3 >> 3);
  VAR_2 >>= VAR_7;

  while (VAR_6) {
    VAR_4[(*VAR_5)++] = (int8_t)(VAR_2 & FUNC_0(8));
    VAR_2 >>= VAR_0;
    VAR_6--;
  }
}
