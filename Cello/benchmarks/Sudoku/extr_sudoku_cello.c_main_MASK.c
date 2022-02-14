
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Sudoku {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct Sudoku*,char*) ;
 int FUNC_1 (struct Sudoku*) ;
 scalar_t__ FUNC_2 (char*,int,int ) ;
 struct Sudoku* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;

int FUNC_5(int VAR_2, char** VAR_3) {
 struct Sudoku* VAR_4 = FUNC_3(VAR_0);
 char VAR_5[1024];
 while (FUNC_2(VAR_5, 1024, VAR_1) != 0) {
  if (FUNC_4(VAR_5) < 81) continue;
  FUNC_0(VAR_4, VAR_5);

 }
 FUNC_1(VAR_4);
 return 0;
}
