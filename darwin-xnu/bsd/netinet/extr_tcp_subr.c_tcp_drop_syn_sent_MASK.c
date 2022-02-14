
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ t_state; } ;
struct inpcb {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct tcpcb* FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct tcpcb*,int) ;

void
FUNC_2(struct inpcb *VAR_1, int VAR_2)
{
 struct tcpcb *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3 && VAR_3->t_state == VAR_0)
  FUNC_1(VAR_3, VAR_2);
}
