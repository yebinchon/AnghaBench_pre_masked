
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const uint8_t ;
typedef int uint16_t ;



int FUNC_0(uint8_t *VAR_0, const char *VAR_1, uint16_t VAR_2) {
 int VAR_3;
 int VAR_4;
 for(VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = VAR_0[VAR_3] - VAR_1[VAR_3];
  if(VAR_4 != 0)
   return VAR_4;
 }
 return 0;
}
