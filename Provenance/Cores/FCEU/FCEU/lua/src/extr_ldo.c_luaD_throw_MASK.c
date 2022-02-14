
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int status; TYPE_7__* errorJmp; } ;
typedef TYPE_1__ lua_State ;
struct TYPE_12__ {int (* panic ) (TYPE_1__*) ;} ;
struct TYPE_11__ {int status; } ;


 int VAR_0 ;
 TYPE_8__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_7__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7 (lua_State *VAR_1, int VAR_2) {
  if (VAR_1->errorJmp) {
    VAR_1->errorJmp->status = VAR_2;
    FUNC_1(VAR_1, VAR_1->errorJmp);
  }
  else {
    VAR_1->status = FUNC_2(VAR_2);
    if (FUNC_0(VAR_1)->panic) {
      FUNC_5(VAR_1, VAR_2);
      FUNC_4(VAR_1);
      FUNC_0(VAR_1)->panic(VAR_1);
    }
    FUNC_3(VAR_0);
  }
}
