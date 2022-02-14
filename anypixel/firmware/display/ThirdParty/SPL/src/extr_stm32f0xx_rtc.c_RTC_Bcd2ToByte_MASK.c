
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static uint8_t FUNC_0(uint8_t VAR_0)
{
  uint8_t VAR_1 = 0;
  VAR_1 = ((uint8_t)(VAR_0 & (uint8_t)0xF0) >> (uint8_t)0x4) * 10;
  return (VAR_1 + (VAR_0 & (uint8_t)0x0F));
}
