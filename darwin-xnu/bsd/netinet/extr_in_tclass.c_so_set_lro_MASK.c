
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_flagsext; } ;
struct socket {int so_flags; } ;
struct inpcb {int inp_fport; int inp_lport; int inp_faddr; int inp_laddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tcpcb* FUNC_0 (struct inpcb*) ;
 struct inpcb* FUNC_1 (struct socket*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

void
FUNC_3(struct socket *VAR_3, int VAR_4)
{
 if (VAR_4 == VAR_1) {
  VAR_3->so_flags |= VAR_0;
 } else {
  if (VAR_3->so_flags & VAR_0) {

   VAR_3->so_flags &= ~VAR_0;
   struct inpcb *VAR_5 = FUNC_1(VAR_3);
   struct tcpcb *VAR_6 = ((void*)0);
   if (VAR_5) {
    VAR_6 = FUNC_0(VAR_5);
    if (VAR_6 && (VAR_6->t_flagsext & VAR_2)) {
     FUNC_2(VAR_5->inp_laddr,
      VAR_5->inp_faddr,
      VAR_5->inp_lport,
      VAR_5->inp_fport);
     VAR_6->t_flagsext &= ~VAR_2;
    }
   }
  }
 }
}
