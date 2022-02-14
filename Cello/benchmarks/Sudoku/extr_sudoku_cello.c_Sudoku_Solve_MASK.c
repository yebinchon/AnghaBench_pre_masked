
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct Sudoku {int** r; } ;
typedef size_t int8_t ;
typedef size_t int16_t ;


 int FUNC_0 (struct Sudoku*,size_t*,int*,int,int) ;

__attribute__((used)) static int FUNC_1(struct Sudoku* VAR_0, const char *VAR_1) {
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 = 0, VAR_10, VAR_11 = 0;
 int8_t VAR_12[729], VAR_13[81];
 uint8_t VAR_14[324];
 int16_t VAR_15[81];
 char VAR_16[82];
 for (VAR_4 = 0; VAR_4 < 729; ++VAR_4) VAR_12[VAR_4] = 0;
 for (VAR_5 = 0; VAR_5 < 324; ++VAR_5) VAR_14[VAR_5] = 0<<7|9;
 for (VAR_2 = 0; VAR_2 < 81; ++VAR_2) {
  int VAR_17 = VAR_1[VAR_2] >= '1' && VAR_1[VAR_2] <= '9'? VAR_1[VAR_2] - '1' : -1;
  if (VAR_17 >= 0) FUNC_0(VAR_0, VAR_12, VAR_14, VAR_2 * 9 + VAR_17, 1);
  if (VAR_17 >= 0) ++VAR_11;
  VAR_13[VAR_2] = VAR_15[VAR_2] = -1, VAR_16[VAR_2] = VAR_1[VAR_2];
 }
 for (VAR_2 = 0, VAR_7 = 1, VAR_8 = 10<<16|0, VAR_16[81] = 0;;) {
  while (VAR_2 >= 0 && VAR_2 < 81 - VAR_11) {
   if (VAR_7 == 1) {
    VAR_10 = VAR_8>>16, VAR_15[VAR_2] = VAR_8&0xffff;
    if (VAR_10 > 1) {
     for (VAR_5 = 0; VAR_5 < 324; ++VAR_5) {
      if (VAR_14[VAR_5] < VAR_10) {
       VAR_10 = VAR_14[VAR_5], VAR_15[VAR_2] = VAR_5;
       if (VAR_10 <= 1) break;
      }
     }
    }
    if (VAR_10 == 0 || VAR_10 == 10) VAR_13[VAR_2--] = VAR_7 = -1;
   }
   VAR_5 = VAR_15[VAR_2];
   if (VAR_7 == -1 && VAR_13[VAR_2] >= 0) FUNC_0(VAR_0, VAR_12, VAR_14, VAR_0->r[VAR_5][VAR_13[VAR_2]], -1);
   for (VAR_6 = VAR_13[VAR_2] + 1; VAR_6 < 9; ++VAR_6)
    if (VAR_12[VAR_0->r[VAR_5][VAR_6]] == 0) break;
   if (VAR_6 < 9) {
    VAR_8 = FUNC_0(VAR_0, VAR_12, VAR_14, VAR_0->r[VAR_5][VAR_6], 1);
    VAR_13[VAR_2++] = VAR_6; VAR_7 = 1;
   } else VAR_13[VAR_2--] = VAR_7 = -1;
  }
  if (VAR_2 < 0) break;
  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) VAR_4 = VAR_0->r[VAR_15[VAR_3]][VAR_13[VAR_3]], VAR_16[VAR_4/9] = VAR_4%9 + '1';

  ++VAR_9; --VAR_2; VAR_7 = -1;
 }
 return VAR_9;
}
