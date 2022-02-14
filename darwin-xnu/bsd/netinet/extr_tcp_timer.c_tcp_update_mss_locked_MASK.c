
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ t_state; int t_flags; } ;
struct socket {int dummy; } ;
struct inpcb {struct ifnet* inp_last_outifp; } ;
struct ifnet {int * if_link_status; } ;


 int FUNC_0 (struct ifnet*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct tcpcb* FUNC_1 (struct inpcb*) ;
 struct inpcb* FUNC_2 (struct socket*) ;
 int FUNC_3 (struct tcpcb*,struct ifnet*) ;

void
FUNC_4(struct socket *VAR_2, struct ifnet *VAR_3)
{
 struct inpcb *VAR_4 = FUNC_2(VAR_2);
 struct tcpcb *VAR_5 = FUNC_1(VAR_4);

 if (VAR_3 == ((void*)0) && (VAR_3 = VAR_4->inp_last_outifp) == ((void*)0))
  return;

 if (!FUNC_0(VAR_3)) {




  return;
 }
 if ( VAR_5->t_state <= VAR_0) {




  if (VAR_5->t_flags & VAR_1)
   return;
  if (VAR_3->if_link_status == ((void*)0))
   return;
  FUNC_3(VAR_5, VAR_3);
 }
}
