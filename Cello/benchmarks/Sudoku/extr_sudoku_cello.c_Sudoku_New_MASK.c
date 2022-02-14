
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Sudoku* var ;
struct Sudoku {int** c; int** r; } ;
typedef scalar_t__ int8_t ;



__attribute__((used)) static void FUNC_0(var VAR_0, var VAR_1) {

 struct Sudoku* VAR_2 = VAR_0;
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int8_t VAR_9[324];
 for (VAR_3 = VAR_6 = 0; VAR_3 < 9; ++VAR_3)
  for (VAR_4 = 0; VAR_4 < 9; ++VAR_4)
   for (VAR_5 = 0; VAR_5 < 9; ++VAR_5)
    VAR_2->c[VAR_6][0] = 9 * VAR_3 + VAR_4,
    VAR_2->c[VAR_6][1] = (VAR_3/3*3 + VAR_4/3) * 9 + VAR_5 + 81,
    VAR_2->c[VAR_6][2] = 9 * VAR_3 + VAR_5 + 162,
    VAR_2->c[VAR_6][3] = 9 * VAR_4 + VAR_5 + 243,
    ++VAR_6;
 for (VAR_7 = 0; VAR_7 < 324; ++VAR_7) VAR_9[VAR_7] = 0;
 for (VAR_6 = 0; VAR_6 < 729; ++VAR_6)
  for (VAR_8 = 0; VAR_8 < 4; ++VAR_8)
   VAR_5 = VAR_2->c[VAR_6][VAR_8], VAR_2->r[VAR_5][VAR_9[VAR_5]++] = VAR_6;

}
