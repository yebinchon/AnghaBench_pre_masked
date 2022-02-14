
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pt_regs {int* regs; int cp0_epc; } ;
struct TYPE_8__ {int sa_flags; int sa_mask; } ;
struct k_sigaction {TYPE_3__ sa; } ;
typedef int sigset_t ;
typedef int siginfo_t ;
struct TYPE_7__ {TYPE_1__* abi; } ;
struct TYPE_10__ {TYPE_4__* sighand; int blocked; TYPE_2__ thread; } ;
struct TYPE_9__ {int siglock; } ;
struct TYPE_6__ {int (* setup_rt_frame ) (struct k_sigaction*,struct pt_regs*,unsigned long,int *,int *) ;int (* setup_frame ) (struct k_sigaction*,struct pt_regs*,unsigned long,int *) ;} ;


 void* VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct k_sigaction*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct k_sigaction*,struct pt_regs*,unsigned long,int *,int *) ;
 int FUNC_7 (struct k_sigaction*,struct pt_regs*,unsigned long,int *) ;

__attribute__((used)) static int FUNC_8(unsigned long VAR_4, siginfo_t *VAR_5,
 struct k_sigaction *VAR_6, sigset_t *VAR_7, struct pt_regs *VAR_8)
{
 int VAR_9;

 switch(VAR_8->regs[0]) {
 case 128:
 case 131:
  VAR_8->regs[2] = VAR_0;
  break;
 case 129:
  if (!(VAR_6->sa.sa_flags & VAR_2)) {
   VAR_8->regs[2] = VAR_0;
   break;
  }

 case 130:
  VAR_8->regs[7] = VAR_8->regs[26];
  VAR_8->cp0_epc -= 8;
 }

 VAR_8->regs[0] = 0;

 if (FUNC_1(VAR_6))
  VAR_9 = VAR_3->thread.abi->setup_rt_frame(VAR_6, VAR_8, VAR_4, VAR_7, VAR_5);
 else
  VAR_9 = VAR_3->thread.abi->setup_frame(VAR_6, VAR_8, VAR_4, VAR_7);

 FUNC_4(&VAR_3->sighand->siglock);
 FUNC_3(&VAR_3->blocked, &VAR_3->blocked, &VAR_6->sa.sa_mask);
 if (!(VAR_6->sa.sa_flags & VAR_1))
  FUNC_2(&VAR_3->blocked, VAR_4);
 FUNC_0();
 FUNC_5(&VAR_3->sighand->siglock);

 return VAR_9;
}
