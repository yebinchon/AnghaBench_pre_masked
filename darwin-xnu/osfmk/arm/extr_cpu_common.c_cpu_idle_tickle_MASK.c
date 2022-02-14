
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int (* idle_timer_t ) (int ,int*) ;
struct TYPE_3__ {void* idle_timer_notify; int idle_timer_deadline; int idle_timer_refcon; } ;
typedef TYPE_1__ cpu_data_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int,int*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 () ;

void
FUNC_5(void)
{
 boolean_t VAR_1;
 cpu_data_t *VAR_2;
 uint64_t VAR_3 = 0x0ULL;

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = FUNC_1();

 if (VAR_2->idle_timer_notify != (void *)((void*)0)) {
  ((idle_timer_t)VAR_2->idle_timer_notify)(VAR_2->idle_timer_refcon, &VAR_3);
  if (VAR_3 != 0x0ULL) {

   FUNC_0(VAR_3, &VAR_2->idle_timer_deadline);
  } else {

   VAR_2->idle_timer_deadline = 0x0ULL;
  }
  FUNC_4();
 }
 (void) FUNC_2(VAR_1);
}
