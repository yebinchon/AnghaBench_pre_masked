
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int mpqueue_head_t ;
struct TYPE_6__ {scalar_t__ deadline; int queue; } ;
struct TYPE_8__ {TYPE_1__ rtclock_timer; scalar_t__ cpu_running; } ;
typedef TYPE_3__ cpu_data_t ;
struct TYPE_7__ {int queue; } ;
struct TYPE_9__ {TYPE_2__ rtclock_timer; } ;


 TYPE_5__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;

mpqueue_head_t *
FUNC_3(
    uint64_t VAR_1)
{
 cpu_data_t *VAR_2 = FUNC_1();
 mpqueue_head_t *VAR_3;

 if (VAR_2->cpu_running) {
  VAR_3 = &VAR_2->rtclock_timer.queue;

  if (VAR_1 < VAR_2->rtclock_timer.deadline)
   FUNC_2(VAR_1);
 }
 else
  VAR_3 = &FUNC_0(VAR_0)->rtclock_timer.queue;

    return (VAR_3);
}
