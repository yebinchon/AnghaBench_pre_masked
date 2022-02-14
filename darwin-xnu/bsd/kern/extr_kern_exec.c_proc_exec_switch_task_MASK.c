
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* uthread_t ;
typedef int thread_t ;
typedef scalar_t__ task_t ;
typedef TYPE_2__* proc_t ;
typedef int boolean_t ;
struct TYPE_16__ {int p_lflag; int p_uthlist; scalar_t__ p_return_to_kernel_offset; scalar_t__ p_dispatchqueue_serialno_offset; scalar_t__ p_dispatchqueue_offset; scalar_t__ task; } ;
struct TYPE_15__ {scalar_t__ uu_siglist; int * uu_exit_reason; int * t_dtrace_scratch; scalar_t__ t_dtrace_resumepid; scalar_t__ t_dtrace_stop; scalar_t__ t_dtrace_sig; int uu_vforkmask; int uu_oldmask; int uu_sigmask; int uu_sigwait; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*,int,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int VAR_2 ;

proc_t
FUNC_22(proc_t VAR_3, task_t VAR_4, task_t VAR_5, thread_t VAR_6)
{
 int VAR_7 = 0;
 boolean_t VAR_8;
 boolean_t VAR_9;
 boolean_t VAR_10;
 thread_t VAR_11 = FUNC_4();
 FUNC_21(VAR_11);
 VAR_3 = FUNC_8(VAR_3, VAR_1);


 FUNC_3(FUNC_6(VAR_6) == VAR_5);
 VAR_8 = FUNC_15(VAR_5);


 FUNC_7(VAR_3);
 VAR_9 = !(VAR_3->p_lflag & VAR_0);


 VAR_10 = FUNC_20(VAR_11);





 if (VAR_9 && VAR_8 && VAR_10) {
  VAR_7 = FUNC_11(VAR_3, 1, 0);
  if (VAR_7 == 0) {
   uthread_t VAR_12 = FUNC_5(VAR_6);
   uthread_t VAR_13 = FUNC_5(FUNC_4());





   VAR_3->task = VAR_5;


   VAR_3->p_dispatchqueue_offset = 0;
   VAR_3->p_dispatchqueue_serialno_offset = 0;
   VAR_3->p_return_to_kernel_offset = 0;


   FUNC_2(VAR_6);
   VAR_12->uu_siglist = VAR_13->uu_siglist;
   VAR_12->uu_sigwait = VAR_13->uu_sigwait;
   VAR_12->uu_sigmask = VAR_13->uu_sigmask;
   VAR_12->uu_oldmask = VAR_13->uu_oldmask;
   VAR_12->uu_vforkmask = VAR_13->uu_vforkmask;
   VAR_12->uu_exit_reason = VAR_13->uu_exit_reason;
   FUNC_19(VAR_6, FUNC_4());


   VAR_13->uu_exit_reason = ((void*)0);
   VAR_13->uu_siglist = 0;


   FUNC_0(&VAR_3->p_uthlist, VAR_12, VAR_2);
   FUNC_1(&VAR_3->p_uthlist, VAR_13, VAR_2);

   FUNC_16(VAR_4);
   FUNC_13(VAR_5);

   FUNC_14(VAR_5, VAR_4);

   FUNC_10(VAR_3, 1);
  }
 }

 FUNC_12(VAR_3);
 FUNC_9(VAR_3);
 FUNC_18(VAR_11);

 if (VAR_7 != 0 || !VAR_8 || !VAR_9 || !VAR_10) {
  FUNC_17(VAR_5);
 }

 return VAR_3;
}
