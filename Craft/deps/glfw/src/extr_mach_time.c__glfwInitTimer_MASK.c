
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {double denom; scalar_t__ numer; } ;
typedef TYPE_2__ mach_timebase_info_data_t ;
struct TYPE_5__ {double resolution; int base; } ;
struct TYPE_7__ {TYPE_1__ ns_time; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(void)
{
    mach_timebase_info_data_t VAR_1;
    FUNC_1(&VAR_1);

    VAR_0.ns_time.resolution = (double) VAR_1.numer / (VAR_1.denom * 1.0e9);
    VAR_0.ns_time.base = FUNC_0();
}
