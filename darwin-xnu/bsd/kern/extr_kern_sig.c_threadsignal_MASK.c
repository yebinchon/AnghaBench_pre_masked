
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int thread_t ;
struct uthread {int uu_flag; int uu_siglist; int uu_sigwait; int uu_sigmask; scalar_t__ uu_exit_reason; int uu_code; TYPE_1__* uu_proc; } ;
struct task {int dummy; } ;
typedef TYPE_1__* proc_t ;
typedef scalar_t__ os_reason_t ;
typedef int mach_exception_code_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {int p_lflag; int p_sigignore; int p_sigcatch; int p_pid; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ,int,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int,char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct task*) ;
 struct uthread* FUNC_4 (int ) ;
 struct task* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,scalar_t__,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int VAR_10 ;
 int VAR_11 ;

void
FUNC_11(thread_t VAR_12, int VAR_13, mach_exception_code_t VAR_14, boolean_t VAR_15)
{
 struct uthread *VAR_16;
 struct task * VAR_17;
 proc_t VAR_18;
 int VAR_19;

 if ((u_int)VAR_13 >= VAR_3 || VAR_13 == 0)
  return;

 VAR_19 = FUNC_9(VAR_13);
 if ((VAR_19 & VAR_11) == 0)
  return;
 VAR_17 = FUNC_5(VAR_12);
 VAR_18 = (proc_t)(FUNC_3(VAR_17));

 VAR_16 = FUNC_4(VAR_12);
 if (VAR_16->uu_flag & VAR_8)
  VAR_18 = VAR_16->uu_proc;

 FUNC_6(VAR_18);
 if (!(VAR_18->p_lflag & VAR_6) && (VAR_18->p_sigignore & VAR_19)) {
  FUNC_7(VAR_18);
  return;
 }

 VAR_16->uu_siglist |= VAR_19;
 VAR_16->uu_code = VAR_14;


 if (VAR_15 && ((VAR_18->p_lflag & VAR_6) || (!(VAR_16->uu_sigwait & VAR_19)
  && !(VAR_16->uu_sigmask & VAR_19) && !(VAR_18->p_sigcatch & VAR_19))) &&
  !(VAR_19 & VAR_10) && !(VAR_19 & VAR_9)) {

  if (VAR_16->uu_exit_reason == VAR_4) {
   FUNC_1(FUNC_0(VAR_1, VAR_0) | VAR_2,
        VAR_18->p_pid, VAR_5, VAR_13, 0, 0);

   os_reason_t VAR_20 = FUNC_2(VAR_13, "exc handler");

   FUNC_8(VAR_12, VAR_20, VAR_7);


   VAR_20 = VAR_4;
  }
 }

 FUNC_7(VAR_18);


 FUNC_10(VAR_12);
}
