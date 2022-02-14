
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char const*,int,int **,int *) ;
 scalar_t__ FUNC_3 (int *) ;

int FUNC_4(float *VAR_3, float *VAR_4, float *VAR_5, float *VAR_6, float *VAR_7) {
    if (!VAR_2) {
        return 0;
    }
    static const char *VAR_8 =
        "select x, y, z, rx, ry from state;";
    int VAR_9 = 0;
    sqlite3_stmt *VAR_10;
    FUNC_2(VAR_1, VAR_8, -1, &VAR_10, ((void*)0));
    if (FUNC_3(VAR_10) == VAR_0) {
        *VAR_3 = FUNC_0(VAR_10, 0);
        *VAR_4 = FUNC_0(VAR_10, 1);
        *VAR_5 = FUNC_0(VAR_10, 2);
        *VAR_6 = FUNC_0(VAR_10, 3);
        *VAR_7 = FUNC_0(VAR_10, 4);
        VAR_9 = 1;
    }
    FUNC_1(VAR_10);
    return VAR_9;
}
