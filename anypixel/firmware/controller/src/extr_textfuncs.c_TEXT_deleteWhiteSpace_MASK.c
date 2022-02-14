
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint16_t ;



uint16_t FUNC_0(uint8_t *VAR_0, uint16_t VAR_1) {
 int VAR_2=0;
 int VAR_3;

 for(VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if(VAR_0[VAR_3] == ' ' || VAR_0[VAR_3] == '\t' || VAR_0[VAR_3] == '\r' || VAR_0[VAR_3] == '\n')
   VAR_2++;
  else
   VAR_0[VAR_3-VAR_2] = VAR_0[VAR_3];
 }
 return VAR_2;
}
