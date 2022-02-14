
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int dummy; } ;
struct socket {int so_flags; } ;
struct inpcb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tcpcb* FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct socket*,int) ;
 struct inpcb* FUNC_2 (struct socket*) ;

void
FUNC_3(struct socket *VAR_3)
{
 struct tcpcb *VAR_4 = ((void*)0);
 struct inpcb *VAR_5 = FUNC_2(VAR_3);

 if (VAR_5 == ((void*)0))
  return;

 VAR_4 = FUNC_0(VAR_5);
 if (VAR_4 == ((void*)0))
  return;

 if (VAR_3->so_flags & VAR_0)
  return;

 VAR_3->so_flags |= VAR_0;
 FUNC_1(VAR_3, (VAR_1 | VAR_2));
}
