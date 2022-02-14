
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

int FUNC_1() {
  int VAR_1;

  for (VAR_1 = 0; VAR_1 < VAR_0; ++VAR_1) {
    if (FUNC_0(VAR_1) < 0) return -1;
  }

  return 0;
}
