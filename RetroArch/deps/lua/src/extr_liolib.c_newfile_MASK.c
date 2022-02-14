
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int * closef; int * f; } ;
typedef TYPE_1__ LStream ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static LStream *FUNC_1 (lua_State *VAR_1) {
  LStream *VAR_2 = FUNC_0(VAR_1);
  VAR_2->f = ((void*)0);
  VAR_2->closef = &VAR_0;
  return VAR_2;
}
