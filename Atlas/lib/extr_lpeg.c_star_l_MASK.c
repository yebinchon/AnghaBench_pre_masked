
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int cs; } ;
typedef int Instruction ;
typedef TYPE_1__ CharsetTag ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,int,int*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,int ,int,int) ;
 int * FUNC_8 (int *,int,int) ;
 int * FUNC_9 (int *,int *,int,int) ;
 scalar_t__ FUNC_10 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_11 (lua_State *VAR_1) {
  int VAR_2;
  int VAR_3 = FUNC_2(VAR_1, 2);
  Instruction *VAR_4 = FUNC_0(VAR_1, 1, &VAR_2);
  if (VAR_3 >= 0) {
    CharsetTag VAR_5;
    Instruction *VAR_6;
    if (FUNC_10(VAR_4, &VAR_5) == VAR_0)
      return FUNC_7(VAR_1, VAR_5.cs, VAR_2, VAR_3);
    if (FUNC_1(VAR_4))
      VAR_6 = FUNC_8(VAR_1, VAR_2, VAR_3);
    else
      VAR_6 = FUNC_9(VAR_1, VAR_4, VAR_2, VAR_3);
    FUNC_3(VAR_6);
    FUNC_4(VAR_6);
  }
  else {
    if (FUNC_1(VAR_4))
      FUNC_5(VAR_1, VAR_2, -VAR_3);
    else
      FUNC_6(VAR_1, VAR_2, -VAR_3);
  }
  return 1;
}
