
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_flags; int so_state; } ;
struct rawcb {scalar_t__ rcb_faddr; struct socket* rcb_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rawcb*) ;

void
FUNC_3(struct rawcb *VAR_2)
{
 struct socket *VAR_3 = VAR_2->rcb_socket;
 if (!(VAR_3->so_flags & VAR_0) && (VAR_3->so_state & VAR_1))
  FUNC_2(VAR_2);
}
