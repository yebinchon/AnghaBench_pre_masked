
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sql_token ;
typedef int lua_State ;
struct TYPE_2__ {scalar_t__ len; int ** pdata; } ;
typedef TYPE_1__ GPtrArray ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(lua_State *VAR_2) {
 GPtrArray *VAR_3 = *(GPtrArray **)FUNC_1(VAR_2);
 int VAR_4 = FUNC_0(VAR_2, 2);
 sql_token *VAR_5;

 FUNC_2(VAR_2, 3, VAR_1);

 if (VAR_3->len > VAR_0) {
  return 0;
 }


 if (VAR_4 < 1 || VAR_4 > (int)VAR_3->len) {
  return 0;
 }

 VAR_5 = VAR_3->pdata[VAR_4 - 1];
 if (((void*)0) != VAR_5) {
  FUNC_3(VAR_5);
  VAR_3->pdata[VAR_4 - 1] = ((void*)0);
 }

 return 0;
}
