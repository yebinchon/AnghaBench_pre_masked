
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static bool FUNC_0(u32 VAR_0, u32 VAR_1,
          int *VAR_2, int *VAR_3)
{
 static u32 VAR_4[] = {5, 6, 9};
 u32 VAR_5, VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = (VAR_0 >> (5 * VAR_6)) & 0x1f;
  for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
   if (VAR_5 == VAR_4[VAR_7]) {
    *VAR_2 = VAR_5;
    *VAR_3 = VAR_6;
    return 1;
   }
  }
 }
 return 0;
}
