
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int (* processor_idle_t ) (int ,int ,int*) ;
struct TYPE_3__ {int cpu_signal; int rtcPop; scalar_t__ idle_timer_notify; int idle_timer_deadline; int cpu_id; scalar_t__ cpu_idle_notify; int * cpu_user_debug; int cpu_active_thread; } ;
typedef TYPE_1__ cpu_data_t ;
typedef int boolean_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 TYPE_1__* FUNC_8 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int*) ;
 int FUNC_14 () ;
 scalar_t__ VAR_5 ;

void __attribute__((noreturn))
FUNC_15(void)
{
 cpu_data_t *VAR_6 = FUNC_8();
 uint64_t VAR_7 = 0x0ULL, VAR_8;

 if ((!VAR_3) || (VAR_6->cpu_signal & VAR_1))
  FUNC_1();
 if (!FUNC_2())
  FUNC_1();
 VAR_8 = VAR_6->rtcPop;

 FUNC_12(VAR_4);
 VAR_6->cpu_active_thread = FUNC_7();
 if (VAR_6->cpu_user_debug)
  FUNC_3(((void*)0));
 VAR_6->cpu_user_debug = ((void*)0);

 if (VAR_6->cpu_idle_notify)
  ((processor_idle_t) VAR_6->cpu_idle_notify) (VAR_6->cpu_id, VAR_2, &VAR_7);

 if (VAR_6->idle_timer_notify != 0) {
  if (VAR_7 == 0x0ULL) {

   VAR_6->idle_timer_deadline = 0x0ULL;
  } else {

   FUNC_4(VAR_7, &VAR_6->idle_timer_deadline);
  }
  FUNC_14();
  if (VAR_6->rtcPop != VAR_8)
   FUNC_2();
 }





 FUNC_10();
 FUNC_6((boolean_t) VAR_5);
 FUNC_11();

 FUNC_0(VAR_2);
 FUNC_5(VAR_0);
}
