
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {scalar_t__ orig_d0; } ;
struct TYPE_4__ {int sa_flags; int sa_mask; int sa_handler; } ;
struct k_sigaction {TYPE_1__ sa; } ;
typedef int sigset_t ;
typedef int siginfo_t ;
struct TYPE_6__ {TYPE_2__* sighand; int blocked; } ;
struct TYPE_5__ {int siglock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_0 (struct pt_regs*,struct k_sigaction*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,struct k_sigaction*,int *,struct pt_regs*) ;
 int FUNC_3 (int,struct k_sigaction*,int *,int *,struct pt_regs*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(int VAR_5, struct k_sigaction *VAR_6, siginfo_t *VAR_7,
       sigset_t *VAR_8, struct pt_regs *VAR_9)
{

 if (VAR_9->orig_d0 >= 0)

  FUNC_0(VAR_9, VAR_6, 1);


 if (VAR_6->sa.sa_flags & VAR_2)
  FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 else
  FUNC_2(VAR_5, VAR_6, VAR_8, VAR_9);

 if (VAR_6->sa.sa_flags & VAR_1)
  VAR_6->sa.sa_handler = VAR_3;

 FUNC_6(&VAR_4->sighand->siglock);
 FUNC_5(&VAR_4->blocked,&VAR_4->blocked,&VAR_6->sa.sa_mask);
 if (!(VAR_6->sa.sa_flags & VAR_0))
  FUNC_4(&VAR_4->blocked,VAR_5);
 FUNC_1();
 FUNC_7(&VAR_4->sighand->siglock);
}
