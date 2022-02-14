
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int s32 ;
typedef int s16 ;



s16 FUNC_0(s32 VAR_0)
{
 u16 VAR_1;
 if (VAR_0 == 0) {
  return 31;
 } else {
  VAR_1 = 0;
  while ((VAR_0 >> 31) == (VAR_0 >> 30)) {
   VAR_1++;
   VAR_0 = VAR_0 << 1;
  }
 }
 return VAR_1;
}
