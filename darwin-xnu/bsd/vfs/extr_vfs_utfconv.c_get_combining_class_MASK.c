
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int16_t ;


 int* VAR_0 ;

__attribute__((used)) static inline u_int8_t
FUNC_0(u_int16_t VAR_1) {
 const u_int8_t *VAR_2 = VAR_0;

 u_int8_t VAR_3 = VAR_2[(VAR_1 >> 8)];

 if (VAR_3) {
  VAR_2 = VAR_2 + (VAR_3 * 256);
  return VAR_2[VAR_1 % 256];
 }
 return (0);
}
