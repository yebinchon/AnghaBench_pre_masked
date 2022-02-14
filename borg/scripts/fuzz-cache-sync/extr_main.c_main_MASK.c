
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HashIndex ;
typedef int CacheSyncCtx ;


 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,char*,int) ;
 int VAR_1 ;

int FUNC_8() {
    char VAR_2[VAR_0];
    int VAR_3, VAR_4;
    CacheSyncCtx *VAR_5;
    HashIndex *VAR_6;


    VAR_6 = FUNC_6(0, 32, 12);
    VAR_5 = FUNC_3(VAR_6);

    while (1) {
        VAR_3 = FUNC_7(0, VAR_2, VAR_0);
        if (!VAR_3) {
            break;
        }
        VAR_4 = FUNC_1(VAR_5, VAR_2, VAR_3);
        if(!VAR_4 && FUNC_0(VAR_5)) {
            FUNC_4(VAR_1, "error: %s\n", FUNC_0(VAR_5));
            return 1;
        }
    }
    FUNC_5(VAR_6);
    FUNC_2(VAR_5);
    return 0;
}
