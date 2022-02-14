
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,char*,int,int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char const*,int,int **,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (char*,char const*,int) ;

int FUNC_6(
    char *VAR_3,
    char *VAR_4, int VAR_5)
{
    if (!VAR_2) {
        return 0;
    }
    static const char *VAR_6 =
        "select token from auth.identity_token "
        "where username = ?;";
    int VAR_7 = 0;
    sqlite3_stmt *VAR_8;
    FUNC_3(VAR_1, VAR_6, -1, &VAR_8, ((void*)0));
    FUNC_0(VAR_8, 1, VAR_3, -1, ((void*)0));
    if (FUNC_4(VAR_8) == VAR_0) {
        const char *VAR_9 = (const char *)FUNC_1(VAR_8, 0);
        FUNC_5(VAR_4, VAR_9, VAR_5 - 1);
        VAR_4[VAR_5 - 1] = '\0';
        VAR_7 = 1;
    }
    FUNC_2(VAR_8);
    return VAR_7;
}
