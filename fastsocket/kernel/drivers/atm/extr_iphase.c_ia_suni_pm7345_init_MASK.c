
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int suni_ds3_frm_stat; int suni_ds3_frm_intr_enbl; int suni_ds3_frm_cfg; int suni_ds3_tran_cfg; int suni_config; int suni_splr_cfg; int suni_splt_cfg; int suni_e3_frm_fram_intr_ind_stat; int suni_e3_frm_fram_options; int suni_e3_frm_maint_options; int suni_e3_frm_fram_intr_enbl; int suni_e3_frm_maint_intr_enbl; int suni_e3_tran_stat_diag_options; int suni_e3_tran_fram_options; int suni_intr_enbl; int suni_rxcp_ctrl; int suni_rxcp_fctrl; int suni_rxcp_idle_pat_h4; int suni_rxcp_idle_mask_h1; int suni_rxcp_idle_mask_h2; int suni_rxcp_idle_mask_h3; int suni_rxcp_idle_mask_h4; int suni_rxcp_cell_pat_h4; int suni_rxcp_cell_mask_h1; int suni_rxcp_cell_mask_h2; int suni_rxcp_cell_mask_h3; int suni_rxcp_cell_mask_h4; int suni_txcp_ctrl; int suni_txcp_intr_en_sts; int suni_txcp_idle_pat_h5; int suni_rxcp_intr_en_sts; scalar_t__ suni_rxcp_cell_pat_h3; scalar_t__ suni_rxcp_cell_pat_h2; scalar_t__ suni_rxcp_cell_pat_h1; scalar_t__ suni_rxcp_idle_pat_h3; scalar_t__ suni_rxcp_idle_pat_h2; scalar_t__ suni_rxcp_idle_pat_h1; scalar_t__ suni_master_test; scalar_t__ suni_id_reset; } ;
typedef TYPE_1__ suni_pm7345_t ;
struct TYPE_5__ {int phy_type; void* carrier_detect; scalar_t__ phy; } ;
typedef TYPE_2__ IADEV ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1 (IADEV *VAR_9)
{
   volatile suni_pm7345_t *VAR_10 = (suni_pm7345_t *)VAR_9->phy;
   if (VAR_9->phy_type & VAR_0)
   {
      VAR_9->carrier_detect =
          FUNC_0(!(VAR_10->suni_ds3_frm_stat & VAR_1));
      VAR_10->suni_ds3_frm_intr_enbl = 0x17;
      VAR_10->suni_ds3_frm_cfg = 1;
      VAR_10->suni_ds3_tran_cfg = 1;
      VAR_10->suni_config = 0;
      VAR_10->suni_splr_cfg = 0;
      VAR_10->suni_splt_cfg = 0;
   }
   else
   {
      VAR_9->carrier_detect =
          FUNC_0(!(VAR_10->suni_e3_frm_fram_intr_ind_stat & VAR_2));
      VAR_10->suni_e3_frm_fram_options = 0x4;
      VAR_10->suni_e3_frm_maint_options = 0x20;
      VAR_10->suni_e3_frm_fram_intr_enbl = 0x1d;
      VAR_10->suni_e3_frm_maint_intr_enbl = 0x30;
      VAR_10->suni_e3_tran_stat_diag_options = 0x0;
      VAR_10->suni_e3_tran_fram_options = 0x1;
      VAR_10->suni_config = VAR_6;
      VAR_10->suni_splr_cfg = 0x41;
      VAR_10->suni_splt_cfg = 0x41;
   }



   VAR_10->suni_intr_enbl = 0x28;




   VAR_10->suni_id_reset = 0;




   VAR_10->suni_master_test = 0;

   VAR_10->suni_rxcp_ctrl = 0x2c;
   VAR_10->suni_rxcp_fctrl = 0x81;

   VAR_10->suni_rxcp_idle_pat_h1 =
    VAR_10->suni_rxcp_idle_pat_h2 =
    VAR_10->suni_rxcp_idle_pat_h3 = 0;
   VAR_10->suni_rxcp_idle_pat_h4 = 1;

   VAR_10->suni_rxcp_idle_mask_h1 = 0xff;
   VAR_10->suni_rxcp_idle_mask_h2 = 0xff;
   VAR_10->suni_rxcp_idle_mask_h3 = 0xff;
   VAR_10->suni_rxcp_idle_mask_h4 = 0xfe;

   VAR_10->suni_rxcp_cell_pat_h1 =
    VAR_10->suni_rxcp_cell_pat_h2 =
    VAR_10->suni_rxcp_cell_pat_h3 = 0;
   VAR_10->suni_rxcp_cell_pat_h4 = 1;

   VAR_10->suni_rxcp_cell_mask_h1 =
    VAR_10->suni_rxcp_cell_mask_h2 =
    VAR_10->suni_rxcp_cell_mask_h3 =
    VAR_10->suni_rxcp_cell_mask_h4 = 0xff;

   VAR_10->suni_txcp_ctrl = 0xa4;
   VAR_10->suni_txcp_intr_en_sts = 0x10;
   VAR_10->suni_txcp_idle_pat_h5 = 0x55;

   VAR_10->suni_config &= ~(VAR_7 |
                                 VAR_4 |
                                 VAR_5 |
                                  VAR_8);



   return;
}
