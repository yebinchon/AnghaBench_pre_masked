
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
 switch (((VAR_0 >> 29) & 0x7)) {
 case 0x0:
  switch ((VAR_0 >> 23) & 0x3f) {
  case 0x0:
   return 1;
  case 0x4:
   return 1;
  default:
   return 0;
  }
  break;
 case 0x1:
  return 0;
 case 0x2:
  return (VAR_0 & 0xff) + 2;
 case 0x3:
  if (((VAR_0 >> 24) & 0x1f) <= 0x18)
   return 1;

  switch ((VAR_0 >> 24) & 0x1f) {
  case 0x1c:
   return 1;
  case 0x1d:
   switch ((VAR_0 >> 16) & 0xff) {
   case 0x3:
    return (VAR_0 & 0x1f) + 2;
   case 0x4:
    return (VAR_0 & 0xf) + 2;
   default:
    return (VAR_0 & 0xffff) + 2;
   }
  case 0x1e:
   if (VAR_0 & (1 << 23))
    return (VAR_0 & 0xffff) + 1;
   else
    return 1;
  case 0x1f:
   if ((VAR_0 & (1 << 23)) == 0)
    return (VAR_0 & 0x1ffff) + 2;
   else if (VAR_0 & (1 << 17))
    if ((VAR_0 & 0xffff) == 0)
     return 0;
    else
     return (((VAR_0 & 0xffff) + 1) / 2) + 1;
   else
    return 2;
  default:
   return 0;
  }
 default:
  return 0;
 }

 return 0;
}
