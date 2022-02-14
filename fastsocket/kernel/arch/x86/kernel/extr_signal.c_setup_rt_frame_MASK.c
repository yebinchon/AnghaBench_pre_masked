
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_2__ {int sa_flags; } ;
struct k_sigaction {TYPE_1__ sa; } ;
typedef int sigset_t ;
typedef int siginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct k_sigaction*,int *,int *,struct pt_regs*) ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,struct k_sigaction*,int *,struct pt_regs*) ;
 int FUNC_3 (int,struct k_sigaction*,int *,int *,struct pt_regs*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(int VAR_4, struct k_sigaction *VAR_5, siginfo_t *VAR_6,
        sigset_t *VAR_7, struct pt_regs *VAR_8)
{
 int VAR_9 = FUNC_4(VAR_4);
 int VAR_10;


 if (VAR_3) {
  if (VAR_5->sa.sa_flags & VAR_1)
   VAR_10 = FUNC_3(VAR_9, VAR_5, VAR_6, VAR_7, VAR_8);
  else
   VAR_10 = FUNC_2(VAR_9, VAR_5, VAR_7, VAR_8);
 } else
  VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);

 if (VAR_10) {
  FUNC_1(VAR_4, VAR_2);
  return -VAR_0;
 }

 return VAR_10;
}
