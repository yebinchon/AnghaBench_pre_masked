
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
typedef int gsize ;
struct TYPE_2__ {int table; int org_table; int org_name; int name; int type; } ;
typedef TYPE_1__ MYSQL_FIELD ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_7(lua_State *VAR_0) {
 MYSQL_FIELD *VAR_1 = *(MYSQL_FIELD **)FUNC_2(VAR_0);
 gsize VAR_2 = 0;
 const char *VAR_3 = FUNC_1(VAR_0, 2, &VAR_2);

 if (FUNC_6(VAR_3, VAR_2, FUNC_0("type"))) {
  FUNC_3(VAR_0, VAR_1->type);
 } else if (FUNC_6(VAR_3, VAR_2, FUNC_0("name"))) {
  FUNC_5(VAR_0, VAR_1->name);
 } else if (FUNC_6(VAR_3, VAR_2, FUNC_0("org_name"))) {
  FUNC_5(VAR_0, VAR_1->org_name);
 } else if (FUNC_6(VAR_3, VAR_2, FUNC_0("org_table"))) {
  FUNC_5(VAR_0, VAR_1->org_table);
 } else if (FUNC_6(VAR_3, VAR_2, FUNC_0("table"))) {
  FUNC_5(VAR_0, VAR_1->table);
 } else {
  FUNC_4(VAR_0);
 }

 return 1;
}
