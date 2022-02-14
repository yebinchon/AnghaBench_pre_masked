
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct tcp_heuristics_head {int dummy; } ;
struct tcp_heuristic {scalar_t__ th_tfo_data_loss; scalar_t__ th_tfo_req_loss; scalar_t__ th_tfo_data_rst; scalar_t__ th_tfo_req_rst; scalar_t__ th_ecn_loss; scalar_t__ th_mptcp_loss; scalar_t__ th_ecn_droprst; scalar_t__ th_ecn_droprxmt; scalar_t__ th_ecn_synrst; void* th_ecn_backoff; void* th_mptcp_backoff; } ;
struct tcp_cache_key_src {int af; int ifp; } ;
struct TYPE_2__ {int tcps_ecn_fallback_synrst; int tcps_ecn_fallback_droprxmt; int tcps_ecn_fallback_droprst; int tcps_ecn_fallback_synloss; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (struct tcp_heuristic*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct tcp_heuristic* FUNC_2 (struct tcp_cache_key_src*,int,struct tcp_heuristics_head**) ;
 int FUNC_3 (struct tcp_heuristics_head*) ;
 scalar_t__ FUNC_4 (int ) ;
 void* VAR_21 ;
 TYPE_1__ VAR_22 ;

__attribute__((used)) static void FUNC_5(struct tcp_cache_key_src *VAR_23,
    u_int32_t VAR_24)
{
 struct tcp_heuristics_head *VAR_25;
 struct tcp_heuristic *VAR_26;

 VAR_26 = FUNC_2(VAR_23, 1, &VAR_25);
 if (VAR_26 == ((void*)0))
  return;


 if ((VAR_24 & VAR_10) && VAR_26->th_tfo_data_loss < VAR_14) {
  VAR_26->th_tfo_data_loss++;

  if (VAR_26->th_tfo_data_loss >= VAR_15)
   FUNC_1(VAR_26);
 }

 if ((VAR_24 & VAR_12) && VAR_26->th_tfo_req_loss < VAR_14) {
  VAR_26->th_tfo_req_loss++;

  if (VAR_26->th_tfo_req_loss >= VAR_15)
   FUNC_1(VAR_26);
 }

 if ((VAR_24 & VAR_11) && VAR_26->th_tfo_data_rst < VAR_14) {
  VAR_26->th_tfo_data_rst++;

  if (VAR_26->th_tfo_data_rst >= VAR_15)
   FUNC_1(VAR_26);
 }

 if ((VAR_24 & VAR_13) && VAR_26->th_tfo_req_rst < VAR_14) {
  VAR_26->th_tfo_req_rst++;

  if (VAR_26->th_tfo_req_rst >= VAR_15)
   FUNC_1(VAR_26);
 }

 if ((VAR_24 & VAR_5) && VAR_26->th_ecn_loss < VAR_14) {
  VAR_26->th_ecn_loss++;
  if (VAR_26->th_ecn_loss >= VAR_3) {
   VAR_22.tcps_ecn_fallback_synloss++;
   FUNC_0(VAR_23->ifp, VAR_23->af, VAR_18);
   VAR_26->th_ecn_backoff = VAR_21 +
       (FUNC_4(VAR_20) <<
       (VAR_26->th_ecn_loss - VAR_3));
  }
 }

 if ((VAR_24 & VAR_9) &&
     VAR_26->th_mptcp_loss < VAR_14) {
  VAR_26->th_mptcp_loss++;
  if (VAR_26->th_mptcp_loss >= VAR_4) {




   VAR_26->th_mptcp_backoff = VAR_21 +
       (FUNC_4(VAR_20) <<
       (VAR_26->th_mptcp_loss - VAR_4));
  }
 }

 if ((VAR_24 & VAR_6) &&
     VAR_26->th_ecn_droprst < VAR_14) {
  VAR_26->th_ecn_droprst++;
  if (VAR_26->th_ecn_droprst >= VAR_0) {
   VAR_22.tcps_ecn_fallback_droprst++;
   FUNC_0(VAR_23->ifp, VAR_23->af,
       VAR_16);
   VAR_26->th_ecn_backoff = VAR_21 +
       (FUNC_4(VAR_20) <<
       (VAR_26->th_ecn_droprst - VAR_0));

  }
 }

 if ((VAR_24 & VAR_7) &&
     VAR_26->th_ecn_droprxmt < VAR_14) {
  VAR_26->th_ecn_droprxmt++;
  if (VAR_26->th_ecn_droprxmt >= VAR_1) {
   VAR_22.tcps_ecn_fallback_droprxmt++;
   FUNC_0(VAR_23->ifp, VAR_23->af,
       VAR_17);
   VAR_26->th_ecn_backoff = VAR_21 +
       (FUNC_4(VAR_20) <<
       (VAR_26->th_ecn_droprxmt - VAR_1));
  }
 }
 if ((VAR_24 & VAR_8) &&
     VAR_26->th_ecn_synrst < VAR_14) {
  VAR_26->th_ecn_synrst++;
  if (VAR_26->th_ecn_synrst >= VAR_2) {
   VAR_22.tcps_ecn_fallback_synrst++;
   FUNC_0(VAR_23->ifp, VAR_23->af,
       VAR_19);
   VAR_26->th_ecn_backoff = VAR_21 +
       (FUNC_4(VAR_20) <<
       (VAR_26->th_ecn_synrst - VAR_2));
  }
 }
 FUNC_3(VAR_25);
}
