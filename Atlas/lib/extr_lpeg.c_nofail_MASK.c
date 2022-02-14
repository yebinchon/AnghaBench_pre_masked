
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Instruction ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2 (Instruction *VAR_0, int VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += FUNC_1(VAR_0 + VAR_2)) {
    if (!FUNC_0(VAR_0 + VAR_2)) return 0;
  }
  return 1;
}
