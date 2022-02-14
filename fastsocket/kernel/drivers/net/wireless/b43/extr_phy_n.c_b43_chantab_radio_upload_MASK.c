
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int dummy; } ;
struct b43_nphy_channeltab_entry_rev2 {int radio_c2_tx_mxbgtrim; int radio_c2_tx_pgapadtn; int radio_c2_rx_rfr1; int radio_c2_lgbuf_gtune; int radio_c2_lgbuf_atune; int radio_c1_tx_mxbgtrim; int radio_c1_tx_pgapadtn; int radio_c1_rx_rfr1; int radio_c1_lgbuf_gtune; int radio_c1_lgbuf_atune; int radio_lgen_tune2; int radio_lgen_tune1; int radio_lgbuf_cenbuf; int radio_pll_lfc2; int radio_pll_lfr1; int radio_pll_lfc1; int radio_vco_cal2; int radio_vco_cal1; int radio_vco_captail; int radio_rf_pllmod1; int radio_rf_pllmod0; int radio_pll_ref; } ;


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
 int FUNC_0 (struct b43_wldev*,int ,int ) ;
 int FUNC_1 (struct b43_wldev*,int ) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_23,
    const struct b43_nphy_channeltab_entry_rev2 *VAR_24)
{
 FUNC_0(VAR_23, VAR_16, VAR_24->radio_pll_ref);
 FUNC_0(VAR_23, VAR_17, VAR_24->radio_rf_pllmod0);
 FUNC_0(VAR_23, VAR_18, VAR_24->radio_rf_pllmod1);
 FUNC_0(VAR_23, VAR_21, VAR_24->radio_vco_captail);
 FUNC_1(VAR_23, VAR_22);

 FUNC_0(VAR_23, VAR_19, VAR_24->radio_vco_cal1);
 FUNC_0(VAR_23, VAR_20, VAR_24->radio_vco_cal2);
 FUNC_0(VAR_23, VAR_13, VAR_24->radio_pll_lfc1);
 FUNC_0(VAR_23, VAR_15, VAR_24->radio_pll_lfr1);
 FUNC_1(VAR_23, VAR_22);

 FUNC_0(VAR_23, VAR_14, VAR_24->radio_pll_lfc2);
 FUNC_0(VAR_23, VAR_10, VAR_24->radio_lgbuf_cenbuf);
 FUNC_0(VAR_23, VAR_11, VAR_24->radio_lgen_tune1);
 FUNC_0(VAR_23, VAR_12, VAR_24->radio_lgen_tune2);
 FUNC_1(VAR_23, VAR_22);

 FUNC_0(VAR_23, VAR_0, VAR_24->radio_c1_lgbuf_atune);
 FUNC_0(VAR_23, VAR_1, VAR_24->radio_c1_lgbuf_gtune);
 FUNC_0(VAR_23, VAR_2, VAR_24->radio_c1_rx_rfr1);
 FUNC_0(VAR_23, VAR_4, VAR_24->radio_c1_tx_pgapadtn);
 FUNC_1(VAR_23, VAR_22);

 FUNC_0(VAR_23, VAR_3, VAR_24->radio_c1_tx_mxbgtrim);
 FUNC_0(VAR_23, VAR_5, VAR_24->radio_c2_lgbuf_atune);
 FUNC_0(VAR_23, VAR_6, VAR_24->radio_c2_lgbuf_gtune);
 FUNC_0(VAR_23, VAR_7, VAR_24->radio_c2_rx_rfr1);
 FUNC_1(VAR_23, VAR_22);

 FUNC_0(VAR_23, VAR_9, VAR_24->radio_c2_tx_pgapadtn);
 FUNC_0(VAR_23, VAR_8, VAR_24->radio_c2_tx_mxbgtrim);
}
