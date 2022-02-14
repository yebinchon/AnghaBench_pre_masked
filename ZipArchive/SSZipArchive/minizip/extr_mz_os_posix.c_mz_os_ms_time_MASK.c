
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
typedef TYPE_1__ mach_timespec_t ;
typedef int clock_serv_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;

uint64_t FUNC_6(void)
{
    struct timespec VAR_2;
    FUNC_1(VAR_1, &VAR_2);


    return ((uint64_t)VAR_2.tv_sec * 1000) + ((uint64_t)VAR_2.tv_nsec / 1000000);
}
