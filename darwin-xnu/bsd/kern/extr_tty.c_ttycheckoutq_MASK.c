
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uthread {int uu_siglist; } ;
struct TYPE_2__ {int c_cc; } ;
struct tty {int t_hiwat; int t_state; TYPE_1__ t_outq; } ;
typedef int sigset_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct tty*) ;
 int VAR_2 ;
 int FUNC_2 (struct tty*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (struct tty*,int ,scalar_t__,char*,int ) ;

int
FUNC_7(struct tty *VAR_4, int VAR_5)
{
 int VAR_6;
 sigset_t VAR_7;
 struct uthread *VAR_8;

 FUNC_2(VAR_4);

 VAR_8 = (struct uthread *)FUNC_4(FUNC_3());

 VAR_6 = VAR_4->t_hiwat;
 VAR_7 = VAR_5 ? VAR_8->uu_siglist : 0;
 if (VAR_4->t_outq.c_cc > VAR_6 + VAR_0 + 100)
  while (VAR_4->t_outq.c_cc > VAR_6) {
   FUNC_5(VAR_4);
   if (VAR_4->t_outq.c_cc <= VAR_6)
    break;
   if (VAR_5 == 0 || VAR_8->uu_siglist != VAR_7) {
    return (0);
   }
   FUNC_0(VAR_4->t_state, VAR_2);
   FUNC_6(VAR_4, FUNC_1(VAR_4), VAR_1 - 1, "ttoutq", VAR_3);
  }
 return (1);
}
