
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
typedef int lua_Integer ;
typedef int field ;
struct TYPE_6__ {scalar_t__ len; int ** pdata; } ;
struct TYPE_5__ {TYPE_1__* udata; } ;
typedef int MYSQL_FIELD ;
typedef TYPE_2__ GRef ;
typedef TYPE_3__ GPtrArray ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int ** FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int VAR_1 ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_2) {
 GRef *VAR_3 = *(GRef **)FUNC_1(VAR_2);
 proxy_resultset_t *VAR_4 = VAR_3->udata;
 GPtrArray *VAR_5 = VAR_4->fields;
 MYSQL_FIELD *VAR_6;
 MYSQL_FIELD **VAR_7;
 lua_Integer VAR_8 = FUNC_0(VAR_2, 2);


 if (VAR_5->len > VAR_0) {
  return 0;
 }

 if (VAR_8 < 1 || VAR_8 > (lua_Integer)VAR_5->len) {
  FUNC_3(VAR_2);

  return 1;
 }

 VAR_6 = VAR_5->pdata[VAR_8 - 1];

 VAR_7 = FUNC_2(VAR_2, sizeof(VAR_6));
 *VAR_7 = VAR_6;

 FUNC_5(VAR_2, VAR_1);
 FUNC_4(VAR_2, -2);

 return 1;
}
