
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int token_id; int text; } ;
typedef TYPE_1__ sql_token ;
typedef int lua_State ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int *,int,size_t*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char const*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char const*,...) ;
 char* FUNC_7 (int ,size_t*) ;
 scalar_t__ FUNC_8 (char const*,size_t,int ) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_0) {
 sql_token *VAR_1 = *(sql_token **)FUNC_3(VAR_0);
 size_t VAR_2;
 const char *VAR_3 = FUNC_2(VAR_0, 2, &VAR_2);
    if (FUNC_8(VAR_3, VAR_2, FUNC_0("text"))) {
        FUNC_6(VAR_0, FUNC_1(VAR_1->text));
        return 1;
    } else if (FUNC_8(VAR_3, VAR_2, FUNC_0("token_id"))) {
        FUNC_5(VAR_0, VAR_1->token_id);
        return 1;
    } else if (FUNC_8(VAR_3, VAR_2, FUNC_0("token_name"))) {
        size_t VAR_4 = 0;
        const char *VAR_5 = FUNC_7(VAR_1->token_id, &VAR_4);
        FUNC_6(VAR_0, VAR_5, VAR_4);
        return 1;
    } else {
        FUNC_4(VAR_0, "tokens[...] has no %s field", VAR_3);
    }

 return 0;
}
