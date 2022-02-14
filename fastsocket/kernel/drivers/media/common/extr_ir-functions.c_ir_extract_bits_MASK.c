
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



u32 FUNC_0(u32 VAR_0, u32 VAR_1)
{
 u32 VAR_2 = 1, VAR_3 = 0;

 do {
     if (VAR_1&1) {
  if (VAR_0&1)
   VAR_3 |= VAR_2;
  VAR_2<<=1;
     }
     VAR_0>>=1;
 } while (VAR_1>>=1);

 return VAR_3;
}
