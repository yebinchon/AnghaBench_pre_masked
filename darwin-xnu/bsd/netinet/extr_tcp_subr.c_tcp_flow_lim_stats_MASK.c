
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
struct ifnet_stats_per_flow {int bw_sndbw_max; int bw_rcvbw_max; int srtt; int rttupdated; int rttvar; scalar_t__ rttmin; scalar_t__ bk_txpackets; scalar_t__ conntimeout; scalar_t__ rcvoopack; scalar_t__ rxmitpkts; scalar_t__ rxpackets; scalar_t__ txpackets; } ;
struct if_lim_perf_stat {int lim_rtt_average; int lim_rtt_variance; scalar_t__ lim_rtt_min; int lim_bk_txpkts; int lim_conn_timeouts; int lim_conn_attempts; void* lim_dl_max_bandwidth; void* lim_ul_max_bandwidth; int lim_total_oopkts; int lim_total_retxpkts; int lim_total_rxpkts; int lim_total_txpkts; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_2(struct ifnet_stats_per_flow *VAR_2,
    struct if_lim_perf_stat *VAR_3)
{
 u_int64_t VAR_4, VAR_5;

 VAR_3->lim_total_txpkts += VAR_2->txpackets;
 VAR_3->lim_total_rxpkts += VAR_2->rxpackets;
 VAR_3->lim_total_retxpkts += VAR_2->rxmitpkts;
 VAR_3->lim_total_oopkts += VAR_2->rcvoopack;

 if (VAR_2->bw_sndbw_max > 0) {

  VAR_2->bw_sndbw_max *= 8000;
  VAR_3->lim_ul_max_bandwidth = FUNC_0(VAR_3->lim_ul_max_bandwidth,
      VAR_2->bw_sndbw_max);
 }

 if (VAR_2->bw_rcvbw_max > 0) {

  VAR_2->bw_rcvbw_max *= 8000;
  VAR_3->lim_dl_max_bandwidth = FUNC_0(VAR_3->lim_dl_max_bandwidth,
      VAR_2->bw_rcvbw_max);
 }


 VAR_4 = VAR_2->srtt >> VAR_1;
 if (VAR_4 > 0 && VAR_2->rttupdated >= 16) {
  if (VAR_3->lim_rtt_average == 0) {
   VAR_3->lim_rtt_average = VAR_4;
  } else {
   VAR_5 = VAR_3->lim_rtt_average;
   VAR_3->lim_rtt_average =
       ((VAR_5 << 4) - VAR_5 + VAR_4) >> 4;
  }
 }


 VAR_4 = VAR_2->rttvar >> VAR_0;
 if (VAR_4 > 0 && VAR_2->rttupdated >= 16) {
  if (VAR_3->lim_rtt_variance == 0) {
   VAR_3->lim_rtt_variance = VAR_4;
  } else {
   VAR_5 = VAR_3->lim_rtt_variance;
   VAR_3->lim_rtt_variance =
       ((VAR_5 << 4) - VAR_5 + VAR_4) >> 4;
  }
 }

 if (VAR_3->lim_rtt_min == 0) {
  VAR_3->lim_rtt_min = VAR_2->rttmin;
 } else {
  VAR_3->lim_rtt_min = FUNC_1(VAR_3->lim_rtt_min, VAR_2->rttmin);
 }


 VAR_3->lim_conn_attempts++;
 if (VAR_2->conntimeout)
  VAR_3->lim_conn_timeouts++;


 VAR_3->lim_bk_txpkts += VAR_2->bk_txpackets;

}
