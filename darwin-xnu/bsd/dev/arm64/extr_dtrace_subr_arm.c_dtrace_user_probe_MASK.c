
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef int user_addr_t ;
typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct proc {int dummy; } ;
typedef int lck_rw_t ;
typedef int kern_return_t ;
typedef int arm_saved_state_t ;
struct TYPE_9__ {int cpu_ft_lock; } ;
struct TYPE_8__ {int cpsr; scalar_t__ pc; } ;
struct TYPE_7__ {scalar_t__ pc; } ;
struct TYPE_6__ {scalar_t__ t_dtrace_step; scalar_t__ t_dtrace_ret; scalar_t__ t_dtrace_ft; scalar_t__ t_dtrace_ast; int t_dtrace_npc; } ;


 TYPE_5__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,int) ;
 struct proc* FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,struct proc*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*) ;
 TYPE_3__* FUNC_13 (int *) ;
 TYPE_2__* FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;

kern_return_t
FUNC_18(arm_saved_state_t *VAR_10)
{







 lck_rw_t *VAR_11;
 struct proc *VAR_12 = FUNC_1();
 int VAR_13 = 0;

 uthread_t VAR_14 = (uthread_t)FUNC_7(FUNC_2());

 FUNC_9(VAR_14, VAR_12);

 if (FUNC_8(VAR_10)) {
  if (FUNC_13(VAR_10)->cpsr & VAR_9) {
   uint16_t VAR_15;
   if (FUNC_0((user_addr_t)FUNC_13(VAR_10)->pc, &VAR_15, sizeof(uint16_t))) {
    return VAR_7;
   }
   VAR_13 = (VAR_15 == VAR_6);
  } else {
   uint32_t VAR_16;
   if (FUNC_0((user_addr_t)FUNC_13(VAR_10)->pc, &VAR_16, sizeof(uint32_t))) {
    return VAR_7;
   }
   VAR_13 = (VAR_16 == VAR_2);
  }
 } else {
  uint32_t VAR_17;
  if (FUNC_0((user_addr_t)FUNC_14(VAR_10)->pc, &VAR_17, sizeof(uint32_t))) {
   return VAR_7;
  }
  VAR_13 = (VAR_17 == VAR_4);
 }

 if (VAR_13) {
  uint8_t VAR_18 = VAR_14->t_dtrace_step;
  uint8_t VAR_19 = VAR_14->t_dtrace_ret;
  user_addr_t VAR_20 = VAR_14->t_dtrace_npc;

  if (VAR_14->t_dtrace_ast) {
   FUNC_12("dtrace_user_probe() should be calling aston()\n");


  }




  VAR_14->t_dtrace_ft = 0;






  if (VAR_18 == 0) {





   return VAR_7;
  }
  if (VAR_19 == 0) {
   FUNC_15(VAR_10, VAR_20);
   return VAR_8;
  }





  VAR_11 = &VAR_0->cpu_ft_lock;
  FUNC_10(VAR_11);

  if (&FUNC_4 != ((void*)0))
   (void) FUNC_4)(VAR_10);
  FUNC_11(VAR_11);

  FUNC_15(VAR_10, VAR_20);

  return VAR_8;
 } else {
  VAR_11 = &VAR_0->cpu_ft_lock;
  FUNC_10(VAR_11);
  if (&FUNC_3 != ((void*)0) &&
      FUNC_3)(VAR_10) == 0) {
   FUNC_11(VAR_11);
   return VAR_8;
  }
  FUNC_11(VAR_11);
  if (FUNC_8(VAR_10)) {
   if (FUNC_13(VAR_10)->cpsr & VAR_9) {
    uint16_t VAR_21;
    if (FUNC_5(FUNC_13(VAR_10)->pc, &VAR_21) == 0 && VAR_21 != VAR_5) {
     return VAR_8;
    }
   } else {
    uint32_t VAR_22;
    if (FUNC_6(FUNC_13(VAR_10)->pc, &VAR_22) == 0 && VAR_22 != VAR_1) {
     return VAR_8;
    }
   }
  } else {
   uint32_t VAR_23;
   if (FUNC_6(FUNC_14(VAR_10)->pc, &VAR_23) == 0 && VAR_23 != VAR_3) {
    return VAR_8;
   }
  }
 }

 return VAR_7;
}
