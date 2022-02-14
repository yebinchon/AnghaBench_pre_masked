
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned short int FUNC_0(int VAR_0, int VAR_1)
{
 unsigned short int VAR_2;

 int VAR_3 = VAR_1 / 2 / VAR_0;
 if ((VAR_3 & 0x7) == 7)
  VAR_3++;
 VAR_2 = VAR_3 >> 3;
 VAR_3 &= 0x7;
 if (VAR_3 == 1)
  VAR_2 |= 0xc000;
 else if (VAR_3 >= 4)
  VAR_2 |= 0x4000;
 else if (VAR_3 != 0)
  VAR_2 |= 0x8000;
 else if (VAR_2 == 1)
  VAR_2 = 0;
 return VAR_2;
}
