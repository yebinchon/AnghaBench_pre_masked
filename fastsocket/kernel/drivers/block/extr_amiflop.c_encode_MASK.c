
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned long VAR_0, unsigned long *VAR_1)
{
 unsigned long VAR_2;

 VAR_0 &= 0x55555555;
 VAR_2 = VAR_0 ^ 0x55555555;
 VAR_0 |= ((VAR_2 >> 1) | 0x80000000) & (VAR_2 << 1);

 if (*(VAR_1 - 1) & 0x00000001)
  VAR_0 &= 0x7FFFFFFF;

 *VAR_1 = VAR_0;
}
