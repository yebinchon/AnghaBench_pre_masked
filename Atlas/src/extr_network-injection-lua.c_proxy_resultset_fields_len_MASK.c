
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* fields; } ;
typedef TYPE_1__ proxy_resultset_t ;
typedef int lua_State ;
struct TYPE_6__ {int len; } ;
struct TYPE_5__ {TYPE_1__* udata; } ;
typedef TYPE_2__ GRef ;
typedef TYPE_3__ GPtrArray ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_0) {
 GRef *VAR_1 = *(GRef **)FUNC_0(VAR_0);
 proxy_resultset_t *VAR_2 = VAR_1->udata;
 GPtrArray *VAR_3 = VAR_2->fields;
    FUNC_1(VAR_0, VAR_3->len);
    return 1;
}
