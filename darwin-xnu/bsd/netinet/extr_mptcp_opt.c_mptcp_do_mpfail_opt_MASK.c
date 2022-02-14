
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_char ;
struct tcphdr {scalar_t__ th_seq; scalar_t__ th_flags; } ;
struct tcpcb {scalar_t__ rcv_nxt; TYPE_1__* t_inpcb; } ;
struct mptcp_mpfail_opt {int mfail_len; int mfail_dsn; } ;
struct mptcb {int mpt_ssn_at_csum_fail; int mpt_dsn_at_csum_fail; int mpt_flags; } ;
struct TYPE_4__ {int tcps_invalid_opt; } ;
struct TYPE_3__ {int inp_socket; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_3 ;
 struct mptcb* FUNC_3 (struct tcpcb*) ;

__attribute__((used)) static void
FUNC_4(struct tcpcb *VAR_4, u_char *VAR_5, struct tcphdr *VAR_6)
{
 struct mptcb *VAR_7 = ((void*)0);
 struct mptcp_mpfail_opt *VAR_8 = (struct mptcp_mpfail_opt *)VAR_5;
 u_int32_t VAR_9 = 0;
 int VAR_10 = 0;





 if (VAR_6->th_seq != VAR_4->rcv_nxt) {
  VAR_3.tcps_invalid_opt++;
  return;
 }


 if ((VAR_6->th_flags != VAR_1) && (VAR_6->th_flags != VAR_2))
  return;

 if (VAR_8->mfail_len != sizeof (struct mptcp_mpfail_opt))
  return;

 VAR_7 = FUNC_3(VAR_4);

 VAR_7->mpt_flags |= VAR_0;
 VAR_7->mpt_dsn_at_csum_fail = FUNC_1(VAR_8->mfail_dsn);
 VAR_10 = FUNC_0(VAR_4->t_inpcb->inp_socket,
     VAR_7->mpt_dsn_at_csum_fail, &VAR_9);
 if (VAR_10 == 0) {
  VAR_7->mpt_ssn_at_csum_fail = VAR_9;
 }

 FUNC_2(VAR_4->t_inpcb->inp_socket);
}
