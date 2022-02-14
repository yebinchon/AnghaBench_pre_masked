
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_flags; } ;
struct inpcb {int inp_flags; struct socket* inp_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inpcb*) ;
 scalar_t__ FUNC_1 (struct inpcb*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct socket*,int) ;
 int FUNC_3 (struct socket*) ;

void
FUNC_4(struct inpcb *VAR_5)
{
 struct socket *VAR_6 = VAR_5->inp_socket;
 int VAR_7 = (FUNC_0(VAR_5)) ? 1 : 0;
 int VAR_8 = (FUNC_1(VAR_5)) ? 1 : 0;

 VAR_5->inp_flags &= ~(VAR_0 | VAR_1);

 if (VAR_7) {
  VAR_6->so_flags &= ~(VAR_2);
  FUNC_2(VAR_6, (VAR_3 | VAR_4));
 }


 if (VAR_8)
  FUNC_3(VAR_6);
}
