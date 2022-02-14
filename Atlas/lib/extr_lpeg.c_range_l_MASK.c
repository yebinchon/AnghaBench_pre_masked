
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int byte ;
struct TYPE_4__ {int buff; } ;
typedef TYPE_1__ Instruction ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int,int,char*) ;
 char* FUNC_2 (int *,int,size_t*) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6 (lua_State *VAR_0) {
  int VAR_1;
  int VAR_2 = FUNC_3(VAR_0);
  Instruction *VAR_3 = FUNC_4(VAR_0);
  for (VAR_1 = 1; VAR_1 <= VAR_2; VAR_1++) {
    int VAR_4;
    size_t VAR_5;
    const char *VAR_6 = FUNC_2(VAR_0, VAR_1, &VAR_5);
    FUNC_1(VAR_0, VAR_5 == 2, VAR_1, "range must have two characters");
    for (VAR_4 = (byte)VAR_6[0]; VAR_4 <= (byte)VAR_6[1]; VAR_4++)
      FUNC_5(VAR_3[1].buff, VAR_4);
  }
  FUNC_0(VAR_3);
  return 1;
}
