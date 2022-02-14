
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_3__ {scalar_t__ monotonic; } ;
struct TYPE_4__ {TYPE_1__ posix_time; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (struct timeval*,int *) ;

__attribute__((used)) static uint64_t FUNC_2(void)
{
    {
        struct timeval VAR_2;

        FUNC_1(&VAR_2, ((void*)0));
        return (uint64_t) VAR_2.tv_sec * (uint64_t) 1000000 + (uint64_t) VAR_2.tv_usec;
    }
}
