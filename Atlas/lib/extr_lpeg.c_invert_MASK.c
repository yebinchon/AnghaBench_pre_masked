
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Instruction ;



__attribute__((used)) static void FUNC_0 (Instruction *VAR_0, int VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++, VAR_1--) {
    Instruction VAR_3 = VAR_0[VAR_2];
    VAR_0[VAR_2] = VAR_0[VAR_1];
    VAR_0[VAR_1] = VAR_3;
  }
}
