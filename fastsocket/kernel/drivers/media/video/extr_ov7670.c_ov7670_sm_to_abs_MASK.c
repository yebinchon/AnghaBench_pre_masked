
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned char FUNC_0(unsigned char VAR_0)
{
 if ((VAR_0 & 0x80) == 0)
  return VAR_0 + 128;
 return 128 - (VAR_0 & 0x7f);
}
