
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(unsigned char *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  int VAR_3;

  VAR_1 = (VAR_1 ^ VAR_0[VAR_2]) << 8;
  for (VAR_3 = 7; VAR_3 >= 0; VAR_3--) {
   if (VAR_1 & (0x100 << VAR_3))
    VAR_1 ^= 0x107 << VAR_3;
  }
 }

 return VAR_1;
}
