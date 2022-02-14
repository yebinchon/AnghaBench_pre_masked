
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_14__ {int* cs; } ;
struct TYPE_13__ {int* buff; } ;
typedef TYPE_1__ Instruction ;
typedef TYPE_2__ CharsetTag ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,int,int*) ;
 size_t VAR_4 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (size_t,int) ;
 TYPE_1__* FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ,int) ;
 scalar_t__ FUNC_10 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_11 (lua_State *VAR_5) {
  int VAR_6, VAR_7;
  Instruction *VAR_8 = FUNC_3(VAR_5, 1, &VAR_6);
  Instruction *VAR_9 = FUNC_3(VAR_5, 2, &VAR_7);
  CharsetTag VAR_10, VAR_11;
  if (FUNC_10(VAR_8, &VAR_10) == VAR_3 && FUNC_10(VAR_9, &VAR_11) == VAR_3) {
    Instruction *VAR_12 = FUNC_6(VAR_5);
    FUNC_5(VAR_4, VAR_12[1].buff[VAR_4] = VAR_10[VAR_4] & ~VAR_11[VAR_4]);
    FUNC_2(VAR_12);
  }
  else if (FUNC_4(VAR_9)) {
    Instruction *VAR_13 = FUNC_7(VAR_5, VAR_7 + 1 + VAR_6);
    VAR_13 += FUNC_0(VAR_5, VAR_13, 2);
    FUNC_1(VAR_13 - VAR_7, VAR_7 + 1);
    FUNC_9(VAR_13++, VAR_1, 0);
    FUNC_0(VAR_5, VAR_13, 1);
  }
  else {

    Instruction *VAR_14 = FUNC_7(VAR_5, 1 + VAR_7 + 1 + VAR_6);
    Instruction *VAR_15 = VAR_14;
    FUNC_9(VAR_14++, VAR_0, 1 + VAR_7 + 1);
    VAR_14 += FUNC_0(VAR_5, VAR_14, 2);
    FUNC_9(VAR_14++, VAR_2, 0);
    FUNC_0(VAR_5, VAR_14, 1);
    FUNC_8(VAR_15);
  }
  return 1;
}
