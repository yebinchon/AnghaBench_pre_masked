
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_8__ {scalar_t__ offset; } ;
struct TYPE_9__ {TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_0, Instruction *VAR_1, int VAR_2) {
  Instruction *VAR_3 = (Instruction *)FUNC_3(VAR_0, VAR_2);
  int VAR_4 = FUNC_4(VAR_0, VAR_2);
  int VAR_5 = FUNC_2(VAR_0, VAR_2);
  FUNC_0(VAR_1, VAR_3, VAR_4 + 1);
  if (VAR_5 != 0) {
    Instruction *VAR_6;
    for (VAR_6 = VAR_1; VAR_6 < VAR_1 + VAR_4; VAR_6 += FUNC_5(VAR_6)) {
      if (FUNC_1(VAR_6) && VAR_6->i.offset != 0)
        VAR_6->i.offset += VAR_5;
    }
  }
  return VAR_4;
}
