
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static inline u8 FUNC_0(const u8 *VAR_0)
{
 if (!(VAR_0[3] & 0x10))
  return 0;

 if (VAR_0[3] & 0x20) {
  if (VAR_0[4] > 183)
   return 0;
  else
   return 184 - 1 - VAR_0[4];
 }

 return 184;
}
