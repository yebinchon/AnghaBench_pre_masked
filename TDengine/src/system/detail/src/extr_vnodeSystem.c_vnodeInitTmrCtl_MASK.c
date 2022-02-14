
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (scalar_t__,int,int,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;

bool FUNC_2() {
  VAR_3 = FUNC_1(VAR_0 * (VAR_2 + 10) + VAR_1 + 1000, 200, 60000, "DND-vnode");
  if (VAR_3 == ((void*)0)) {
    FUNC_0("failed to init timer, exit");
    return 0;
  }
  return 1;
}
