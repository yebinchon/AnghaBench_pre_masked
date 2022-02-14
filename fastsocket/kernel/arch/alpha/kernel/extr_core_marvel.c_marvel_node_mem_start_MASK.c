
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned long
FUNC_0(int VAR_0)
{
 unsigned long VAR_1;

 VAR_1 = (VAR_0 & 0x3) | ((VAR_0 & (0x1f << 2)) << 1);
 VAR_1 <<= 34;

 return VAR_1;
}
