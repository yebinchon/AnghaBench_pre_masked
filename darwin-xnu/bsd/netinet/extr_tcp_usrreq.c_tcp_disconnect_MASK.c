
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcpcb {scalar_t__ t_reassqlen; scalar_t__ t_state; int t_mpflags; TYPE_1__* t_inpcb; } ;
struct TYPE_4__ {scalar_t__ sb_cc; } ;
struct socket {int so_options; scalar_t__ so_linger; int so_flags; TYPE_2__ so_rcv; } ;
struct TYPE_3__ {struct socket* inp_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct socket*) ;
 struct tcpcb* FUNC_2 (struct tcpcb*) ;
 struct tcpcb* FUNC_3 (struct tcpcb*,int ) ;
 int FUNC_4 (struct tcpcb*) ;
 struct tcpcb* FUNC_5 (struct tcpcb*) ;

__attribute__((used)) static struct tcpcb *
FUNC_6(struct tcpcb *VAR_4)
{
 struct socket *VAR_5 = VAR_4->t_inpcb->inp_socket;

 if (VAR_5->so_rcv.sb_cc != 0 || VAR_4->t_reassqlen != 0)
  return FUNC_3(VAR_4, 0);

 if (VAR_4->t_state < VAR_2)
  VAR_4 = FUNC_2(VAR_4);
 else if ((VAR_5->so_options & VAR_1) && VAR_5->so_linger == 0)
  VAR_4 = FUNC_3(VAR_4, 0);
 else {
  FUNC_1(VAR_5);
  FUNC_0(&VAR_5->so_rcv);
  VAR_4 = FUNC_5(VAR_4);






  if (VAR_4)
   (void) FUNC_4(VAR_4);
 }
 return (VAR_4);
}
