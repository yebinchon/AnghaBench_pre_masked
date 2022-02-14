
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct inpcb {int inp_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,int) ;
 int FUNC_1 (struct socket*,int) ;
 struct inpcb* FUNC_2 (struct socket*) ;

void
FUNC_3(struct socket *VAR_1)
{
 struct inpcb *VAR_2 = ((void*)0);

 FUNC_0(VAR_1, 1);
 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  VAR_2->inp_flags &= ~VAR_0;
 }
 FUNC_1(VAR_1, 1);
}
