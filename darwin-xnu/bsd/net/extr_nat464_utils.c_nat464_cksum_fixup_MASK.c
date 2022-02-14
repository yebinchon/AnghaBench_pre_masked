
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;



uint16_t
FUNC_0(uint16_t VAR_0, uint16_t VAR_1, uint16_t VAR_2, uint8_t VAR_3)
{
 uint32_t VAR_4;

 if (VAR_3 && !VAR_0)
  return (0);
 VAR_4 = VAR_0 + VAR_1 - VAR_2;
 VAR_4 = (VAR_4 >> 16) + (VAR_4 & 0xffff);
 VAR_4 = VAR_4 & 0xffff;
 if (VAR_3 && !VAR_4)
  return (0xffff);
 return (VAR_4);
}
