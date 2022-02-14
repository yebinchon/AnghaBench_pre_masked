
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;



__attribute__((used)) static
__inline int
FUNC_0(u_short *VAR_0, int VAR_1, u_short VAR_2, int VAR_3)
{
 if (!VAR_1)
  return 1;
 if (VAR_3) {
  if (VAR_0[0] <= VAR_2 && VAR_2 <= VAR_0[1]) {
   return 1;
  }
  VAR_1 -= 2;
  VAR_0 += 2;
 }
 while (VAR_1-- > 0) {
  if (*VAR_0++ == VAR_2) {
   return 1;
  }
 }
 return 0;
}
