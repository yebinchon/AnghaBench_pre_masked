
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {struct mptsub* t_mpsub; struct inpcb* t_inpcb; } ;
struct socket {int so_flags; } ;
struct mptsub {int mpts_flags; } ;
struct inpcb {struct socket* inp_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_0(struct tcpcb *VAR_3)
{
 struct mptsub *VAR_4;
 struct inpcb *VAR_5;
 struct socket *VAR_6;

 VAR_5 = VAR_3->t_inpcb;
 if (VAR_5 == ((void*)0))
  return;

 VAR_6 = VAR_5->inp_socket;
 if (VAR_6 == ((void*)0))
  return;

 if (!(VAR_6->so_flags & VAR_1))
  return;

 VAR_4 = VAR_3->t_mpsub;

 VAR_4->mpts_flags &= ~VAR_0;
 VAR_6->so_flags &= ~VAR_2;
}
