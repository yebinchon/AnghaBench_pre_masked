
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;



uint8_t FUNC_0(uint8_t *VAR_0, int *VAR_1) {
 uint8_t VAR_2 = 0;
 bool VAR_3 = 0;
 if(VAR_0[0] == '-') {
  VAR_3 = 1;
  VAR_2++;
 }
 *VAR_1 = 0;
 while(VAR_0[VAR_2] >= '0' && VAR_0[VAR_2] <= '9') {
  *VAR_1 *= 10;
  *VAR_1 += VAR_0[VAR_2++] - '0';
 }
 if(VAR_3)
  *VAR_1 *= -1;
 return VAR_2;
}
