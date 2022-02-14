
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;

int FUNC_9() {

  if (!FUNC_4()) {
    FUNC_0("failed to init query qhandle, exit");
    return -1;
  }

  if (!FUNC_7()) {
    FUNC_0("failed to init timer, exit");
    return -1;
  }

  if (FUNC_6() < 0) {
    FUNC_0("failed to init vnode storage");
    return -1;
  }

  int VAR_3 = (1.0 - VAR_2) * VAR_0 * VAR_1 / 2.0;
  if (VAR_3 < 1) VAR_3 = 1;
  if (FUNC_3(VAR_3) < 0) {
    FUNC_0("failed to init vnode peer communication");
    return -1;
  }

  if (FUNC_2() < 0) {
    FUNC_0("failed to init communication to mgmt");
    return -1;
  }

  if (FUNC_5() < 0) {
    FUNC_0("failed to init communication to shell");
    return -1;
  }

  if (FUNC_8() < 0) {
    FUNC_0("failed to init store");
    return -1;
  }

  FUNC_1("vnode is initialized successfully");

  return 0;
}
