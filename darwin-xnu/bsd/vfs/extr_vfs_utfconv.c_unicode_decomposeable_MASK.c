
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;


 int* VAR_0 ;

int
FUNC_0(u_int16_t VAR_1) {
 const u_int8_t *VAR_2 = VAR_0;
 u_int8_t VAR_3;

 if (VAR_1 < 0x00C0)
  return (0);

 VAR_3 = VAR_2[(VAR_1 >> 8) & 0xFF];

 if (VAR_3 == 0xFF) {
  return (1);
 } else if (VAR_3) {
  VAR_2 = VAR_2 + ((VAR_3 - 1) * 32) + 256;
  return (VAR_2[(VAR_1 & 0xFF) / 8] & (1 << (VAR_1 % 8)) ? 1 : 0);
 }
     return (0);
}
