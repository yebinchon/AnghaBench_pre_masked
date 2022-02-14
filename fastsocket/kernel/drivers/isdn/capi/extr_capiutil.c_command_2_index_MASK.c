
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned FUNC_0(unsigned VAR_0, unsigned VAR_1)
{
 if (VAR_0 & 0x80)
  VAR_0 = 0x9 + (VAR_0 & 0x0f);
 else if (VAR_0 <= 0x0f);
 else if (VAR_0 == 0x41)
  VAR_0 = 0x9 + 0x1;
 else if (VAR_0 == 0xff)
  VAR_0 = 0x00;
 return (VAR_1 & 3) * (0x9 + 0x9) + VAR_0;
}
