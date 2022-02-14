
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVTreeNode ;
typedef int AVLFG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *,void*,int ,int *) ;
 int FUNC_8 (int **,void*,int ,int **) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;
 int VAR_3 ;
 int FUNC_11 (int *,int ) ;

int FUNC_12(int VAR_4, char **VAR_5)
{
    int VAR_6;
    void *VAR_7;
    AVTreeNode *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    AVLFG VAR_10;
    int VAR_11 = VAR_4 <= 1 ? VAR_2 : FUNC_0(VAR_5[1]);

    FUNC_5(VAR_11);

    FUNC_3(&VAR_10, 1);

    for (VAR_6 = 0; VAR_6 < 10000; VAR_6++) {
        intptr_t VAR_12 = FUNC_2(&VAR_10) % 86294;

        if (FUNC_10(VAR_8) > 999) {
            FUNC_4(((void*)0), VAR_1, "FATAL error %d\n", VAR_6);
            FUNC_11(VAR_8, 0);
            return 1;
        }
        FUNC_4(((void*)0), VAR_0, "inserting %4d\n", (int)VAR_12);

        if (!VAR_9)
            VAR_9 = FUNC_9();
        if (!VAR_9) {
            FUNC_4(((void*)0), VAR_1, "Memory allocation failure.\n");
            return 1;
        }
        FUNC_8(&VAR_8, (void *)(VAR_12 + 1), VAR_3, &VAR_9);

        VAR_12 = FUNC_2(&VAR_10) % 86294;
        {
            AVTreeNode *VAR_13 = ((void*)0);
            FUNC_4(((void*)0), VAR_0, "removing %4d\n", (int)VAR_12);
            FUNC_8(&VAR_8, (void *)(VAR_12 + 1), VAR_3, &VAR_13);
            VAR_7 = FUNC_7(VAR_8, (void *)(VAR_12 + 1), VAR_3, ((void*)0));
            if (VAR_7)
                FUNC_4(((void*)0), VAR_1, "removal failure %d\n", VAR_6);
            FUNC_1(VAR_13);
        }
    }
    FUNC_1(VAR_9);

    FUNC_6(VAR_8);

    return 0;
}
