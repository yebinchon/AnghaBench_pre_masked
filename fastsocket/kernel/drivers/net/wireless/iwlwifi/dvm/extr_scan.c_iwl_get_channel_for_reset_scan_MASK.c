
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct iwl_scan_channel {int dsp_atten; int tx_gain; void* passive_dwell; void* active_dwell; int type; void* channel; } ;
struct iwl_priv {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_supported_band {int dummy; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (scalar_t__) ;
 struct ieee80211_supported_band* FUNC_2 (struct iwl_priv*,int) ;
 scalar_t__ FUNC_3 (struct iwl_priv*,int) ;

__attribute__((used)) static int FUNC_4(struct iwl_priv *VAR_3,
       struct ieee80211_vif *VAR_4,
       enum ieee80211_band VAR_5,
       struct iwl_scan_channel *VAR_6)
{
 const struct ieee80211_supported_band *VAR_7;
 u16 VAR_8;

 VAR_7 = FUNC_2(VAR_3, VAR_5);
 if (!VAR_7) {
  FUNC_0(VAR_3, "invalid band\n");
  return 0;
 }

 VAR_8 = FUNC_3(VAR_3, VAR_5);
 if (VAR_8) {
  VAR_6->channel = FUNC_1(VAR_8);
  VAR_6->type = VAR_2;
  VAR_6->active_dwell =
   FUNC_1(VAR_1);
  VAR_6->passive_dwell =
   FUNC_1(VAR_1);

  VAR_6->dsp_atten = 110;
  if (VAR_5 == VAR_0)
   VAR_6->tx_gain = ((1 << 5) | (3 << 3)) | 3;
  else
   VAR_6->tx_gain = ((1 << 5) | (5 << 3));
  return 1;
 }

 FUNC_0(VAR_3, "no valid channel found\n");
 return 0;
}
