
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int memerrmsg; int ** strcache; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5 (lua_State *VAR_4) {
  global_State *VAR_5 = FUNC_0(VAR_4);
  int VAR_6, VAR_7;
  FUNC_3(VAR_4, VAR_1);

  VAR_5->memerrmsg = FUNC_2(VAR_4, VAR_0);
  FUNC_1(VAR_4, FUNC_4(VAR_5->memerrmsg));
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
      VAR_5->strcache[VAR_6][VAR_7] = VAR_5->memerrmsg;
}
