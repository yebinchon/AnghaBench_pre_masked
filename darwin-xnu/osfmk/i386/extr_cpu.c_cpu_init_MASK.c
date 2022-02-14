
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int deadline; int queue; } ;
struct TYPE_5__ {int cpu_subtype; int cpu_type; TYPE_1__ rtclock_timer; } ;
typedef TYPE_2__ cpu_data_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

void
FUNC_5(void)
{
 cpu_data_t *VAR_1 = FUNC_2();

 FUNC_4(&VAR_1->rtclock_timer.queue);
 VAR_1->rtclock_timer.deadline = VAR_0;

 VAR_1->cpu_type = FUNC_1();
 VAR_1->cpu_subtype = FUNC_0();

 FUNC_3();
}
