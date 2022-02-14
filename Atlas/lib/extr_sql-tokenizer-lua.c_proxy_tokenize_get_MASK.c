
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int token ;
typedef int sql_token ;
typedef int lua_State ;
struct TYPE_2__ {scalar_t__ len; int ** pdata; } ;
typedef TYPE_1__ GPtrArray ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int ** FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(lua_State *VAR_1) {
 GPtrArray *VAR_2 = *(GPtrArray **)FUNC_1(VAR_1);
 int VAR_3 = FUNC_0(VAR_1, 2);
 sql_token *VAR_4;
 sql_token **VAR_5;

 if (VAR_2->len > VAR_0) {
  return 0;
 }


 if (VAR_3 < 1 || VAR_3 > (int)VAR_2->len) {
  return 0;
 }

 VAR_4 = VAR_2->pdata[VAR_3 - 1];
 if (((void*)0) == VAR_4) {
  FUNC_3(VAR_1);

  return 1;
 }

 VAR_5 = FUNC_2(VAR_1, sizeof(VAR_4));
 *VAR_5 = VAR_4;

 FUNC_5(VAR_1);
 FUNC_4(VAR_1, -2);

 return 1;
}
