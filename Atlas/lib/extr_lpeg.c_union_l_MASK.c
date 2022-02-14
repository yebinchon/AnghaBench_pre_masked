
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {scalar_t__ code; } ;
struct TYPE_7__ {TYPE_1__ i; } ;
typedef TYPE_2__ Instruction ;
typedef int CharsetTag ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,TYPE_2__*,int,int,int*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_4 (lua_State *VAR_1) {
  int VAR_2, VAR_3;
  int VAR_4 = 0;
  Instruction *VAR_5 = FUNC_0(VAR_1, 1, &VAR_2);
  Instruction *VAR_6 = FUNC_0(VAR_1, 2, &VAR_3);
  CharsetTag VAR_7;
  if (VAR_5->i.code == VAR_0)
    FUNC_1(VAR_1, 2);
  else if (VAR_6->i.code == VAR_0)
    FUNC_1(VAR_1, 1);
  else {
    FUNC_3(VAR_6, &VAR_7);
    FUNC_2(VAR_1, VAR_5, VAR_2, VAR_3, &VAR_4, &VAR_7);
  }
  return 1;
}
