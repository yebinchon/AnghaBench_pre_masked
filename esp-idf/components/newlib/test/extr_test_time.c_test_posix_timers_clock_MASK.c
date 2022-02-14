
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint64_t ;
struct timeval {long tv_sec; long tv_usec; int member_0; } ;
struct timespec {int tv_sec; long tv_nsec; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (long,long) ;
 int FUNC_2 (long,long,long) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,struct timespec*) ;
 int FUNC_5 (int,struct timespec*) ;
 int FUNC_6 (int,struct timespec*) ;
 long FUNC_7 () ;
 long FUNC_8 () ;
 scalar_t__ FUNC_9 (struct timeval*,int *) ;
 int FUNC_10 (char*,...) ;
 long FUNC_11 () ;
 scalar_t__ FUNC_12 (struct timeval*,int *) ;

void FUNC_13 (void)
{

    FUNC_3(0, "_POSIX_TIMERS - is not defined");
    FUNC_10("Internal Frequency = %d Hz\n", FUNC_11());


    FUNC_0(FUNC_6(VAR_1, ((void*)0)) == -1);
    FUNC_0(FUNC_5(VAR_1, ((void*)0)) == -1);
    FUNC_0(FUNC_4(VAR_1, ((void*)0)) == -1);

    FUNC_0(FUNC_6(VAR_0, ((void*)0)) == -1);
    FUNC_0(FUNC_5(VAR_0, ((void*)0)) == -1);
    FUNC_0(FUNC_4(VAR_0, ((void*)0)) == -1);
    struct timespec VAR_2 = {0};
    FUNC_0(FUNC_6(VAR_1, &VAR_2) == -1);
    FUNC_0(FUNC_5(VAR_1, &VAR_2) == -1);
    FUNC_0(FUNC_4(VAR_1, &VAR_2) == -1);

    FUNC_0(FUNC_6(VAR_0, &VAR_2) == -1);
    FUNC_0(FUNC_5(VAR_0, &VAR_2) == -1);
    FUNC_0(FUNC_4(VAR_0, &VAR_2) == -1);

}
