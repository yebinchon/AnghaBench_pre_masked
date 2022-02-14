
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcpcb {int dummy; } ;
struct tcp_heuristics_head {int dummy; } ;
struct tcp_heuristic {int th_mptcp_backoff; } ;
struct tcp_cache_key_src {int dummy; } ;
typedef int boolean_t ;
struct TYPE_6__ {int tcps_mptcp_heuristic_fallback; int tcps_mptcp_fp_heuristic_fallback; } ;
struct TYPE_5__ {TYPE_1__* mpt_mpte; } ;
struct TYPE_4__ {int mpte_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct tcpcb*,struct tcp_cache_key_src*) ;
 struct tcp_heuristic* FUNC_2 (struct tcp_cache_key_src*,int ,struct tcp_heuristics_head**) ;
 int FUNC_3 (struct tcp_heuristics_head*) ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_2__* FUNC_4 (struct tcpcb*) ;

boolean_t FUNC_5(struct tcpcb *VAR_6)
{
 struct tcp_cache_key_src VAR_7;
 struct tcp_heuristics_head *VAR_8 = ((void*)0);
 struct tcp_heuristic *VAR_9;

 if (VAR_3)
  return (VAR_2);

 FUNC_1(VAR_6, &VAR_7);


 VAR_9 = FUNC_2(&VAR_7, 0, &VAR_8);
 if (VAR_9 == ((void*)0))
  return (VAR_2);

 if (FUNC_0(VAR_9->th_mptcp_backoff, VAR_4))
  goto fallback;

 FUNC_3(VAR_8);

 return (VAR_2);

fallback:
 if (VAR_8)
  FUNC_3(VAR_8);

 if (FUNC_4(VAR_6)->mpt_mpte->mpte_flags & VAR_1)
  VAR_5.tcps_mptcp_fp_heuristic_fallback++;
 else
  VAR_5.tcps_mptcp_heuristic_fallback++;

 return (VAR_0);
}
