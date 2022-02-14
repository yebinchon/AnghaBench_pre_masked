
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_2__* thread_t ;
struct TYPE_8__ {int * thread_timer; int * current_state; int user_state; int system_state; } ;
typedef TYPE_3__ processor_data_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {TYPE_1__* cpu_processor; } ;
struct TYPE_7__ {int user_timer; int system_timer; int precise_user_kernel_time; } ;
struct TYPE_6__ {TYPE_3__ processor_data; } ;


 TYPE_2__* FUNC_0 () ;
 TYPE_4__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(boolean_t VAR_0)
{
 thread_t VAR_1 = FUNC_0();
 if (!VAR_1->precise_user_kernel_time) return;

 processor_data_t *VAR_2 = &FUNC_1()->cpu_processor->processor_data;
 uint64_t VAR_3 = FUNC_2();

 FUNC_4(VAR_2->current_state, VAR_3);
 VAR_2->current_state = (VAR_0) ? &VAR_2->system_state : &VAR_2->user_state;
 FUNC_3(VAR_2->current_state, VAR_3);

 FUNC_4(VAR_2->thread_timer, VAR_3);
 VAR_2->thread_timer = (VAR_0) ? &VAR_1->system_timer : &VAR_1->user_timer;
 FUNC_3(VAR_2->thread_timer, VAR_3);
}
