
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int,char*) ;
 char** VAR_0 ;
 int FUNC_3 (int *,int *,int ,void*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int VAR_1 ;

int FUNC_6(int VAR_2, char *VAR_3[]) {

    int VAR_4, VAR_5, VAR_6;
    int VAR_7;
    pthread_t *VAR_8;

    if (VAR_2 < 4) {
        FUNC_5();
    }

    VAR_6 = FUNC_0(VAR_3[1]);
    VAR_5 = FUNC_0(VAR_3[2]);

    VAR_0 = &VAR_3[3];

    VAR_8 = (pthread_t *)FUNC_1(VAR_6, sizeof(pthread_t));
    for (VAR_4=0; VAR_4 < VAR_6; VAR_4++) {
        VAR_7 = FUNC_3(&VAR_8[VAR_4], ((void*)0), VAR_1, (void *)(intptr_t)VAR_5);
        if (VAR_7) {
            FUNC_2(1, "pthread_create");
        }
    }

    for (VAR_4=0; VAR_4 < VAR_6; VAR_4++) {
        VAR_7 = FUNC_4(VAR_8[VAR_4], ((void*)0));
        if (VAR_7) {
            FUNC_2(1, "pthread_join");
        }
    }

    return 0;
}
