
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int thread_t ;
struct TYPE_4__ {int ss_sp; scalar_t__ ss_size; int ss_flags; } ;
struct uthread {int uu_siglist; int uu_flag; TYPE_1__ uu_sigstk; } ;
struct sigacts {scalar_t__ ps_sigonstack; int ps_sigreturn_token; int ps_sigreturn_validation; int * ps_sigact; } ;
typedef TYPE_2__* proc_t ;
struct TYPE_5__ {int p_siglist; int p_sigcatch; int p_sigignore; struct sigacts* p_sigacts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (long) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;
 int* VAR_8 ;

void
FUNC_5(proc_t VAR_9, thread_t VAR_10)
{
 struct sigacts *VAR_11 = VAR_9->p_sigacts;
 int VAR_12, VAR_13;
 struct uthread *VAR_14;

 VAR_14 = (struct uthread *)FUNC_2(VAR_10);
 VAR_14->uu_siglist |= VAR_9->p_siglist;
 VAR_9->p_siglist = 0;






 while (VAR_9->p_sigcatch) {
  VAR_12 = FUNC_1((long)VAR_9->p_sigcatch);
  VAR_13 = FUNC_4(VAR_12);
  VAR_9->p_sigcatch &= ~VAR_13;
  if (VAR_8[VAR_12] & VAR_2) {
   if (VAR_12 != VAR_3)
    VAR_9->p_sigignore |= VAR_13;
   VAR_14->uu_siglist &= ~VAR_13;
  }
  VAR_11->ps_sigact[VAR_12] = VAR_4;
 }

 FUNC_0(&VAR_11->ps_sigreturn_validation,
   VAR_0, VAR_7);

 FUNC_3(&VAR_11->ps_sigreturn_token, sizeof(VAR_11->ps_sigreturn_token));






 VAR_14->uu_sigstk.ss_flags = VAR_1;
 VAR_14->uu_sigstk.ss_size = 0;
 VAR_14->uu_sigstk.ss_sp = VAR_5;
 VAR_14->uu_flag &= ~VAR_6;

 VAR_11->ps_sigonstack = 0;
}
