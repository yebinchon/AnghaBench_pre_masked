
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int ss_size; int ss_flags; int ss_sp; } ;
struct TYPE_10__ {int uc_sigmask; TYPE_2__ uc_stack; int uc_link; int uc_flags; } ;
struct rt_sigframe {TYPE_3__ uc; int info; scalar_t__ retcode; } ;
struct pt_regs {unsigned long* areg; int depc; int pc; } ;
struct TYPE_11__ {int sa_flags; scalar_t__ sa_handler; scalar_t__ sa_restorer; } ;
struct k_sigaction {TYPE_4__ sa; } ;
typedef int sigset_t ;
typedef int siginfo_t ;
struct TYPE_13__ {TYPE_1__* exec_domain; } ;
struct TYPE_12__ {unsigned long sas_ss_sp; unsigned long sas_ss_size; int pid; int comm; } ;
struct TYPE_8__ {int* signal_invmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (void*,int *) ;
 int FUNC_2 (int ,struct rt_sigframe*,int) ;
 int FUNC_3 (int *,int *) ;
 TYPE_5__* VAR_7 ;
 TYPE_6__* FUNC_4 () ;
 int FUNC_5 (int,TYPE_5__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ,int ,int,struct rt_sigframe*,int ) ;
 void* FUNC_10 (unsigned long) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct rt_sigframe*,struct pt_regs*) ;
 int FUNC_13 (struct pt_regs*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_14(int VAR_8, struct k_sigaction *VAR_9, siginfo_t *VAR_10,
   sigset_t *VAR_11, struct pt_regs *VAR_12)
{
 struct rt_sigframe *VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 unsigned long VAR_16, VAR_17;

 VAR_16 = VAR_12->areg[1];

 if ((VAR_9->sa.sa_flags & VAR_0) != 0 && ! FUNC_7(VAR_16)) {
  VAR_16 = VAR_7->sas_ss_sp + VAR_7->sas_ss_size;
 }

 VAR_13 = (void *)((VAR_16 - sizeof(*VAR_13)) & -16ul);

 if (VAR_12->depc > 64)
  FUNC_8 ("Double exception sys_sigreturn\n");

 if (!FUNC_2(VAR_6, VAR_13, sizeof(*VAR_13))) {
  goto give_sigsegv;
 }

 VAR_15 = FUNC_4()->exec_domain
  && FUNC_4()->exec_domain->signal_invmap
  && VAR_8 < 32
  ? FUNC_4()->exec_domain->signal_invmap[VAR_8]
  : VAR_8;

 if (VAR_9->sa.sa_flags & VAR_2) {
  VAR_14 |= FUNC_3(&VAR_13->info, VAR_10);
 }



 VAR_14 |= FUNC_1(0, &VAR_13->uc.uc_flags);
 VAR_14 |= FUNC_1(0, &VAR_13->uc.uc_link);
 VAR_14 |= FUNC_1((void *)VAR_7->sas_ss_sp,
     &VAR_13->uc.uc_stack.ss_sp);
 VAR_14 |= FUNC_1(FUNC_10(VAR_12->areg[1]),
     &VAR_13->uc.uc_stack.ss_flags);
 VAR_14 |= FUNC_1(VAR_7->sas_ss_size, &VAR_13->uc.uc_stack.ss_size);
 VAR_14 |= FUNC_12(VAR_13, VAR_12);
 VAR_14 |= FUNC_0(&VAR_13->uc.uc_sigmask, VAR_11, sizeof(*VAR_11));

 if (VAR_9->sa.sa_flags & VAR_1) {
  VAR_17 = (unsigned long)VAR_9->sa.sa_restorer;
 } else {



  VAR_14 |= FUNC_6(VAR_13->retcode);

  if (VAR_14) {
   goto give_sigsegv;
  }
  VAR_17 = (unsigned long) VAR_13->retcode;
 }







 FUNC_13(VAR_12, (unsigned long) VAR_9->sa.sa_handler,
       (unsigned long) VAR_13);




 VAR_12->areg[4] = (((unsigned long) VAR_17) & 0x3fffffff) | 0x40000000;
 VAR_12->areg[6] = (unsigned long) VAR_15;
 VAR_12->areg[7] = (unsigned long) &VAR_13->info;
 VAR_12->areg[8] = (unsigned long) &VAR_13->uc;




 FUNC_11(VAR_5);






 return;

give_sigsegv:
 if (VAR_8 == VAR_3)
  VAR_9->sa.sa_handler = VAR_4;
 FUNC_5(VAR_3, VAR_7);
}
