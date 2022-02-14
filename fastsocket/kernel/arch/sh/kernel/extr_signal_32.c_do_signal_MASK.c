
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {scalar_t__ tra; unsigned int* regs; scalar_t__ pc; } ;
struct k_sigaction {int sa; } ;
typedef int sigset_t ;
typedef int siginfo_t ;
struct TYPE_2__ {int saved_sigmask; int blocked; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_8 ;
 int FUNC_2 (int *,struct k_sigaction*,struct pt_regs*,int *) ;
 scalar_t__ FUNC_3 (int,struct k_sigaction*,int *,int *,struct pt_regs*,unsigned int) ;
 int FUNC_4 (unsigned int,struct pt_regs*,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int,int *,struct k_sigaction*,struct pt_regs*,scalar_t__) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_11(struct pt_regs *VAR_9, unsigned int VAR_10)
{
 siginfo_t VAR_11;
 int VAR_12;
 struct k_sigaction VAR_13;
 sigset_t *VAR_14;







 if (!FUNC_10(VAR_9))
  return;

 if (FUNC_9())
  goto no_signal;

 if (FUNC_7(VAR_5))
  VAR_14 = &VAR_8->saved_sigmask;
 else
  VAR_14 = &VAR_8->blocked;

 VAR_12 = FUNC_2(&VAR_11, &VAR_13, VAR_9, ((void*)0));
 if (VAR_12 > 0) {
  FUNC_4(VAR_10, VAR_9, &VAR_13.sa);


  if (FUNC_3(VAR_12, &VAR_13, &VAR_11, VAR_14,
      VAR_9, VAR_10) == 0) {




   if (FUNC_7(VAR_5))
    FUNC_0(VAR_5);

   FUNC_8(VAR_12, &VAR_11, &VAR_13, VAR_9,
     FUNC_7(VAR_6));
  }

  return;
 }

no_signal:

 if (VAR_9->tra >= 0) {

  if (VAR_9->regs[0] == -VAR_0 ||
      VAR_9->regs[0] == -VAR_2 ||
      VAR_9->regs[0] == -VAR_1) {
   VAR_9->regs[0] = VAR_10;
   VAR_9->pc -= FUNC_5(FUNC_1(VAR_9->pc - 4));
  } else if (VAR_9->regs[0] == -VAR_3) {
   VAR_9->pc -= FUNC_5(FUNC_1(VAR_9->pc - 4));
   VAR_9->regs[3] = VAR_7;
  }
 }



 if (FUNC_7(VAR_5)) {
  FUNC_0(VAR_5);
  FUNC_6(VAR_4, &VAR_8->saved_sigmask, ((void*)0));
 }
}
