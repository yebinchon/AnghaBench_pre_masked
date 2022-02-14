
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int* VAR_0 ;

uint16_t
FUNC_0(uint16_t VAR_1, const void *VAR_2, size_t VAR_3)
{
 const uint8_t *VAR_4;

 VAR_4 = VAR_2;

 while (VAR_3--)
  VAR_1 = VAR_0[(VAR_1 ^ (*VAR_4++)) & 0xFF] ^ (VAR_1 >> 8);

    return VAR_1;
}
