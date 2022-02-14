
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
typedef scalar_t__ thread_state_t ;
struct arm_saved_state32 {int cpsr; } ;
struct arm_saved_state {int dummy; } ;
typedef int spl_t ;
typedef int kern_return_t ;
typedef int arm_thread_state_t ;
struct TYPE_8__ {struct arm_saved_state* upcb; } ;
struct TYPE_9__ {TYPE_1__ machine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 () ;
 struct arm_saved_state32* FUNC_2 (struct arm_saved_state*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,struct arm_saved_state*) ;
 int FUNC_8 (TYPE_2__*) ;

kern_return_t
FUNC_9(thread_t VAR_2, thread_state_t VAR_3)
{
 arm_thread_state_t *VAR_4;
 struct arm_saved_state *VAR_5;
 struct arm_saved_state32 *VAR_6;
 thread_t VAR_7 = FUNC_1();
 spl_t VAR_8=0;

 FUNC_0(!FUNC_5(VAR_2));

 VAR_5 = VAR_2->machine.upcb;
 VAR_6 = FUNC_2(VAR_5);

 VAR_4 = (arm_thread_state_t *)VAR_3;

 if (VAR_7 != VAR_2) {
  VAR_8 = FUNC_3();
  FUNC_6(VAR_2);
 }






 FUNC_7(VAR_4, VAR_5);
 VAR_6->cpsr = VAR_1;

 if (VAR_7 != VAR_2) {
  FUNC_8(VAR_2);
  FUNC_4(VAR_8);
 }

 return VAR_0;
}
