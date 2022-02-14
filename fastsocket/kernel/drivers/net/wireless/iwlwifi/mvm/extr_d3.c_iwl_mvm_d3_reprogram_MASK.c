
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_time_quota_cmd {TYPE_2__* quotas; } ;
struct iwl_mvm_vif {int uploaded; size_t ap_sta_id; TYPE_3__* phy_ctxt; int color; int id; } ;
struct iwl_mvm {int * fw_id_to_mac_id; } ;
struct iwl_binding_cmd {void** macs; void* phy; void* action; void* id_and_color; } ;
struct TYPE_4__ {int assoc; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; int chanctx_conf; } ;
struct ieee80211_sta {int dummy; } ;
struct cfg80211_chan_def {int dummy; } ;
struct ieee80211_chanctx_conf {int rx_chains_dynamic; int rx_chains_static; struct cfg80211_chan_def def; } ;
typedef int quota_cmd ;
typedef int binding_cmd ;
struct TYPE_6__ {int color; int id; } ;
struct TYPE_5__ {void* id_and_color; void* max_duration; void* quota; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_6 (struct iwl_mvm*,TYPE_3__*,struct cfg80211_chan_def*,int ,int ) ;
 int FUNC_7 (struct iwl_mvm*,int ,int ,int,struct iwl_time_quota_cmd*) ;
 int FUNC_8 (struct iwl_mvm*,int ,int,struct iwl_binding_cmd*,int*) ;
 int FUNC_9 (struct iwl_mvm*,struct ieee80211_sta*,int) ;
 struct iwl_mvm_vif* FUNC_10 (struct ieee80211_vif*) ;
 int FUNC_11 (int ,struct ieee80211_sta*) ;
 struct ieee80211_chanctx_conf* FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(struct iwl_mvm *VAR_9, struct ieee80211_vif *VAR_10,
    struct ieee80211_sta *VAR_11)
{
 struct iwl_mvm_vif *VAR_12 = FUNC_10(VAR_10);
 struct ieee80211_chanctx_conf *VAR_13;
 u8 VAR_14, VAR_15;
 struct cfg80211_chan_def VAR_16;
 int VAR_17, VAR_18;
 struct iwl_binding_cmd VAR_19 = {};
 struct iwl_time_quota_cmd VAR_20 = {};
 u32 VAR_21;


 if (FUNC_2(!VAR_12->phy_ctxt))
  return -VAR_2;

 FUNC_13();
 VAR_13 = FUNC_12(VAR_10->chanctx_conf);
 if (FUNC_2(!VAR_13)) {
  FUNC_14();
  return -VAR_2;
 }
 VAR_16 = VAR_13->def;
 VAR_14 = VAR_13->rx_chains_static;
 VAR_15 = VAR_13->rx_chains_dynamic;
 FUNC_14();

 VAR_17 = FUNC_6(VAR_9, VAR_12->phy_ctxt, &VAR_16,
       VAR_14, VAR_15);
 if (VAR_17)
  return VAR_17;


 VAR_12->uploaded = 0;

 if (FUNC_2(!VAR_10->bss_conf.assoc))
  return -VAR_2;

 VAR_10->bss_conf.assoc = 0;
 VAR_17 = FUNC_4(VAR_9, VAR_10);
 VAR_10->bss_conf.assoc = 1;
 if (VAR_17)
  return VAR_17;


 VAR_19.id_and_color =
  FUNC_3(FUNC_0(VAR_12->phy_ctxt->id,
      VAR_12->phy_ctxt->color));
 VAR_19.action = FUNC_3(VAR_4);
 VAR_19.phy =
  FUNC_3(FUNC_0(VAR_12->phy_ctxt->id,
      VAR_12->phy_ctxt->color));
 VAR_19.macs[0] = FUNC_3(FUNC_0(VAR_12->id,
             VAR_12->color));
 for (VAR_18 = 1; VAR_18 < VAR_7; VAR_18++)
  VAR_19.macs[VAR_18] = FUNC_3(VAR_5);

 VAR_21 = 0;
 VAR_17 = FUNC_8(VAR_9, VAR_0,
       sizeof(VAR_19), &VAR_19,
       &VAR_21);
 if (VAR_17) {
  FUNC_1(VAR_9, "Failed to add binding: %d\n", VAR_17);
  return VAR_17;
 }

 if (VAR_21) {
  FUNC_1(VAR_9, "Binding command failed: %u\n", VAR_21);
  return -VAR_3;
 }

 VAR_17 = FUNC_9(VAR_9, VAR_11, 0);
 if (VAR_17)
  return VAR_17;
 FUNC_11(VAR_9->fw_id_to_mac_id[VAR_12->ap_sta_id], VAR_11);

 VAR_17 = FUNC_5(VAR_9, VAR_10);
 if (VAR_17)
  return VAR_17;


 VAR_20.quotas[0].id_and_color =
  FUNC_3(FUNC_0(VAR_12->phy_ctxt->id,
      VAR_12->phy_ctxt->color));
 VAR_20.quotas[0].quota = FUNC_3(100);
 VAR_20.quotas[0].max_duration = FUNC_3(1000);

 for (VAR_18 = 1; VAR_18 < VAR_6; VAR_18++)
  VAR_20.quotas[VAR_18].id_and_color = FUNC_3(VAR_5);

 VAR_17 = FUNC_7(VAR_9, VAR_8, VAR_1,
       sizeof(VAR_20), &VAR_20);
 if (VAR_17)
  FUNC_1(VAR_9, "Failed to send quota: %d\n", VAR_17);

 return 0;
}
