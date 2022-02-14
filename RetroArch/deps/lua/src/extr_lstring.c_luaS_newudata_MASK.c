
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {size_t len; int * metatable; } ;
typedef TYPE_1__ Udata ;
typedef int GCObject ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (size_t) ;

Udata *FUNC_5 (lua_State *VAR_3, size_t VAR_4) {
  Udata *VAR_5;
  GCObject *VAR_6;
  if (VAR_4 > VAR_1 - sizeof(Udata))
    FUNC_2(VAR_3);
  VAR_6 = FUNC_1(VAR_3, VAR_0, FUNC_4(VAR_4));
  VAR_5 = FUNC_0(VAR_6);
  VAR_5->len = VAR_4;
  VAR_5->metatable = ((void*)0);
  FUNC_3(VAR_3, VAR_5, VAR_2);
  return VAR_5;
}
