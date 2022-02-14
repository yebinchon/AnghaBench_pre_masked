
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Map ;


 int FUNC_0 (int,intptr_t) ;
 int FUNC_1 (scalar_t__) ;
 char* FUNC_2 (char*,int) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,void*) ;
 int FUNC_6 (int *,char*) ;

__attribute__((used)) static void FUNC_7() {
    Map *VAR_0 = FUNC_3();
    FUNC_1(FUNC_4(VAR_0, "abc"));


    for (int VAR_1 = 0; VAR_1 < 10000; VAR_1++) {
        char *VAR_2 = FUNC_2("%d", VAR_1);
        FUNC_5(VAR_0, VAR_2, (void *)(intptr_t)VAR_1);
        FUNC_0(VAR_1, (int)(intptr_t)FUNC_4(VAR_0, VAR_2));
    }


    for (int VAR_3 = 0; VAR_3 < 1000; VAR_3++) {
        char *VAR_4 = FUNC_2("%d", VAR_3);
        FUNC_5(VAR_0, VAR_4, (void *)(intptr_t)VAR_3);
        FUNC_0(VAR_3, (int)(intptr_t)FUNC_4(VAR_0, VAR_4));
    }


    for (int VAR_5 = 0; VAR_5 < 10000; VAR_5++) {
        char *VAR_6 = FUNC_2("%d", VAR_5);
        FUNC_0(VAR_5, (intptr_t)FUNC_4(VAR_0, VAR_6));
        FUNC_6(VAR_0, VAR_6);
        FUNC_1(FUNC_4(VAR_0, VAR_6));
    }
}
