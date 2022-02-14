
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw_private_ops {int compute_pll_control; int ani_cache_ini_regs; int ani_control; int set_radar_params; int do_getnf; int restore_chainmask; int rfbus_done; int rfbus_req; int set_delta_slope; int mark_phy_inactive; int set_rfmode; int process_ini; int init_bb; int set_channel_regs; int set_rf_regs; int spur_mitigate_freq; int rf_set_freq; } ;
struct ath_hw {int nf_regs; } ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ath_hw*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct ath_hw_private_ops* FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (int ,int const*,int) ;

int FUNC_7(struct ath_hw *VAR_18)
{
 struct ath_hw_private_ops *VAR_19 = FUNC_5(VAR_18);
 static const u32 VAR_20[6] = {
  133,
  132,
  130,
  128,
  131,
  129
 };
 int VAR_21;

 VAR_21 = FUNC_2(VAR_18);
 if (VAR_21)
     return VAR_21;

 VAR_19->rf_set_freq = VAR_9;
 VAR_19->spur_mitigate_freq = VAR_15;

 VAR_19->set_rf_regs = VAR_13;
 VAR_19->set_channel_regs = VAR_10;
 VAR_19->init_bb = VAR_4;
 VAR_19->process_ini = VAR_6;
 VAR_19->set_rfmode = VAR_14;
 VAR_19->mark_phy_inactive = VAR_5;
 VAR_19->set_delta_slope = VAR_11;
 VAR_19->rfbus_req = VAR_8;
 VAR_19->rfbus_done = VAR_7;
 VAR_19->restore_chainmask = VAR_16;
 VAR_19->do_getnf = VAR_3;
 VAR_19->set_radar_params = VAR_12;

 VAR_19->ani_control = VAR_1;
 VAR_19->ani_cache_ini_regs = VAR_0;

 if (FUNC_0(VAR_18) || FUNC_1(VAR_18))
  VAR_19->compute_pll_control = VAR_17;
 else
  VAR_19->compute_pll_control = VAR_2;

 FUNC_3(VAR_18);
 FUNC_4(VAR_18);
 FUNC_6(VAR_18->nf_regs, VAR_20, sizeof(VAR_18->nf_regs));
 return 0;
}
