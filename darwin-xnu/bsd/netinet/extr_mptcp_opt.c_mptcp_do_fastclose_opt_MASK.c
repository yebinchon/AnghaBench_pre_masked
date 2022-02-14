
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct tcphdr {scalar_t__ th_flags; scalar_t__ th_seq; } ;
struct tcpcb {scalar_t__ rcv_nxt; int t_mpflags; TYPE_1__* t_inpcb; } ;
struct mptcp_fastclose_opt {int mfast_len; scalar_t__ mfast_key; } ;
struct mptcb {scalar_t__ mpt_localkey; } ;
struct TYPE_4__ {int tcps_invalid_opt; } ;
struct TYPE_3__ {int * inp_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 TYPE_2__ VAR_5 ;
 struct mptcb* FUNC_1 (struct tcpcb*) ;

__attribute__((used)) static void
FUNC_2(struct tcpcb *VAR_6, u_char *VAR_7, struct tcphdr *VAR_8)
{
 struct mptcb *VAR_9 = ((void*)0);
 struct mptcp_fastclose_opt *VAR_10 = (struct mptcp_fastclose_opt *)VAR_7;

 if (VAR_8->th_flags != VAR_2)
  return;

 if (VAR_10->mfast_len != sizeof (struct mptcp_fastclose_opt)) {
  VAR_5.tcps_invalid_opt++;
  return;
 }

 VAR_9 = FUNC_1(VAR_6);
 if (!VAR_9)
  return;

 if (VAR_10->mfast_key != VAR_9->mpt_localkey) {
  VAR_5.tcps_invalid_opt++;
  return;
 }





 if (VAR_8->th_seq != VAR_6->rcv_nxt) {
  VAR_5.tcps_invalid_opt++;
  return;
 }


 VAR_6->t_mpflags |= (VAR_4 | VAR_3);

 if (VAR_6->t_inpcb->inp_socket != ((void*)0)) {
  FUNC_0(VAR_6->t_inpcb->inp_socket,
      VAR_0 | VAR_1);
 }
}
