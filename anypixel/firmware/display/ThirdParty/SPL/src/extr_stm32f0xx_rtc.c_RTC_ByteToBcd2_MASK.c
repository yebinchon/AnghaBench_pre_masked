
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static uint8_t FUNC_0(uint8_t VAR_0)
{
  uint8_t VAR_1 = 0;

  while (VAR_0 >= 10)
  {
    VAR_1++;
    VAR_0 -= 10;
  }

  return ((uint8_t)(VAR_1 << 4) | VAR_0);
}
