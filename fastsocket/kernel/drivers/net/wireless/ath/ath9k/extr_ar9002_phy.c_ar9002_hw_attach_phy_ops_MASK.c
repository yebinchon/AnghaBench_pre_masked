
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_private_ops {int do_getnf; int compute_pll_control; int olc_init; int spur_mitigate_freq; int rf_set_freq; int * set_rf_regs; } ;
struct ath_hw_ops {int spectral_scan_wait; int spectral_scan_trigger; int spectral_scan_config; int antdiv_comb_conf_set; int antdiv_comb_conf_get; } ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_hw*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ath_hw_ops* FUNC_1 (struct ath_hw*) ;
 struct ath_hw_private_ops* FUNC_2 (struct ath_hw*) ;

void FUNC_3(struct ath_hw *VAR_10)
{
 struct ath_hw_private_ops *VAR_11 = FUNC_2(VAR_10);
 struct ath_hw_ops *VAR_12 = FUNC_1(VAR_10);

 VAR_11->set_rf_regs = ((void*)0);
 VAR_11->rf_set_freq = VAR_4;
 VAR_11->spur_mitigate_freq = VAR_8;
 VAR_11->olc_init = VAR_9;
 VAR_11->compute_pll_control = VAR_2;
 VAR_11->do_getnf = VAR_3;

 VAR_12->antdiv_comb_conf_get = VAR_0;
 VAR_12->antdiv_comb_conf_set = VAR_1;
 VAR_12->spectral_scan_config = VAR_5;
 VAR_12->spectral_scan_trigger = VAR_6;
 VAR_12->spectral_scan_wait = VAR_7;

 FUNC_0(VAR_10);
}
