
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* hi; void* lo; } ;
struct client_init_tx_data {scalar_t__ state; TYPE_1__ tx_bd_page_base; int tss_leading_client_id; int tx_sb_index_number; int tx_status_block_id; int tunnel_non_lso_pcsum_location; void* force_default_pri_flg; void* anti_spoofing_flg; void* tx_switching_flg; void* default_vlan_flg; int default_vlan; void* enforce_security_flg; } ;
struct bnx2x_txq_setup_params {int dscr_map; int tss_leading_cl_id; int sb_cq_index; int fw_sb_id; int default_vlan; } ;
struct bnx2x_queue_sp_obj {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_5(struct bnx2x_queue_sp_obj *VAR_8,
    struct bnx2x_txq_setup_params *VAR_9,
    struct client_init_tx_data *VAR_10,
    unsigned long *VAR_11)
{
 VAR_10->enforce_security_flg =
  FUNC_4(VAR_4, VAR_11);
 VAR_10->default_vlan =
  FUNC_2(VAR_9->default_vlan);
 VAR_10->default_vlan_flg =
  FUNC_4(VAR_1, VAR_11);
 VAR_10->tx_switching_flg =
  FUNC_4(VAR_5, VAR_11);
 VAR_10->anti_spoofing_flg =
  FUNC_4(VAR_0, VAR_11);
 VAR_10->force_default_pri_flg =
  FUNC_4(VAR_2, VAR_11);

 VAR_10->tunnel_non_lso_pcsum_location =
  FUNC_4(VAR_3, VAR_11) ? VAR_7 :
          VAR_6;

 VAR_10->tx_status_block_id = VAR_9->fw_sb_id;
 VAR_10->tx_sb_index_number = VAR_9->sb_cq_index;
 VAR_10->tss_leading_client_id = VAR_9->tss_leading_cl_id;

 VAR_10->tx_bd_page_base.lo =
  FUNC_3(FUNC_1(VAR_9->dscr_map));
 VAR_10->tx_bd_page_base.hi =
  FUNC_3(FUNC_0(VAR_9->dscr_map));


 VAR_10->state = 0;
}
