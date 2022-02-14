
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double resolution; scalar_t__ base; } ;
struct TYPE_4__ {TYPE_1__ posix_time; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_0 () ;

double FUNC_1(void)
{
    return (double) (FUNC_0() - VAR_0.posix_time.base) *
        VAR_0.posix_time.resolution;
}
