
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_restrictions; } ;
struct inpcb {int inp_route; int inp_flags; struct socket* inp_socket; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;

void
FUNC_1(struct inpcb *VAR_2)
{
 struct socket *VAR_3 = VAR_2->inp_socket;






 if (VAR_3 != ((void*)0) && !(VAR_3->so_restrictions & VAR_1)) {
  VAR_2->inp_flags &= ~VAR_0;


  FUNC_0(&VAR_2->inp_route);
 }
}
