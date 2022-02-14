
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int buff; } ;
typedef TYPE_1__ Instruction ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int,int *) ;
 char* FUNC_2 (int *,int,size_t*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int ,unsigned char) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_0) {
  size_t VAR_1;
  const char *VAR_2 = FUNC_2(VAR_0, 1, &VAR_1);
  if (VAR_1 == 1)
    FUNC_1(VAR_0, 1, ((void*)0));
  else {
    Instruction *VAR_3 = FUNC_3(VAR_0);
    while (VAR_1--) {
      FUNC_4(VAR_3[1].buff, (unsigned char)(*VAR_2));
      VAR_2++;
    }
    FUNC_0(VAR_3);
  }
  return 1;
}
