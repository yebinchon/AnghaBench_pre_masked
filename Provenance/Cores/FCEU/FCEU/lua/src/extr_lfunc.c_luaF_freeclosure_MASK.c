
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_7__ {int nupvalues; } ;
struct TYPE_6__ {int nupvalues; scalar_t__ isC; } ;
struct TYPE_8__ {TYPE_2__ l; TYPE_1__ c; } ;
typedef TYPE_3__ Closure ;


 int FUNC_0 (int *,TYPE_3__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3 (lua_State *VAR_0, Closure *VAR_1) {
  int VAR_2 = (VAR_1->c.isC) ? FUNC_1(VAR_1->c.nupvalues) :
                          FUNC_2(VAR_1->l.nupvalues);
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
