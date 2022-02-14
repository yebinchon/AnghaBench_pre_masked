
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* k; int* c; int* d; } ;
typedef TYPE_1__ key_set ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(key_set VAR_0) {
  int VAR_1;
  FUNC_1("K: \n");
  for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
    FUNC_1("%02X : ", VAR_0.k[VAR_1]);
    FUNC_0(VAR_0.k[VAR_1]);
    FUNC_1("\n");
  }
  FUNC_1("\nC: \n");

  for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {
    FUNC_1("%02X : ", VAR_0.c[VAR_1]);
    FUNC_0(VAR_0.c[VAR_1]);
    FUNC_1("\n");
  }
  FUNC_1("\nD: \n");

  for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {
    FUNC_1("%02X : ", VAR_0.d[VAR_1]);
    FUNC_0(VAR_0.d[VAR_1]);
    FUNC_1("\n");
  }
  FUNC_1("\n");
}
