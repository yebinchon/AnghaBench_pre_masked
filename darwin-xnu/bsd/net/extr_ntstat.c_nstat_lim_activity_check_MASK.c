
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_lim_perf_stat {scalar_t__ lim_total_txpkts; int lim_total_rxpkts; int lim_conn_attempts; int lim_packet_loss_percent; int lim_total_retxpkts; int lim_packet_ooo_percent; int lim_total_oopkts; int lim_conn_timeout_percent; int lim_conn_timeouts; scalar_t__ lim_dl_max_bandwidth; int lim_dl_detected; scalar_t__ lim_ul_max_bandwidth; scalar_t__ lim_rtt_min; int lim_ul_detected; scalar_t__ lim_bk_txpkts; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static boolean_t
FUNC_0(struct if_lim_perf_stat *VAR_9)
{

 if (VAR_9->lim_total_txpkts < VAR_8 ||
     VAR_9->lim_total_rxpkts < VAR_7 ||
     VAR_9->lim_conn_attempts == 0)
  return (VAR_0);





 VAR_9->lim_packet_loss_percent = ((VAR_9->lim_total_retxpkts << 10) /
     VAR_9->lim_total_txpkts) * 100;

 VAR_9->lim_packet_ooo_percent = ((VAR_9->lim_total_oopkts << 10) /
     VAR_9->lim_total_rxpkts) * 100;

 VAR_9->lim_conn_timeout_percent = ((VAR_9->lim_conn_timeouts << 10) /
     VAR_9->lim_conn_attempts) * 100;
 if (VAR_9->lim_dl_max_bandwidth > 0 &&
     VAR_9->lim_dl_max_bandwidth <= VAR_2)
  VAR_9->lim_dl_detected = 1;

 if ((VAR_9->lim_ul_max_bandwidth > 0 &&
     VAR_9->lim_ul_max_bandwidth <= VAR_4) ||
     VAR_9->lim_rtt_min >= VAR_5)
  VAR_9->lim_ul_detected = 1;

 if (VAR_9->lim_conn_attempts > 20 &&
     VAR_9->lim_conn_timeout_percent >=
     VAR_1)
  VAR_9->lim_ul_detected = 1;





 if (VAR_9->lim_bk_txpkts >= VAR_8 &&
     VAR_9->lim_packet_loss_percent >=
     VAR_3)
  VAR_9->lim_ul_detected = 1;
 return (VAR_6);
}
