
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ timer_cnt_wake; scalar_t__ ipi_cnt_wake; scalar_t__ irq_ex_cnt_wake; } ;
struct TYPE_9__ {int deadline; int queue; } ;
struct TYPE_12__ {scalar_t__ cpu_type; int cpu_sleep_token_last; int cpu_sleep_token; int cpu_running; TYPE_3__ cpu_stat; int cpu_threadtype; int cpu_subtype; TYPE_1__ rtclock_timer; } ;
typedef TYPE_4__ cpu_data_t ;
struct TYPE_10__ {int arm_arch; int arm_implementor; } ;
struct TYPE_13__ {TYPE_2__ arm_info; } ;
typedef TYPE_5__ arm_cpu_info_t ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_5__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_4__* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;

void
FUNC_8(void)
{
 cpu_data_t *VAR_15 = FUNC_5();
 arm_cpu_info_t *VAR_16;

 if (VAR_15->cpu_type != VAR_11) {

  VAR_15->cpu_type = VAR_11;

  FUNC_7(&VAR_15->rtclock_timer.queue);
  VAR_15->rtclock_timer.deadline = VAR_13;

  if (VAR_15 == &VAR_0) {
   FUNC_2();
   FUNC_1();
   FUNC_4();
  } else {




   FUNC_6();
  }

  FUNC_3();

  VAR_16 = FUNC_0();


  switch (VAR_16->arm_info.arm_arch) {
  case 136:
  case 135:
   VAR_15->cpu_subtype = VAR_2;
   break;
  case 134:
  case 133:
   if (VAR_16->arm_info.arm_implementor == VAR_12)
    VAR_15->cpu_subtype = VAR_9;
   else
    VAR_15->cpu_subtype = VAR_3;
   break;
  case 132:
   VAR_15->cpu_subtype = VAR_4;
   break;
  case 131:
   VAR_15->cpu_subtype = VAR_5;
   break;
  case 130:
   VAR_15->cpu_subtype = VAR_6;
   break;
  case 128:
   VAR_15->cpu_subtype = VAR_8;
   break;
  case 129:
   VAR_15->cpu_subtype = VAR_7;
   break;
  default:
   VAR_15->cpu_subtype = VAR_1;
   break;
  }

  VAR_15->cpu_threadtype = VAR_10;
 }
 VAR_15->cpu_stat.irq_ex_cnt_wake = 0;
 VAR_15->cpu_stat.ipi_cnt_wake = 0;
 VAR_15->cpu_stat.timer_cnt_wake = 0;
 VAR_15->cpu_running = VAR_14;
 VAR_15->cpu_sleep_token_last = VAR_15->cpu_sleep_token;
 VAR_15->cpu_sleep_token = 0x0UL;

}
