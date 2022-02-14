
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

void FUNC_1(char VAR_0) {
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
    char VAR_2 = 0x01 << (7 - VAR_1);
    if (VAR_2 & VAR_0) {
      FUNC_0("1");
    } else {
      FUNC_0("0");
    }
  }
}
