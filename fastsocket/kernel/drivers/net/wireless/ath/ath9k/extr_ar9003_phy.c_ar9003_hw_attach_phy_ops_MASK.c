
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw_private_ops {int fast_chan_change; int set_radar_params; int ani_cache_ini_regs; int do_getnf; int ani_control; int rfbus_done; int rfbus_req; int set_delta_slope; int mark_phy_inactive; int set_rfmode; int process_ini; int init_bb; int set_channel_regs; int compute_pll_control; int spur_mitigate_freq; int rf_set_freq; } ;
struct ath_hw_ops {int spectral_scan_wait; int spectral_scan_trigger; int spectral_scan_config; int antctrl_shared_chain_lnadiv; int antdiv_comb_conf_set; int antdiv_comb_conf_get; } ;
struct ath_hw {int nf_regs; } ;
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
 int FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct ath_hw_ops* FUNC_2 (struct ath_hw*) ;
 struct ath_hw_private_ops* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (int ,int const*,int) ;

void FUNC_5(struct ath_hw *VAR_22)
{
 struct ath_hw_private_ops *VAR_23 = FUNC_3(VAR_22);
 struct ath_hw_ops *VAR_24 = FUNC_2(VAR_22);
 static const u32 VAR_25[6] = {
  133,
  132,
  131,
  130,
  129,
  128,
 };

 VAR_23->rf_set_freq = VAR_13;
 VAR_23->spur_mitigate_freq = VAR_21;
 VAR_23->compute_pll_control = VAR_5;
 VAR_23->set_channel_regs = VAR_14;
 VAR_23->init_bb = VAR_8;
 VAR_23->process_ini = VAR_10;
 VAR_23->set_rfmode = VAR_17;
 VAR_23->mark_phy_inactive = VAR_9;
 VAR_23->set_delta_slope = VAR_15;
 VAR_23->rfbus_req = VAR_12;
 VAR_23->rfbus_done = VAR_11;
 VAR_23->ani_control = VAR_1;
 VAR_23->do_getnf = VAR_6;
 VAR_23->ani_cache_ini_regs = VAR_0;
 VAR_23->set_radar_params = VAR_16;
 VAR_23->fast_chan_change = VAR_7;

 VAR_24->antdiv_comb_conf_get = VAR_3;
 VAR_24->antdiv_comb_conf_set = VAR_4;
 VAR_24->antctrl_shared_chain_lnadiv = VAR_2;
 VAR_24->spectral_scan_config = VAR_18;
 VAR_24->spectral_scan_trigger = VAR_19;
 VAR_24->spectral_scan_wait = VAR_20;

 FUNC_0(VAR_22);
 FUNC_1(VAR_22);
 FUNC_4(VAR_22->nf_regs, VAR_25, sizeof(VAR_22->nf_regs));
}
