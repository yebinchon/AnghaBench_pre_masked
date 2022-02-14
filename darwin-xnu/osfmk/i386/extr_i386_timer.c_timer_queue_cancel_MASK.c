
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int mpqueue_head_t ;
struct TYPE_3__ {int queue; } ;
struct TYPE_4__ {TYPE_1__ rtclock_timer; } ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2(
    mpqueue_head_t *VAR_0,
    uint64_t VAR_1,
    uint64_t VAR_2)
{
    if (VAR_0 == &FUNC_0()->rtclock_timer.queue) {
        if (VAR_1 < VAR_2)
            FUNC_1(VAR_2);
    }
}
