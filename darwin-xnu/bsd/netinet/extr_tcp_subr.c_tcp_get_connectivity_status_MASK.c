
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcpcb {scalar_t__ t_rxtshift; scalar_t__ t_rtimo_probes; TYPE_2__* t_inpcb; int t_state; } ;
struct tcp_conn_status {int write_probe_failed; int conn_probe_failed; int read_probe_failed; int probe_activated; } ;
struct TYPE_4__ {TYPE_1__* inp_last_outifp; } ;
struct TYPE_3__ {int if_eflags; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct tcp_conn_status*,int) ;

void
FUNC_2(struct tcpcb *VAR_2,
 struct tcp_conn_status *VAR_3)
{
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return;
 FUNC_1(VAR_3, sizeof(*VAR_3));
 if (VAR_2->t_rxtshift >= VAR_1) {
  if (FUNC_0(VAR_2->t_state)) {
   VAR_3->write_probe_failed = 1;
  } else {
   VAR_3->conn_probe_failed = 1;
  }
 }
 if (VAR_2->t_rtimo_probes >= VAR_1)
  VAR_3->read_probe_failed = 1;
 if (VAR_2->t_inpcb != ((void*)0) && VAR_2->t_inpcb->inp_last_outifp != ((void*)0) &&
     (VAR_2->t_inpcb->inp_last_outifp->if_eflags & VAR_0))
  VAR_3->probe_activated = 1;
}
