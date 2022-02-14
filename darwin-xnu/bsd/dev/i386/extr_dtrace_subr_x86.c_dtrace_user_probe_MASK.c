
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int x86_saved_state_t ;
struct TYPE_9__ {int trapno; void* rip; } ;
struct TYPE_10__ {TYPE_1__ isf; } ;
typedef TYPE_2__ x86_saved_state64_t ;
struct TYPE_11__ {int cs; int trapno; void* eip; } ;
typedef TYPE_3__ x86_saved_state32_t ;
typedef TYPE_4__* uthread_t ;
typedef void* user_addr_t ;
typedef scalar_t__ uint8_t ;
struct proc {int dummy; } ;
typedef int lck_rw_t ;
typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_13__ {int cpu_ft_lock; } ;
struct TYPE_12__ {scalar_t__ t_dtrace_step; scalar_t__ t_dtrace_ret; scalar_t__ t_dtrace_ft; scalar_t__ t_dtrace_ast; void* t_dtrace_npc; } ;


 TYPE_8__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct proc* FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (void*,scalar_t__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*,struct proc*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 TYPE_3__* FUNC_11 (int *) ;
 TYPE_2__* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;

kern_return_t
FUNC_15(x86_saved_state_t *VAR_7)
{
 x86_saved_state64_t *VAR_8;
 x86_saved_state32_t *VAR_9;
        int VAR_10;







 boolean_t VAR_11 = VAR_4;

        if (FUNC_6(VAR_7) == VAR_4) {
                VAR_8 = FUNC_12(VAR_7);
  VAR_9 = ((void*)0);
                VAR_10 = VAR_8->isf.trapno;
                VAR_11 = VAR_4;
        } else {
  VAR_8 = ((void*)0);
                VAR_9 = FUNC_11(VAR_7);
                if (VAR_9->cs & 0x03) VAR_11 = VAR_4;
                VAR_10 = VAR_9->trapno;
        }

 lck_rw_t *VAR_12;
 struct proc *VAR_13 = FUNC_0();

 uthread_t VAR_14 = (uthread_t)FUNC_5(FUNC_1());
 if (VAR_11 ) {





  FUNC_7(VAR_14, VAR_13);
 }

 if (VAR_10 == VAR_5) {
  uint8_t VAR_15 = VAR_14->t_dtrace_step;
  uint8_t VAR_16 = VAR_14->t_dtrace_ret;
  user_addr_t VAR_17 = VAR_14->t_dtrace_npc;

  if (VAR_14->t_dtrace_ast) {
   FUNC_10("dtrace_user_probe() should be calling aston()\n");


  }




  VAR_14->t_dtrace_ft = 0;






  if (VAR_15 == 0) {





    return VAR_2;
  }







  if (VAR_16 == 0) {
   if (VAR_8) {
    VAR_8->isf.rip = VAR_17;
   } else {
    VAR_9->eip = VAR_17;
   }
   return VAR_3;
  }





  VAR_12 = &VAR_0->cpu_ft_lock;
  FUNC_8(VAR_12);

  if (&FUNC_3 != ((void*)0))
   (void) FUNC_3)(VAR_7);
  FUNC_9(VAR_12);

  if (VAR_8) {
   VAR_8->isf.rip = VAR_17;
  } else {
   VAR_9->eip = VAR_17;
  }

  return VAR_3;
 } else if (VAR_10 == VAR_6) {
  uint8_t VAR_18, VAR_19;
  VAR_12 = &VAR_0->cpu_ft_lock;
  FUNC_8(VAR_12);
  if (&FUNC_2 != ((void*)0) &&
      FUNC_2)(VAR_7) == 0) {
   FUNC_9(VAR_12);
   return VAR_3;
  }
  FUNC_9(VAR_12);
  user_addr_t VAR_20 = (VAR_8) ? VAR_8->isf.rip : (user_addr_t)VAR_9->eip;
  if (FUNC_4(VAR_20 - 1, &VAR_18) == 0 && VAR_18 != VAR_1 &&
   !(VAR_18 == 3 && FUNC_4(VAR_20 - 2, &VAR_19) == 0 && VAR_19 == 0xCD)) {
   if (VAR_8) {
    VAR_8->isf.rip--;
   } else {
    VAR_9->eip--;
   }
   return VAR_3;
  }

 }

 return VAR_2;
}
