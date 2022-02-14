
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int gcrunning; int version; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static void FUNC_9 (lua_State *VAR_0, void *VAR_1) {
  global_State *VAR_2 = FUNC_0(VAR_0);
  FUNC_1(VAR_1);
  FUNC_8(VAR_0, VAR_0);
  FUNC_2(VAR_0, VAR_2);
  FUNC_3(VAR_0);
  FUNC_4(VAR_0);
  FUNC_5(VAR_0);
  VAR_2->gcrunning = 1;
  VAR_2->version = FUNC_6(((void*)0));
  FUNC_7(VAR_0);
}
