
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {scalar_t__ orig_p0; } ;
struct TYPE_4__ {int sa_flags; int sa_mask; } ;
struct k_sigaction {TYPE_1__ sa; } ;
typedef int sigset_t ;
typedef int siginfo_t ;
struct TYPE_6__ {TYPE_2__* sighand; int blocked; } ;
struct TYPE_5__ {int siglock; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (struct pt_regs*,struct k_sigaction*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,struct k_sigaction*,int *,int *,struct pt_regs*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(int VAR_2, siginfo_t *VAR_3, struct k_sigaction *VAR_4,
       sigset_t *VAR_5, struct pt_regs *VAR_6)
{
 int VAR_7;


 if (VAR_6->orig_p0 >= 0)

  FUNC_0(VAR_6, VAR_4, 1);


 VAR_7 = FUNC_2(VAR_2, VAR_4, VAR_3, VAR_5, VAR_6);

 if (VAR_7 == 0) {
  FUNC_5(&VAR_1->sighand->siglock);
  FUNC_4(&VAR_1->blocked, &VAR_1->blocked,
     &VAR_4->sa.sa_mask);
  if (!(VAR_4->sa.sa_flags & VAR_0))
   FUNC_3(&VAR_1->blocked, VAR_2);
  FUNC_1();
  FUNC_6(&VAR_1->sighand->siglock);
 }
 return VAR_7;
}
