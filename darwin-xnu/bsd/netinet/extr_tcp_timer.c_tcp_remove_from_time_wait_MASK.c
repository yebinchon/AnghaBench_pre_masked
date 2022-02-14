
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int dummy; } ;
struct inpcb {int inp_flags2; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct tcpcb*,int ) ;
 struct tcpcb* FUNC_1 (struct inpcb*) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_2(struct inpcb *VAR_3)
{
 struct tcpcb *VAR_4 = FUNC_1(VAR_3);
 if (VAR_3->inp_flags2 & VAR_0)
  FUNC_0(&VAR_2, VAR_4, VAR_1);
}
