
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {int * buff; } ;
typedef TYPE_1__ Instruction ;
typedef int * Charset ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 size_t VAR_2 ;
 int FUNC_2 (size_t,int ) ;
 TYPE_1__* FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_3, Charset VAR_4, int VAR_5, int VAR_6) {

  int VAR_7;
  Instruction *VAR_8 = FUNC_3(VAR_3, VAR_6*VAR_5 + VAR_0);
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
    VAR_8 += FUNC_0(VAR_3, VAR_8, 1);
  }
  FUNC_4(VAR_8, VAR_1, 0);
  FUNC_2(VAR_2, VAR_8[1].buff[VAR_2] = VAR_4[VAR_2]);
  FUNC_1(VAR_8);
  return 1;
}
