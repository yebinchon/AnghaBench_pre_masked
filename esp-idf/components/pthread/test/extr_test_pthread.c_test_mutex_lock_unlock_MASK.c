
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_mutexattr_t ;
typedef int pthread_mutex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int *,int ,int *) ;
 int FUNC_3 (int ,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_12(int VAR_4)
{
    int VAR_5 = 0;
    int VAR_6 = -1;
    volatile bool VAR_7 = 0;
    volatile bool VAR_8 = 0;
    volatile intptr_t VAR_9 = 0;
    pthread_mutex_t VAR_10;
    pthread_mutexattr_t VAR_11;
    pthread_t VAR_12;

    if (FUNC_1()) {
        VAR_5 = FUNC_10(&VAR_11);
        FUNC_0(0, VAR_5);
        VAR_7 = 1;

        VAR_5 = FUNC_11(&VAR_11, VAR_4);
        FUNC_0(0, VAR_5);

        VAR_5 = FUNC_9(&VAR_11, &VAR_6);
        FUNC_0(0, VAR_5);
        FUNC_0(VAR_4, VAR_6);

        VAR_5 = FUNC_5(&VAR_10, &VAR_11);
        FUNC_0(0, VAR_5);
        VAR_8 = 1;

        VAR_5 = FUNC_6(&VAR_10);
        FUNC_0(0, VAR_5);

        VAR_5 = FUNC_6(&VAR_10);

        if(VAR_4 == VAR_2) {
            FUNC_0(VAR_0, VAR_5);
        } else {
            FUNC_0(0, VAR_5);

            VAR_5 = FUNC_7(&VAR_10);
            FUNC_0(0, VAR_5);
        }

        FUNC_2(&VAR_12, ((void*)0), VAR_3, &VAR_10);

        FUNC_3(VAR_12, (void **) &VAR_9);
        FUNC_0(VAR_1, (int) VAR_9);

        VAR_5 = FUNC_7(&VAR_10);
        FUNC_0(0, VAR_5);
    }

    if (VAR_7) {
        FUNC_8(&VAR_11);
    }

    if (VAR_8) {
        FUNC_4(&VAR_10);
    }
}
