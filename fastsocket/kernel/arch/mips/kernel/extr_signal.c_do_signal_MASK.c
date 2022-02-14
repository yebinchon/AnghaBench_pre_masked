
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {scalar_t__* regs; int cp0_epc; } ;
struct k_sigaction {int dummy; } ;
typedef int sigset_t ;
typedef int siginfo_t ;
struct TYPE_5__ {TYPE_1__* abi; } ;
struct TYPE_6__ {int saved_sigmask; TYPE_2__ thread; int blocked; } ;
struct TYPE_4__ {scalar_t__ restart; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 TYPE_3__* VAR_6 ;
 int FUNC_1 (int *,struct k_sigaction*,struct pt_regs*,int *) ;
 scalar_t__ FUNC_2 (int,int *,struct k_sigaction*,int *,struct pt_regs*) ;
 int FUNC_3 (int ,int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_6(struct pt_regs *VAR_7)
{
 struct k_sigaction VAR_8;
 sigset_t *VAR_9;
 siginfo_t VAR_10;
 int VAR_11;






 if (!FUNC_5(VAR_7))
  return;

 if (FUNC_4(VAR_5))
  VAR_9 = &VAR_6->saved_sigmask;
 else
  VAR_9 = &VAR_6->blocked;

 VAR_11 = FUNC_1(&VAR_10, &VAR_8, VAR_7, ((void*)0));
 if (VAR_11 > 0) {

  if (FUNC_2(VAR_11, &VAR_10, &VAR_8, VAR_9, VAR_7) == 0) {






   if (FUNC_4(VAR_5))
    FUNC_0(VAR_5);
  }

  return;
 }






 if (VAR_7->regs[0]) {
  if (VAR_7->regs[2] == VAR_0 ||
      VAR_7->regs[2] == VAR_2 ||
      VAR_7->regs[2] == VAR_1) {
   VAR_7->regs[7] = VAR_7->regs[26];
   VAR_7->cp0_epc -= 8;
  }
  if (VAR_7->regs[2] == VAR_3) {
   VAR_7->regs[2] = VAR_6->thread.abi->restart;
   VAR_7->regs[7] = VAR_7->regs[26];
   VAR_7->cp0_epc -= 4;
  }
  VAR_7->regs[0] = 0;
 }





 if (FUNC_4(VAR_5)) {
  FUNC_0(VAR_5);
  FUNC_3(VAR_4, &VAR_6->saved_sigmask, ((void*)0));
 }
}
