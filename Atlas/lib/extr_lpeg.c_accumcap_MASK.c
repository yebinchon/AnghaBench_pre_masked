
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {int cap; int * L; } ;
typedef TYPE_1__ CapState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9 (CapState *VAR_1) {
  lua_State *VAR_2 = VAR_1->L;
  if (FUNC_2(VAR_1->cap++) || FUNC_1(VAR_1->cap) || FUNC_7(VAR_1) != 1)
    return FUNC_3(VAR_2, "no initial value for accumulator capture");
  while (!FUNC_1(VAR_1->cap)) {
    int VAR_3;
    if (FUNC_0(VAR_1->cap) != VAR_0)
      return FUNC_3(VAR_2, "invalid (non function) capture to accumulate");
    FUNC_8(VAR_1);
    FUNC_5(VAR_2, -2);
    VAR_3 = FUNC_6(VAR_1, 0);
    FUNC_4(VAR_2, VAR_3 + 1, 1);
  }
  VAR_1->cap++;
  return 1;
}
