
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static void FUNC_0(u32 VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6;

 if (VAR_0 >= 512) {
  *VAR_1 = 8;
  *VAR_2 = 64;
 } else if (VAR_0 >= 64) {
  VAR_3 = (VAR_0 - 1) / 64 + 1;
  VAR_5 = 8;
  for (VAR_4 = 8; VAR_4 >= VAR_3; VAR_4--) {
   VAR_6 = VAR_0 % VAR_4;
   if (VAR_6 == 0) {
    *VAR_1 = VAR_4;
    break;
   }
   VAR_6 = VAR_4 - VAR_6;
   if (VAR_6 < VAR_5) {
    VAR_5 = VAR_6;
    *VAR_1 = VAR_4;
   }
  }
  *VAR_2 = (VAR_0 + *VAR_1 - 1) / *VAR_1;
 } else if (VAR_0 <= 8) {
  *VAR_1 = VAR_0;
  *VAR_2 = 1;
 } else {
  *VAR_1 = 1;
  *VAR_2 = VAR_0;
 }
}
