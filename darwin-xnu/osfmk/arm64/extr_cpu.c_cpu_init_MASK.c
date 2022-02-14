
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ timer_cnt_wake; scalar_t__ ipi_cnt_wake; scalar_t__ irq_ex_cnt_wake; } ;
struct TYPE_10__ {int deadline; int queue; } ;
struct TYPE_13__ {scalar_t__ cpu_type; int cpu_sleep_token_last; int cpu_sleep_token; int cpu_running; TYPE_3__ cpu_stat; int cpu_threadtype; int cpu_subtype; TYPE_1__ rtclock_timer; } ;
typedef TYPE_4__ cpu_data_t ;
struct TYPE_11__ {int arm_arch; } ;
struct TYPE_14__ {TYPE_2__ arm_info; } ;
typedef TYPE_5__ arm_cpu_info_t ;


 TYPE_4__ VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 TYPE_4__* FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;

void
FUNC_13(void)
{
 cpu_data_t *VAR_6 = FUNC_7();
 arm_cpu_info_t *VAR_7;

 FUNC_0(FUNC_6() != 0);

 if (VAR_6->cpu_type != VAR_3) {

  VAR_6->cpu_type = VAR_3;

  FUNC_12(&VAR_6->rtclock_timer.queue);
  VAR_6->rtclock_timer.deadline = VAR_4;

  if (VAR_6 == &VAR_0) {
   FUNC_3();
   FUNC_2();
   FUNC_5();
  } else {




   FUNC_11();
  }

  FUNC_4();

  VAR_7 = FUNC_1();


  switch (VAR_7->arm_info.arm_arch) {
  case 128:
   VAR_6->cpu_subtype = VAR_1;
   break;
  default:


   FUNC_10("Unknown CPU subtype...");
   break;
  }

  VAR_6->cpu_threadtype = VAR_2;
 }
 VAR_6->cpu_stat.irq_ex_cnt_wake = 0;
 VAR_6->cpu_stat.ipi_cnt_wake = 0;
 VAR_6->cpu_stat.timer_cnt_wake = 0;
 VAR_6->cpu_running = VAR_5;
 VAR_6->cpu_sleep_token_last = VAR_6->cpu_sleep_token;
 VAR_6->cpu_sleep_token = 0x0UL;






}
