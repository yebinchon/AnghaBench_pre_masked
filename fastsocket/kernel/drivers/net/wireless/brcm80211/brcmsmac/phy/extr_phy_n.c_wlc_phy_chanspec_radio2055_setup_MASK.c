
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chan_info_nphy_2055 {int RF_pll_ref; int RF_rf_pll_mod0; int RF_rf_pll_mod1; int RF_vco_cap_tail; int RF_vco_cal1; int RF_vco_cal2; int RF_pll_lf_c1; int RF_pll_lf_r1; int RF_pll_lf_c2; int RF_lgbuf_cen_buf; int RF_lgen_tune1; int RF_lgen_tune2; int RF_core1_lgbuf_a_tune; int RF_core1_lgbuf_g_tune; int RF_core1_rxrf_reg1; int RF_core1_tx_pga_pad_tn; int RF_core1_tx_mx_bgtrim; int RF_core2_lgbuf_a_tune; int RF_core2_lgbuf_g_tune; int RF_core2_rxrf_reg1; int RF_core2_tx_pga_pad_tn; int RF_core2_tx_mx_bgtrim; } ;
struct brcms_phy {int dummy; } ;


 int FUNC_0 (struct brcms_phy*) ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (struct brcms_phy*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct brcms_phy *VAR_23,
     const struct chan_info_nphy_2055 *VAR_24)
{

 FUNC_2(VAR_23, VAR_16, VAR_24->RF_pll_ref);
 FUNC_2(VAR_23, VAR_17, VAR_24->RF_rf_pll_mod0);
 FUNC_2(VAR_23, VAR_18, VAR_24->RF_rf_pll_mod1);
 FUNC_2(VAR_23, VAR_22, VAR_24->RF_vco_cap_tail);

 FUNC_0(VAR_23);

 FUNC_2(VAR_23, VAR_19, VAR_24->RF_vco_cal1);
 FUNC_2(VAR_23, VAR_21, VAR_24->RF_vco_cal2);
 FUNC_2(VAR_23, VAR_13, VAR_24->RF_pll_lf_c1);
 FUNC_2(VAR_23, VAR_15, VAR_24->RF_pll_lf_r1);

 FUNC_0(VAR_23);

 FUNC_2(VAR_23, VAR_14, VAR_24->RF_pll_lf_c2);
 FUNC_2(VAR_23, VAR_10, VAR_24->RF_lgbuf_cen_buf);
 FUNC_2(VAR_23, VAR_11, VAR_24->RF_lgen_tune1);
 FUNC_2(VAR_23, VAR_12, VAR_24->RF_lgen_tune2);

 FUNC_0(VAR_23);

 FUNC_2(VAR_23, VAR_0,
   VAR_24->RF_core1_lgbuf_a_tune);
 FUNC_2(VAR_23, VAR_1,
   VAR_24->RF_core1_lgbuf_g_tune);
 FUNC_2(VAR_23, VAR_2, VAR_24->RF_core1_rxrf_reg1);
 FUNC_2(VAR_23, VAR_4,
   VAR_24->RF_core1_tx_pga_pad_tn);

 FUNC_0(VAR_23);

 FUNC_2(VAR_23, VAR_3,
   VAR_24->RF_core1_tx_mx_bgtrim);
 FUNC_2(VAR_23, VAR_5,
   VAR_24->RF_core2_lgbuf_a_tune);
 FUNC_2(VAR_23, VAR_6,
   VAR_24->RF_core2_lgbuf_g_tune);
 FUNC_2(VAR_23, VAR_7, VAR_24->RF_core2_rxrf_reg1);

 FUNC_0(VAR_23);

 FUNC_2(VAR_23, VAR_9,
   VAR_24->RF_core2_tx_pga_pad_tn);
 FUNC_2(VAR_23, VAR_8,
   VAR_24->RF_core2_tx_mx_bgtrim);

 FUNC_1(50);

 FUNC_2(VAR_23, VAR_20, 0x05);
 FUNC_2(VAR_23, VAR_20, 0x45);

 FUNC_0(VAR_23);

 FUNC_2(VAR_23, VAR_20, 0x65);

 FUNC_1(300);
}
