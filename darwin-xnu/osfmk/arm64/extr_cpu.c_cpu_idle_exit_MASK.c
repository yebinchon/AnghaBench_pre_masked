
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int (* processor_idle_t ) (int ,int ,int*) ;
struct TYPE_9__ {scalar_t__ idle_timer_notify; int idle_timer_deadline; int cpu_id; scalar_t__ cpu_idle_notify; TYPE_2__* cpu_active_thread; } ;
typedef TYPE_3__ cpu_data_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {TYPE_1__* map; } ;
struct TYPE_7__ {int pmap; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 () ;
 TYPE_3__* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int*) ;
 int FUNC_10 () ;

void
FUNC_11(boolean_t VAR_1)
{
 uint64_t VAR_2 = 0x0ULL;
 cpu_data_t *VAR_3 = FUNC_5();

 FUNC_1(FUNC_4() != 0);


 if (VAR_1)
  FUNC_3(VAR_3);
 FUNC_8(VAR_3->cpu_active_thread->map->pmap);

 if (VAR_3->cpu_idle_notify)
  ((processor_idle_t) VAR_3->cpu_idle_notify) (VAR_3->cpu_id, VAR_0, &VAR_2);

 if (VAR_3->idle_timer_notify != 0) {
  if (VAR_2 == 0x0ULL) {

   VAR_3->idle_timer_deadline = 0x0ULL;
  } else {

   FUNC_2(VAR_2, &VAR_3->idle_timer_deadline);
  }
  FUNC_10();
 }

 FUNC_0();
}
