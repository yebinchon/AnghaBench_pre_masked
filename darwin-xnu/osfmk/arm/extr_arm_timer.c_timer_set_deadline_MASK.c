
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spl_t ;
struct TYPE_4__ {int deadline; } ;
typedef TYPE_1__ rtclock_timer_t ;
struct TYPE_5__ {TYPE_1__ rtclock_timer; } ;
typedef TYPE_2__ cpu_data_t ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

void
FUNC_4(uint64_t VAR_0)
{
 rtclock_timer_t *VAR_1;
 spl_t VAR_2;
 cpu_data_t *VAR_3;

 VAR_2 = FUNC_1();
 VAR_3 = FUNC_0();

 VAR_1 = &VAR_3->rtclock_timer;
 VAR_1->deadline = VAR_0;

 FUNC_3();

 FUNC_2(VAR_2);
}
