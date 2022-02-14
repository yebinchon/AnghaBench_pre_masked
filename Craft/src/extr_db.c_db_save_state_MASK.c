
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,float) ;
 int FUNC_1 (int ,char*,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char const*,int,int **,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6) {
    if (!VAR_1) {
        return;
    }
    static const char *VAR_7 =
        "insert into state (x, y, z, rx, ry) values (?, ?, ?, ?, ?);";
    sqlite3_stmt *VAR_8;
    FUNC_1(VAR_0, "delete from state;", ((void*)0), ((void*)0), ((void*)0));
    FUNC_3(VAR_0, VAR_7, -1, &VAR_8, ((void*)0));
    FUNC_0(VAR_8, 1, VAR_2);
    FUNC_0(VAR_8, 2, VAR_3);
    FUNC_0(VAR_8, 3, VAR_4);
    FUNC_0(VAR_8, 4, VAR_5);
    FUNC_0(VAR_8, 5, VAR_6);
    FUNC_4(VAR_8);
    FUNC_2(VAR_8);
}
