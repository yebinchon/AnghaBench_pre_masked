
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

int
FUNC_1(unsigned long VAR_0)
{
 int VAR_1;

 if ((VAR_0 >> 43) & 1)
  VAR_1 = (~(VAR_0 >> 35) & 0xff);
 else
  VAR_1 = ((VAR_0 >> 34) & 0x3) | ((VAR_0 >> (37 - 2)) & (0x1f << 2));

 return FUNC_0(VAR_1);
}
