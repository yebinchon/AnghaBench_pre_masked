
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef void* user_addr_t ;
typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct proc {int dummy; } ;
typedef int lck_rw_t ;
typedef int kern_return_t ;
struct TYPE_11__ {int cpsr; void* pc; } ;
typedef TYPE_2__ arm_saved_state_t ;
struct TYPE_12__ {int cpu_ft_lock; } ;
struct TYPE_10__ {scalar_t__ t_dtrace_step; scalar_t__ t_dtrace_ret; scalar_t__ t_dtrace_ft; scalar_t__ t_dtrace_ast; void* t_dtrace_npc; } ;


 TYPE_9__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct proc* FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (void*,scalar_t__*) ;
 scalar_t__ FUNC_5 (void*,scalar_t__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,struct proc*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;

kern_return_t
FUNC_13(arm_saved_state_t *VAR_8, unsigned int VAR_9)
{







 lck_rw_t *VAR_10;
 struct proc *VAR_11 = FUNC_0();

 uthread_t VAR_12 = (uthread_t)FUNC_6(FUNC_1());

 FUNC_7(VAR_12, VAR_11);

 if (((VAR_8->cpsr & VAR_7) && ((uint16_t) VAR_9) == VAR_4) ||
     ((uint32_t) VAR_9 == VAR_2)) {
  uint8_t VAR_13 = VAR_12->t_dtrace_step;
  uint8_t VAR_14 = VAR_12->t_dtrace_ret;
  user_addr_t VAR_15 = VAR_12->t_dtrace_npc;

  if (VAR_12->t_dtrace_ast) {
   FUNC_10("dtrace_user_probe() should be calling aston()\n");


  }




  VAR_12->t_dtrace_ft = 0;






  if (VAR_13 == 0) {





   return VAR_5;
  }







  if (VAR_14 == 0) {
   VAR_8->pc = VAR_15;
   return VAR_6;
  }





  VAR_10 = &VAR_0->cpu_ft_lock;
  FUNC_8(VAR_10);

  if (&FUNC_3 != ((void*)0))
   (void) FUNC_3)(VAR_8);
  FUNC_9(VAR_10);

  VAR_8->pc = VAR_15;

  return VAR_6;
 } else {
  VAR_10 = &VAR_0->cpu_ft_lock;
  FUNC_8(VAR_10);
  if (&FUNC_2 != ((void*)0) &&
      FUNC_2)(VAR_8) == 0) {
   FUNC_9(VAR_10);
   return VAR_6;
  }
  FUNC_9(VAR_10);
  if (VAR_8->cpsr & VAR_7) {
   uint16_t VAR_16;
   if (FUNC_4(VAR_8->pc, &VAR_16) == 0 && VAR_16 != VAR_3) {
    return VAR_6;
   }
  } else {
   uint32_t VAR_17;
   if (FUNC_5(VAR_8->pc, &VAR_17) == 0 && VAR_17 != VAR_1) {
    return VAR_6;
   }
  }
 }

 return VAR_5;
}
