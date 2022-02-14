
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int type; void* name; } ;
typedef TYPE_1__ MYSQL_FIELD ;
typedef int GPtrArray ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 void* FUNC_1 (char*) ;
 void* FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int) ;
 TYPE_1__* FUNC_7 () ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_1, GPtrArray *VAR_2) {
 MYSQL_FIELD *VAR_3 = ((void*)0);

 VAR_3 = FUNC_7();
 if (FUNC_4(VAR_1, -2) && !FUNC_3(VAR_1, -2)) {




  VAR_3->name = FUNC_1(FUNC_6(VAR_1, -2));
 } else if (FUNC_3(VAR_1, -2)) {
  VAR_3->name = FUNC_2("%ld", FUNC_5(VAR_1, -2));
 } else {

  VAR_3->name = FUNC_1("(hmm)");
 }
 VAR_3->type = VAR_0;
 FUNC_0(VAR_2, VAR_3);

 return 0;
}
