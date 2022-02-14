
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_8__ {scalar_t__ aux; } ;
struct TYPE_9__ {TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;


 int FUNC_0 (int *,TYPE_2__*,int) ;
 int FUNC_1 (int *,scalar_t__,int ,int *) ;
 TYPE_2__* FUNC_2 (int *,int,int*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_0) {

  int VAR_1, VAR_2;
  Instruction *VAR_3 = FUNC_2(VAR_0, 1, &VAR_1);
  Instruction *VAR_4 = FUNC_2(VAR_0, 2, &VAR_2);
  if (FUNC_3(VAR_3) && FUNC_3(VAR_4))
    FUNC_1(VAR_0, VAR_3->i.aux + VAR_4->i.aux, 0, ((void*)0));
  else {
    Instruction *VAR_5 = FUNC_4(VAR_0, VAR_1 + VAR_2);
    Instruction *VAR_6 = VAR_5 + FUNC_0(VAR_0, VAR_5, 1);
    FUNC_0(VAR_0, VAR_6, 2);
    FUNC_5(VAR_5);
  }
  return 1;
}
