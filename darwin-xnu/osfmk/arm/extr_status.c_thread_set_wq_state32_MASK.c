
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
typedef scalar_t__ thread_state_t ;
struct arm_saved_state {int cpsr; } ;
typedef int spl_t ;
typedef int kern_return_t ;
typedef int arm_thread_state_t ;
struct TYPE_7__ {struct arm_saved_state PcbData; } ;
struct TYPE_8__ {TYPE_1__ machine; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,struct arm_saved_state*) ;
 int FUNC_5 (TYPE_2__*) ;

kern_return_t
FUNC_6(thread_t VAR_2, thread_state_t VAR_3)
{
 arm_thread_state_t *VAR_4;
 struct arm_saved_state *VAR_5;
 thread_t VAR_6 = FUNC_0();
 spl_t VAR_7=0;

 VAR_5 = &VAR_2->machine.PcbData;
 VAR_4 = (arm_thread_state_t *)VAR_3;

 if (VAR_6 != VAR_2) {
  VAR_7 = FUNC_1();
  FUNC_3(VAR_2);
 }






 FUNC_4(VAR_4, VAR_5);
 VAR_5->cpsr = VAR_1;

 if (VAR_6 != VAR_2) {
  FUNC_5(VAR_2);
  FUNC_2(VAR_7);
 }

 return VAR_0;
}
