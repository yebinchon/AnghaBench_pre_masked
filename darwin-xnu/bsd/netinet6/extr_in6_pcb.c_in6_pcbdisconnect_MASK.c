
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int so_flags; int so_state; int so_state_change_cnt; } ;
struct inpcb {TYPE_1__* inp_pcbinfo; int inp_flow; scalar_t__ inp_fport; int in6p_faddr; struct socket* inp_socket; } ;
typedef int caddr_t ;
struct TYPE_2__ {int ipi_lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (struct inpcb*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (struct inpcb*) ;
 int FUNC_8 (struct socket*,int ) ;
 int FUNC_9 (struct socket*,int ) ;

void
FUNC_10(struct inpcb *VAR_5)
{
 struct socket *VAR_6 = VAR_5->inp_socket;






 if (!FUNC_6(VAR_5->inp_pcbinfo->ipi_lock)) {

  FUNC_9(VAR_6, 0);
  FUNC_5(VAR_5->inp_pcbinfo->ipi_lock);
  FUNC_8(VAR_6, 0);
 }
 if (VAR_4 && FUNC_0(VAR_6) == VAR_0)
  FUNC_7(VAR_5);
 FUNC_1((caddr_t)&VAR_5->in6p_faddr, sizeof (VAR_5->in6p_faddr));
 VAR_5->inp_fport = 0;

 VAR_5->inp_flow &= ~VAR_1;
 FUNC_3(VAR_5);
 FUNC_4(VAR_5->inp_pcbinfo->ipi_lock);





 if (!(VAR_6->so_flags & VAR_2) && (VAR_6->so_state & VAR_3))
  FUNC_2(VAR_5);
}
