
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,char*,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char const*,int,int **,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(char *VAR_2, char *VAR_3) {
    if (!VAR_1) {
        return;
    }
    static const char *VAR_4 =
        "insert or replace into auth.identity_token "
        "(username, token, selected) values (?, ?, ?);";
    sqlite3_stmt *VAR_5;
    FUNC_4(VAR_0, VAR_4, -1, &VAR_5, ((void*)0));
    FUNC_2(VAR_5, 1, VAR_2, -1, ((void*)0));
    FUNC_2(VAR_5, 2, VAR_3, -1, ((void*)0));
    FUNC_1(VAR_5, 3, 1);
    FUNC_5(VAR_5);
    FUNC_3(VAR_5);
    FUNC_0(VAR_2);
}
