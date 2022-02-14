
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_mpflags; } ;
struct socket {int dummy; } ;
struct inpcb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcpcb* FUNC_0 (struct inpcb*) ;
 struct inpcb* FUNC_1 (struct socket*) ;

__attribute__((used)) static void
FUNC_2(struct socket *VAR_2)
{
 struct tcpcb *VAR_3 = ((void*)0);
 struct inpcb *VAR_4 = ((void*)0);

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return;

 VAR_3 = FUNC_0(VAR_4);
 if (!VAR_3)
  return;

 if (!(VAR_3->t_mpflags & VAR_0))
  VAR_3->t_mpflags |= VAR_1;
}
