
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sigscratch {int pt; } ;
struct TYPE_4__ {int sa_flags; int sa_mask; } ;
struct k_sigaction {TYPE_1__ sa; } ;
typedef int sigset_t ;
typedef int siginfo_t ;
struct TYPE_6__ {TYPE_2__* sighand; int blocked; } ;
struct TYPE_5__ {int siglock; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (unsigned long,struct k_sigaction*,int *,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long,struct k_sigaction*,int *,int *,struct sigscratch*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (unsigned long,int *,struct k_sigaction*,int *,int ) ;

__attribute__((used)) static long
FUNC_10 (unsigned long VAR_3, struct k_sigaction *VAR_4, siginfo_t *VAR_5, sigset_t *VAR_6,
        struct sigscratch *VAR_7)
{
 if (FUNC_0(&VAR_7->pt)) {

  if (!FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_7->pt))
   return 0;
 } else

  if (!FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7))
   return 0;

 FUNC_6(&VAR_2->sighand->siglock);
 FUNC_5(&VAR_2->blocked, &VAR_2->blocked, &VAR_4->sa.sa_mask);
 if (!(VAR_4->sa.sa_flags & VAR_0))
  FUNC_4(&VAR_2->blocked, VAR_3);
 FUNC_2();
 FUNC_7(&VAR_2->sighand->siglock);




 FUNC_9(VAR_3, VAR_5, VAR_4, &VAR_7->pt,
     FUNC_8(VAR_1));

 return 1;
}
