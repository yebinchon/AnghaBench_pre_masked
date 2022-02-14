
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned VAR_0, bool VAR_1)
{
 unsigned VAR_2 = 0;

 if (VAR_0 <= 2)
  VAR_2 = VAR_0;
 else if (!(VAR_0 & 0x1))
  VAR_2 = VAR_0 >> 1;
 else
  VAR_2 = (VAR_0 + 1) >> 1;

 return 128 << (VAR_2 + !!VAR_1);
}
