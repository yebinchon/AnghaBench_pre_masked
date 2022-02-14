
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int (* processor_idle_t ) (int ,int ,int*) ;
struct TYPE_4__ {int cpu_signal; int rtcPop; scalar_t__ idle_timer_notify; int idle_timer_deadline; int cpu_id; scalar_t__ cpu_idle_notify; int * cpu_user_debug; int cpu_active_thread; } ;
typedef TYPE_1__ cpu_data_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 () ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,int*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 TYPE_1__* FUNC_16 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_17 () ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ,int*) ;
 int FUNC_23 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void __attribute__((noreturn))
FUNC_24(void)
{
 cpu_data_t *VAR_9 = FUNC_16();
 uint64_t VAR_10 = 0x0ULL, VAR_11;

 if ((!VAR_4) || (VAR_9->cpu_signal & VAR_2))
  FUNC_2();
 if (!FUNC_4())
  FUNC_2();
 VAR_11 = VAR_9->rtcPop;

 FUNC_21(VAR_5);
 VAR_9->cpu_active_thread = FUNC_12();
 if (VAR_9->cpu_user_debug)
  FUNC_8(((void*)0));
 VAR_9->cpu_user_debug = ((void*)0);

 if (VAR_9->cpu_idle_notify)
  ((processor_idle_t) VAR_9->cpu_idle_notify) (VAR_9->cpu_id, VAR_3, &VAR_10);

 if (VAR_9->idle_timer_notify != 0) {
  if (VAR_10 == 0x0ULL) {

   VAR_9->idle_timer_deadline = 0x0ULL;
  } else {

   FUNC_9(VAR_10, &VAR_9->idle_timer_deadline);
  }
  FUNC_23();
  if (VAR_9->rtcPop != VAR_11)
   FUNC_4();
 }
 if (VAR_6) {
  FUNC_19();
  FUNC_5(VAR_0);
  FUNC_6();
  FUNC_20();
 }

 FUNC_0(VAR_3);

 FUNC_11(VAR_1);
}
