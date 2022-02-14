
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u16
FUNC_0(u32 VAR_3)
{






  u16 VAR_4;
  u32 VAR_5 = VAR_3 & 0x00ffffff;
  int VAR_6 = 0;
  if (VAR_3 == 0)
     return 0;
  while (VAR_5 != 1) {
     VAR_5 >>= 1;
     VAR_6++;
  }
  if (VAR_6 == 9)
     VAR_4 = 0x4000 | (VAR_6 << 9) | (VAR_3 & 0x1ff);
  else if (VAR_6 < 9)
     VAR_4 = 0x4000 | (VAR_6 << 9) | ((VAR_3 << (9 - VAR_6)) & 0x1ff);
  else
     VAR_4 = 0x4000 | (VAR_6 << 9) | ((VAR_3 >> (VAR_6 - 9)) & 0x1ff);
  return VAR_4;
}
