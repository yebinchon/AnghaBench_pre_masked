
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct tcphdr {int dummy; } ;
struct TYPE_2__ {int mpt_dfin; } ;
struct tcpcb {int t_mpflags; TYPE_1__ t_rcv_map; } ;
struct mptcp_dss_copt {scalar_t__ mdss_subtype; int mdss_flags; } ;
struct mptcb {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct tcpcb*,struct tcphdr*) ;
 struct mptcb* FUNC_1 (struct tcpcb*) ;

__attribute__((used)) static void
FUNC_2(struct tcpcb *VAR_4, u_char *VAR_5, struct tcphdr *VAR_6, int VAR_7)
{
#pragma unused(optlen)
 struct mptcb *VAR_8 = FUNC_1(VAR_4);

 if (!VAR_8)
  return;


 if ((VAR_4->t_mpflags & VAR_2) ||
     (VAR_4->t_mpflags & VAR_3)) {
  struct mptcp_dss_copt *VAR_9 = (struct mptcp_dss_copt *)VAR_5;

  if (VAR_9->mdss_subtype == VAR_1) {
   if (VAR_9->mdss_flags & VAR_0)
    VAR_4->t_rcv_map.mpt_dfin = 1;

   FUNC_0(VAR_5, VAR_4, VAR_6);
  }
 }
}
