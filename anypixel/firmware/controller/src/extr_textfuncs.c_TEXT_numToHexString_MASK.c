
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int16_t ;


 int* VAR_0 ;

uint16_t FUNC_0(uint8_t *VAR_1, uint32_t VAR_2, int16_t VAR_3, uint8_t VAR_4, uint8_t VAR_5) {
 uint8_t VAR_6[10];
 uint8_t VAR_7 = 0;
 uint8_t VAR_8;

 if(VAR_4 > VAR_3 || VAR_4 > 10)
  return 0;

 do {
  VAR_6[VAR_7++] = VAR_0[ VAR_2 & 0xF ];
  VAR_2 >>= 4;
 } while(VAR_2 != 0);

 if(VAR_7 > VAR_3)
  return 0;

 while( VAR_7 < VAR_4 )
  VAR_6[VAR_7++] = VAR_5;

 for( VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  VAR_1[VAR_8] = VAR_6[VAR_7-1-VAR_8];

 return VAR_7;
}
