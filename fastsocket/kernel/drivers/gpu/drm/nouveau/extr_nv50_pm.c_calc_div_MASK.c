
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline u32
FUNC_0(u32 VAR_0, u32 VAR_1, int *VAR_2)
{
 u32 VAR_3 = VAR_0, VAR_4 = VAR_0;
 for (*VAR_2 = 0; *VAR_2 <= 7; (*VAR_2)++) {
  if (VAR_3 <= VAR_1) {
   VAR_4 = VAR_3 << (*VAR_2 ? 1 : 0);
   break;
  }
  VAR_3 >>= 1;
 }

 if (VAR_1 - VAR_3 <= VAR_4 - VAR_1)
  return VAR_3;
 (*VAR_2)--;
 return VAR_4;
}
