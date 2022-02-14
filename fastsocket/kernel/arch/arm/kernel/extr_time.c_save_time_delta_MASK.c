
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_2__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;


 int FUNC_0 (struct timespec*,scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(struct timespec *VAR_1, struct timespec *VAR_2)
{
 FUNC_0(VAR_1,
    VAR_0.tv_sec - VAR_2->tv_sec,
    VAR_0.tv_nsec - VAR_2->tv_nsec);
}
