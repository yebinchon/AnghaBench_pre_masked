
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int so_flags; int so_state; int so_state_change_cnt; } ;
struct TYPE_3__ {int s_addr; } ;
struct inpcb {TYPE_2__* inp_pcbinfo; scalar_t__ inp_fport; TYPE_1__ inp_faddr; struct socket* inp_socket; } ;
struct TYPE_4__ {int ipi_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct socket*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct inpcb*) ;
 int FUNC_7 (struct socket*,int ) ;
 int FUNC_8 (struct socket*,int ) ;

void
FUNC_9(struct inpcb *VAR_5)
{
 struct socket *VAR_6 = VAR_5->inp_socket;

 if (VAR_4 && FUNC_0(VAR_6) == VAR_1)
  FUNC_6(VAR_5);

 VAR_5->inp_faddr.s_addr = VAR_0;
 VAR_5->inp_fport = 0;






 if (!FUNC_5(VAR_5->inp_pcbinfo->ipi_lock)) {

  FUNC_8(VAR_6, 0);
  FUNC_4(VAR_5->inp_pcbinfo->ipi_lock);
  FUNC_7(VAR_6, 0);
 }

 FUNC_2(VAR_5);
 FUNC_3(VAR_5->inp_pcbinfo->ipi_lock);





 if (!(VAR_6->so_flags & VAR_2) && (VAR_6->so_state & VAR_3))
  FUNC_1(VAR_5);
}
