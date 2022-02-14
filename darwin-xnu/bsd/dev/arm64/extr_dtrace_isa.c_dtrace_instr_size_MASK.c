
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;



int
FUNC_0(uint32_t VAR_0, int VAR_1)
{
 if (VAR_1) {
  uint16_t VAR_2 = *(uint16_t*) &VAR_0;
  if (((VAR_2 >> 11) & 0x1F) > 0x1C)
   return 4;
  else
   return 2;
 } else {
  return 4;
 }
}
