
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ var ;
struct Tree {int dummy; } ;


 scalar_t__ FUNC_0 (struct Tree*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct Tree* VAR_0, var VAR_1, var VAR_2) {
  if (FUNC_0(VAR_0, VAR_1)) {
    *(var*)((char*)VAR_1 + 2 * sizeof(var)) = (var)(((uintptr_t)VAR_2) | 1);
  } else {
    *(var*)((char*)VAR_1 + 2 * sizeof(var)) = VAR_2;
  }
}
