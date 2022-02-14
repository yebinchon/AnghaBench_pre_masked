
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xSemaphoreHandle ;
struct timeval {int tv_sec; int tv_usec; } ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,scalar_t__) ;
 int FUNC_2 (struct timeval*,int *) ;
 scalar_t__ FUNC_3 (char*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (struct timeval*,int *) ;
 int FUNC_6 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__* VAR_1 ;
 int FUNC_7 (struct timeval*,int *) ;
 int FUNC_8 (scalar_t__*,scalar_t__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(void *VAR_2)
{
    xSemaphoreHandle *VAR_3 = (xSemaphoreHandle *) VAR_2;
    int64_t VAR_4[2];
    int64_t VAR_5[2];
    struct timeval VAR_6 = {.tv_sec = 1550000000, .tv_usec = 0};
    FUNC_0(0, FUNC_7(&VAR_6, ((void*)0)));
    struct timeval VAR_7 = {.tv_sec = 2000, .tv_usec = 900000};
    FUNC_2(&VAR_7, ((void*)0));
    FUNC_5(&VAR_6, ((void*)0));
    FUNC_8(&VAR_5[0], &VAR_4[0]);

    {
        int64_t VAR_8[2] = { VAR_4[0], 0};
        int64_t VAR_9[2] = { VAR_5[0], 0};

        while (VAR_0 == 0) {
            FUNC_4(2 * 1000000);

            FUNC_8(&VAR_9[1], &VAR_8[1]);
            VAR_1[1] += FUNC_3("measure", VAR_9, VAR_8);

            VAR_9[0] = VAR_9[1];
            VAR_8[0] = VAR_8[1];
        }
        VAR_5[1] = VAR_9[1];
        VAR_4[1] = VAR_8[1];
    }

    VAR_1[0] = FUNC_3("main", VAR_5, VAR_4);
    int64_t VAR_10 = VAR_1[0] - VAR_1[1];
    FUNC_6("\nresult of adjtime correction: %lli us, %lli us. delta = %lli us\n", VAR_1[0], VAR_1[1], VAR_10);
    FUNC_1(100, 0, VAR_10);

    FUNC_10(*VAR_3);
    FUNC_9(((void*)0));
}
