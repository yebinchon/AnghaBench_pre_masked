
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_state; } ;
struct socket {int dummy; } ;
struct proc {int dummy; } ;
struct inpcb {scalar_t__ inp_lport; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct inpcb*,int *,struct proc*) ;
 struct inpcb* FUNC_3 (struct socket*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_2, struct proc *VAR_3)
{
 int VAR_4 = 0;
 struct inpcb *VAR_5 = FUNC_3(VAR_2);
 struct tcpcb *VAR_6;

 FUNC_1();
 if (VAR_5->inp_lport == 0)
  VAR_4 = FUNC_2(VAR_5, ((void*)0), VAR_3);
 if (VAR_4 == 0)
  VAR_6->t_state = VAR_1;
 FUNC_0(VAR_0);
}
