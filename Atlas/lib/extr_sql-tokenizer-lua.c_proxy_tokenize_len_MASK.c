
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int len; } ;
typedef TYPE_1__ GPtrArray ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_0) {
 GPtrArray *VAR_1 = *(GPtrArray **)FUNC_0(VAR_0);

 FUNC_1(VAR_0, VAR_1->len);

 return 1;
}
