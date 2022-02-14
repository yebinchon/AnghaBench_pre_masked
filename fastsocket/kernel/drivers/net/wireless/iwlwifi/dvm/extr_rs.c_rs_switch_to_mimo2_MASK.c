
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct iwl_station_priv {struct iwl_rxon_context* ctx; } ;
struct iwl_scale_tbl_info {int is_ht40; int current_rate; int max_search; scalar_t__ action; int is_dup; int lq_type; } ;
struct iwl_rxon_context {int dummy; } ;
struct TYPE_4__ {int tx_chains_num; } ;
struct iwl_priv {TYPE_2__ hw_params; } ;
struct iwl_lq_sta {int is_green; int active_mimo2_rate; int is_dup; } ;
struct TYPE_3__ {int ht_supported; } ;
struct ieee80211_sta {scalar_t__ smps_mode; TYPE_1__ ht_cap; scalar_t__ drv_priv; } ;
struct ieee80211_conf {int dummy; } ;
typedef int s8 ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ieee80211_conf*) ;
 scalar_t__ FUNC_2 (struct iwl_priv*,struct iwl_rxon_context*,struct ieee80211_sta*) ;
 int FUNC_3 (struct iwl_priv*,struct iwl_scale_tbl_info*,int,int) ;
 int FUNC_4 (struct iwl_priv*,struct iwl_lq_sta*,struct iwl_scale_tbl_info*,int,int) ;
 int FUNC_5 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static int FUNC_6(struct iwl_priv *VAR_4,
        struct iwl_lq_sta *VAR_5,
        struct ieee80211_conf *VAR_6,
        struct ieee80211_sta *VAR_7,
        struct iwl_scale_tbl_info *VAR_8, int VAR_9)
{
 u16 VAR_10;
 s32 VAR_11;
 s8 VAR_12 = VAR_5->is_green;
 struct iwl_station_priv *VAR_13 = (void *)VAR_7->drv_priv;
 struct iwl_rxon_context *VAR_14 = VAR_13->ctx;

 if (!FUNC_1(VAR_6) || !VAR_7->ht_cap.ht_supported)
  return -1;

 if (VAR_7->smps_mode == VAR_0)
  return -1;


 if (VAR_4->hw_params.tx_chains_num < 2)
  return -1;

 FUNC_0(VAR_4, "LQ: try to switch to MIMO2\n");

 VAR_8->lq_type = VAR_3;
 VAR_8->is_dup = VAR_5->is_dup;
 VAR_8->action = 0;
 VAR_8->max_search = VAR_1;
 VAR_10 = VAR_5->active_mimo2_rate;

 if (FUNC_2(VAR_4, VAR_14, VAR_7))
  VAR_8->is_ht40 = 1;
 else
  VAR_8->is_ht40 = 0;

 FUNC_5(VAR_5, VAR_8);

 VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_8, VAR_10, VAR_9);

 FUNC_0(VAR_4, "LQ: MIMO2 best rate %d mask %X\n", VAR_11, VAR_10);
 if ((VAR_11 == VAR_2) || !((1 << VAR_11) & VAR_10)) {
  FUNC_0(VAR_4, "Can't switch with index %d rate mask %x\n",
      VAR_11, VAR_10);
  return -1;
 }
 VAR_8->current_rate = FUNC_3(VAR_4, VAR_8, VAR_11, VAR_12);

 FUNC_0(VAR_4, "LQ: Switch to new mcs %X index is green %X\n",
       VAR_8->current_rate, VAR_12);
 return 0;
}
