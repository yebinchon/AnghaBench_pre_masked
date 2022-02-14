
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char const*,int,int **,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*,int) ;

int FUNC_5(
    char *VAR_3, int VAR_4,
    char *VAR_5, int VAR_6)
{
    if (!VAR_2) {
        return 0;
    }
    static const char *VAR_7 =
        "select username, token from auth.identity_token "
        "where selected = 1;";
    int VAR_8 = 0;
    sqlite3_stmt *VAR_9;
    FUNC_2(VAR_1, VAR_7, -1, &VAR_9, ((void*)0));
    if (FUNC_3(VAR_9) == VAR_0) {
        const char *VAR_10 = (const char *)FUNC_0(VAR_9, 0);
        const char *VAR_11 = (const char *)FUNC_0(VAR_9, 1);
        FUNC_4(VAR_3, VAR_10, VAR_4 - 1);
        VAR_3[VAR_4 - 1] = '\0';
        FUNC_4(VAR_5, VAR_11, VAR_6 - 1);
        VAR_5[VAR_6 - 1] = '\0';
        VAR_8 = 1;
    }
    FUNC_1(VAR_9);
    return VAR_8;
}
