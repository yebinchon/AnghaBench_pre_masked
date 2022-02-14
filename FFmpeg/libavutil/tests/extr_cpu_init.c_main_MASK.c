
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int *,int *,int ,int*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;
 char* FUNC_3 (int) ;
 int VAR_1 ;

int FUNC_4(void)
{
    int VAR_2;
    int VAR_3;
    int VAR_4;
    pthread_t VAR_5;
    pthread_t VAR_6;

    if ((VAR_4 = FUNC_1(&VAR_5, ((void*)0), VAR_1, &VAR_2))) {
        FUNC_0(VAR_0, "pthread_create failed: %s.\n", FUNC_3(VAR_4));
        return 1;
    }
    if ((VAR_4 = FUNC_1(&VAR_6, ((void*)0), VAR_1, &VAR_3))) {
        FUNC_0(VAR_0, "pthread_create failed: %s.\n", FUNC_3(VAR_4));
        return 1;
    }
    FUNC_2(VAR_5, ((void*)0));
    FUNC_2(VAR_6, ((void*)0));

    if (VAR_2 < 0)
        return 2;
    if (VAR_3 < 0)
        return 2;
    if (VAR_2 != VAR_3)
        return 3;

    return 0;
}
