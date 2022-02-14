
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u_long ;
struct smt_config {int build_ring_map; int lct_extended; int lct_long; int lct_medium; int lct_short; int mac_d_max; void* rmt_dup_mac_behavior; int rmt_t_poll; int rmt_t_announce; int rmt_t_jam; int rmt_t_direct; int rmt_t_stuck; int rmt_t_non_op; int ecm_check_poll; int ecm_test_done; int ecm_td_min; int ecm_in_max; int ecm_i_max; int pcm_ns_max; int pcm_t_next_9; int pcm_lc_extended; int pcm_lc_long; int pcm_lc_medium; int pcm_lc_short; int pcm_tl_min; int pcm_t_out; int pcm_c_min; int pcm_tb_max; int pcm_tb_min; int numphys; int sas; scalar_t__ attach_s; } ;
struct TYPE_10__ {scalar_t__ pci_fix_value; } ;
struct TYPE_9__ {int timer_count; int * sba_reply_pend; void* local_sba_active; void* raf_act_timer_poll; void* sync_bw_available; } ;
struct TYPE_8__ {int fddiESSMinSegmentSize; void* fddiESSSynchTxMode; int fddiESSCategory; void* fddiESSMaxTNeg; scalar_t__ fddiESSOverhead; scalar_t__ fddiESSPayload; } ;
struct TYPE_7__ {void** last_tok_time; } ;
struct TYPE_6__ {int smc_version; } ;
struct s_smc {TYPE_5__ hw; TYPE_4__ ess; TYPE_3__ mib; struct smt_config s; TYPE_2__ sm; TYPE_1__ os; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 void* VAR_27 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 void* FUNC_1 () ;
 int FUNC_2 (struct s_smc*,int) ;
 int FUNC_3 (struct s_smc*,int) ;

void FUNC_4(struct s_smc *VAR_33, int VAR_34)
{
 struct smt_config *VAR_35 ;
 int VAR_36 ;
 u_long VAR_37;


 FUNC_2(VAR_33,VAR_34) ;

 VAR_33->os.smc_version = VAR_31 ;
 VAR_37 = FUNC_1();
 for( VAR_36 = 0; VAR_36 < VAR_28; VAR_36++ )
  VAR_33->sm.last_tok_time[VAR_36] = VAR_37 ;
 VAR_35 = &VAR_33->s ;
 VAR_35->attach_s = 0 ;
 VAR_35->build_ring_map = 1 ;
 VAR_35->sas = VAR_32 ;
 VAR_35->numphys = VAR_29 ;
 VAR_35->pcm_tb_min = VAR_16 ;
 VAR_35->pcm_tb_max = VAR_15 ;
 VAR_35->pcm_c_min = VAR_1 ;
 VAR_35->pcm_t_out = VAR_25 ;
 VAR_35->pcm_tl_min = VAR_19 ;
 VAR_35->pcm_lc_short = VAR_12 ;
 VAR_35->pcm_lc_medium = VAR_11 ;
 VAR_35->pcm_lc_long = VAR_10 ;
 VAR_35->pcm_lc_extended = VAR_9 ;
 VAR_35->pcm_t_next_9 = VAR_23 ;
 VAR_35->pcm_ns_max = VAR_13 ;
 VAR_35->ecm_i_max = VAR_4 ;
 VAR_35->ecm_in_max = VAR_3 ;
 VAR_35->ecm_td_min = VAR_17 ;
 VAR_35->ecm_test_done = VAR_18 ;
 VAR_35->ecm_check_poll = VAR_0 ;
 VAR_35->rmt_t_non_op = VAR_24 ;
 VAR_35->rmt_t_stuck = VAR_26 ;
 VAR_35->rmt_t_direct = VAR_21 ;
 VAR_35->rmt_t_jam = VAR_22 ;
 VAR_35->rmt_t_announce = VAR_20 ;
 VAR_35->rmt_t_poll = VAR_14 ;
        VAR_35->rmt_dup_mac_behavior = VAR_27 ;
 VAR_35->mac_d_max = VAR_2 ;

 VAR_35->lct_short = VAR_8 ;
 VAR_35->lct_medium = VAR_7 ;
 VAR_35->lct_long = VAR_6 ;
 VAR_35->lct_extended = VAR_5 ;
}
