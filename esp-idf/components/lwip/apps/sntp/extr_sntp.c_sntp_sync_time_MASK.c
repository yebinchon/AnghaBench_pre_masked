
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;
typedef long int64_t ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (struct timeval*,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (struct timeval*) ;

void __attribute__((weak)) FUNC_6(struct timeval *VAR_6)
{
    if (VAR_5 == VAR_0) {
        FUNC_3(VAR_6, ((void*)0));
        FUNC_4(VAR_2);
    } else if (VAR_5 == VAR_1) {
        struct timeval VAR_7;
        FUNC_2(&VAR_7, ((void*)0));
        int64_t VAR_8 = (int64_t)VAR_7.tv_sec * 1000000L + (int64_t)VAR_7.tv_usec;
        int64_t VAR_9 = (int64_t)VAR_6->tv_sec * 1000000L + (int64_t)VAR_6->tv_usec;
        int64_t VAR_10 = VAR_9 - VAR_8;
        struct timeval VAR_11 = { .tv_sec = VAR_10 / 1000000L, .tv_usec = VAR_10 % 1000000L };
        if (FUNC_1(&VAR_11, ((void*)0)) == -1) {
            FUNC_0(VAR_4, "Function adjtime don't update time because the error is very big");
            FUNC_3(VAR_6, ((void*)0));
            FUNC_0(VAR_4, "Time was synchronized through settimeofday");
            FUNC_4(VAR_2);
        } else {
            FUNC_4(VAR_3);
        }
    }
    if (&FUNC_5) {
        FUNC_5(VAR_6);
    }
}
