
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct ifnet_stats_per_flow {int srtt; int rttupdated; int rttvar; scalar_t__ connreset; scalar_t__ sack_recovery_episodes; scalar_t__ dsack_recvd; scalar_t__ dsack_sent; scalar_t__ pawsdrop; scalar_t__ reordered_pkts; scalar_t__ rcvoopack; scalar_t__ rxmitpkts; scalar_t__ rxpackets; scalar_t__ txpackets; } ;
struct if_tcp_ecn_perf_stat {int rtt_avg; int rtt_var; int rst_drop; int sack_episodes; int total_reorderpkts; int total_oopkts; int total_rxmitpkts; int total_rxpkts; int total_txpkts; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(struct ifnet_stats_per_flow *VAR_2,
    struct if_tcp_ecn_perf_stat *VAR_3)
{
 u_int64_t VAR_4, VAR_5;
 VAR_3->total_txpkts += VAR_2->txpackets;
 VAR_3->total_rxpkts += VAR_2->rxpackets;
 VAR_3->total_rxmitpkts += VAR_2->rxmitpkts;
 VAR_3->total_oopkts += VAR_2->rcvoopack;
 VAR_3->total_reorderpkts += (VAR_2->reordered_pkts +
     VAR_2->pawsdrop + VAR_2->dsack_sent + VAR_2->dsack_recvd);


 VAR_4 = VAR_2->srtt >> VAR_1;
 if (VAR_4 > 0 && VAR_2->rttupdated >= 16) {
  if (VAR_3->rtt_avg == 0) {
   VAR_3->rtt_avg = VAR_4;
  } else {
   VAR_5 = VAR_3->rtt_avg;
   VAR_3->rtt_avg = ((VAR_5 << 4) - VAR_5 + VAR_4) >> 4;
  }
 }


 VAR_4 = VAR_2->rttvar >> VAR_0;
 if (VAR_4 > 0 && VAR_2->rttupdated >= 16) {
  if (VAR_3->rtt_var == 0) {
   VAR_3->rtt_var = VAR_4;
  } else {
   VAR_5 = VAR_3->rtt_var;
   VAR_3->rtt_var =
       ((VAR_5 << 4) - VAR_5 + VAR_4) >> 4;
  }
 }


 VAR_3->sack_episodes += VAR_2->sack_recovery_episodes;
 if (VAR_2->connreset)
  VAR_3->rst_drop++;
}
