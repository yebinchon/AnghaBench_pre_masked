
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ieee80211_hw {int wiphy; } ;
struct ath_regulatory {int alpha2; } ;
struct ath_hw {int dummy; } ;
struct ath_common {struct ath_regulatory regulatory; } ;
struct TYPE_2__ {int default_trigger; } ;
struct ath9k_htc_priv {struct ath_hw* ah; int data_vo_ep; int data_vi_ep; int data_bk_ep; int data_be_ep; int mgmt_ep; int uapsd_ep; int cab_ep; int beacon_ep; int wmi_cmd_ep; struct ieee80211_hw* hw; TYPE_1__ led_cdev; } ;
typedef int hw_name ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath_hw*) ;
 int VAR_2 ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*,char*,int) ;
 int FUNC_6 (struct ath9k_htc_priv*) ;
 int FUNC_7 (struct ath9k_htc_priv*) ;
 int FUNC_8 (struct ath9k_htc_priv*,int ,char*,int ) ;
 int VAR_3 ;
 int FUNC_9 (struct ath9k_htc_priv*) ;
 int FUNC_10 (struct ath9k_htc_priv*) ;
 int FUNC_11 (struct ath9k_htc_priv*,struct ieee80211_hw*) ;
 int FUNC_12 (struct ath9k_htc_priv*) ;
 int FUNC_13 (struct ath9k_htc_priv*) ;
 int FUNC_14 (struct ath9k_htc_priv*) ;
 int FUNC_15 (struct ath_common*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_16 (struct ath_common*,char*) ;
 int FUNC_17 (struct ath_regulatory*) ;
 int FUNC_18 (struct ath_regulatory*,int ,int ) ;
 int FUNC_19 (struct ieee80211_hw*,int ,int ,int ) ;
 int FUNC_20 (struct ieee80211_hw*) ;
 int FUNC_21 (struct ieee80211_hw*) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_24(struct ath9k_htc_priv *VAR_4,
        u16 VAR_5, char *VAR_6, u32 VAR_7)
{
 struct ieee80211_hw *VAR_8 = VAR_4->hw;
 struct ath_common *VAR_9;
 struct ath_hw *VAR_10;
 int VAR_11 = 0;
 struct ath_regulatory *VAR_12;
 char VAR_13[64];


 VAR_11 = FUNC_8(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_11 != 0)
  goto err_init;

 VAR_10 = VAR_4->ah;
 VAR_9 = FUNC_3(VAR_10);
 FUNC_11(VAR_4, VAR_8);

 VAR_11 = FUNC_6(VAR_4);
 if (VAR_11 != 0)
  goto err_fw;


 VAR_11 = FUNC_18(&VAR_9->regulatory, VAR_4->hw->wiphy,
         VAR_3);
 if (VAR_11)
  goto err_regd;

 VAR_12 = &VAR_9->regulatory;


 VAR_11 = FUNC_14(VAR_4);
 if (VAR_11 != 0)
  goto err_tx;


 VAR_11 = FUNC_10(VAR_4);
 if (VAR_11 != 0)
  goto err_rx;

 FUNC_4(VAR_4->ah);
 VAR_11 = FUNC_20(VAR_8);
 if (VAR_11)
  goto err_register;


 if (!FUNC_17(VAR_12)) {
  VAR_11 = FUNC_22(VAR_8->wiphy, VAR_12->alpha2);
  if (VAR_11)
   goto err_world;
 }

 VAR_11 = FUNC_2(VAR_4->ah);
 if (VAR_11) {
  FUNC_16(VAR_9, "Unable to create debugfs files\n");
  goto err_world;
 }

 FUNC_15(VAR_9, VAR_0,
  "WMI:%d, BCN:%d, CAB:%d, UAPSD:%d, MGMT:%d, BE:%d, BK:%d, VI:%d, VO:%d\n",
  VAR_4->wmi_cmd_ep,
  VAR_4->beacon_ep,
  VAR_4->cab_ep,
  VAR_4->uapsd_ep,
  VAR_4->mgmt_ep,
  VAR_4->data_be_ep,
  VAR_4->data_bk_ep,
  VAR_4->data_vi_ep,
  VAR_4->data_vo_ep);

 FUNC_5(VAR_4->ah, VAR_13, sizeof(VAR_13));
 FUNC_23(VAR_8->wiphy, "%s\n", VAR_13);

 FUNC_7(VAR_4);
 FUNC_12(VAR_4);

 return 0;

err_world:
 FUNC_21(VAR_8);
err_register:
 FUNC_9(VAR_4);
err_rx:
 FUNC_13(VAR_4);
err_tx:

err_regd:

err_fw:
 FUNC_1(VAR_4);
err_init:
 return VAR_11;
}
