
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int int32_t ;
typedef int int16_t ;



uint16_t FUNC_0(uint8_t *VAR_0, int32_t VAR_1, int16_t VAR_2, uint8_t VAR_3, uint8_t VAR_4, bool VAR_5) {
 uint8_t VAR_6[11];
 uint8_t VAR_7 = 0;
 bool VAR_8 = 0;
 uint8_t VAR_9;

 if(VAR_3 > VAR_2 || VAR_3 > 11)
  return 0;

 if(VAR_1 < 0) {
  VAR_8 = 1;
  VAR_1 *= -1;
 }

 do {
  VAR_6[VAR_7++] = (VAR_1 % 10) + '0';
  VAR_1 /= 10;
 } while(VAR_1 != 0);

 if(VAR_8) {
  if(VAR_7+1 > VAR_2)
   return 0;
  if(!VAR_5) {
   while( VAR_7 < (VAR_3-1) )
    VAR_6[VAR_7++] = VAR_4;
   VAR_6[VAR_7++] = '-';
  } else {
   VAR_6[VAR_7++] = '-';
  }
 }

 while( VAR_7 < VAR_3 )
  VAR_6[VAR_7++] = VAR_4;

 if(VAR_7 > VAR_2)
  return 0;

 for( VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  VAR_0[VAR_9] = VAR_6[VAR_7-1-VAR_9];

 return VAR_7;
}
