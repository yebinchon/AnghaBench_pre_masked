
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int *,int,char*,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char const*,int,int **,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(char *VAR_2) {
    if (!VAR_1) {
        return 0;
    }
    FUNC_0();
    static const char *VAR_3 =
        "update auth.identity_token set selected = 1 where username = ?;";
    sqlite3_stmt *VAR_4;
    FUNC_4(VAR_0, VAR_3, -1, &VAR_4, ((void*)0));
    FUNC_1(VAR_4, 1, VAR_2, -1, ((void*)0));
    FUNC_5(VAR_4);
    FUNC_3(VAR_4);
    return FUNC_2(VAR_0);
}
