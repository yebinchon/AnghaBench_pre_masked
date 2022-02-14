
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_0 (long VAR_1, int VAR_2)
{
  if ((VAR_2 & VAR_0) == 0)
    {
      switch (VAR_1 & 0x14)
 {
 default:
 case 0:
   return 1;
 case 0x4:
   return (VAR_1 & 0x2) == 0;
 case 0x10:
   return (VAR_1 & 0x8) == 0;
 case 0x14:
   return VAR_1 == 0x14;
 }
    }
  else
    {
      if ((VAR_1 & 0x14) == 0)
 return (VAR_1 & 0x1) == 0;
      else if ((VAR_1 & 0x14) == 0x14)
 return VAR_1 == 0x14;
      else
 return 1;
    }
}
