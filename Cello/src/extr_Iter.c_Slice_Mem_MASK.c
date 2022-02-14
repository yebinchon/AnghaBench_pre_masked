
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ var ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(var VAR_0, var VAR_1) {
  var VAR_2 = FUNC_0(VAR_0);
  while (VAR_2) {
    if (FUNC_2(VAR_2, VAR_1)) { return 1; }
    VAR_2 = FUNC_1(VAR_0, VAR_2);
  }
  return 0;
}
