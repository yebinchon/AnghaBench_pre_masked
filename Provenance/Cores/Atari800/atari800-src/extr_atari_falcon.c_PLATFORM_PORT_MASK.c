
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_0(int VAR_6)
{
 if (VAR_6 == 0) {
  if (VAR_4 == VAR_0 && VAR_5 == 1)
   return (((~VAR_2 << 4) & 0xf0) | ((~VAR_1) & 0x0f));
  else {
   if (VAR_3)
    return ((VAR_4 << 4) | ((~VAR_1) & 0x0f));
   else
    return (((~VAR_1 << 4) & 0xf0) | VAR_4);
  }
 }
 else
  return 0xff;
}
