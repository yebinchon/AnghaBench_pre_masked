
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_8__ {scalar_t__ flags; int channel; } ;
struct TYPE_7__ {int is_40mhz; int extension_chan_offset; } ;
struct TYPE_6__ {int channel; } ;
struct iwl_rxon_context {int vif; TYPE_3__ staging; TYPE_2__ ht; TYPE_1__ active; } ;
struct iwl_ht_config {int smps; } ;
struct iwl_priv {int mutex; scalar_t__ switch_channel; int status; TYPE_4__* lib; struct iwl_ht_config current_ht_config; struct iwl_rxon_context* contexts; } ;
struct ieee80211_conf {int smps_mode; } ;
struct ieee80211_hw {struct ieee80211_conf conf; } ;
struct TYPE_10__ {struct ieee80211_channel* chan; } ;
struct ieee80211_channel_switch {TYPE_5__ chandef; } ;
struct ieee80211_channel {scalar_t__ hw_value; int band; } ;
struct TYPE_9__ {scalar_t__ (* set_channel_switch ) (struct iwl_priv*,struct ieee80211_channel_switch*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_1 (struct ieee80211_hw*) ;
 size_t VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct iwl_rxon_context*) ;
 scalar_t__ FUNC_7 (struct iwl_priv*) ;
 int FUNC_8 (struct iwl_priv*,struct iwl_rxon_context*,int ,int ) ;
 int FUNC_9 (struct iwl_priv*,struct ieee80211_channel*,struct iwl_rxon_context*) ;
 int FUNC_10 (struct iwl_priv*,struct iwl_ht_config*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (struct iwl_priv*,struct ieee80211_channel_switch*) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static void FUNC_17(struct ieee80211_hw *VAR_7,
          struct ieee80211_channel_switch *VAR_8)
{
 struct iwl_priv *VAR_9 = FUNC_1(VAR_7);
 struct ieee80211_conf *VAR_10 = &VAR_7->conf;
 struct ieee80211_channel *VAR_11 = VAR_8->chandef.chan;
 struct iwl_ht_config *VAR_12 = &VAR_9->current_ht_config;
 struct iwl_rxon_context *VAR_13 = &VAR_9->contexts[VAR_3];
 u16 VAR_14;

 FUNC_0(VAR_9, "enter\n");

 FUNC_12(&VAR_9->mutex);

 if (FUNC_7(VAR_9))
  goto out;

 if (FUNC_16(VAR_5, &VAR_9->status) ||
     FUNC_16(VAR_6, &VAR_9->status) ||
     FUNC_16(VAR_4, &VAR_9->status))
  goto out;

 if (!FUNC_6(VAR_13))
  goto out;

 if (!VAR_9->lib->set_channel_switch)
  goto out;

 VAR_14 = VAR_11->hw_value;
 if (FUNC_11(VAR_13->active.channel) == VAR_14)
  goto out;

 VAR_9->current_ht_config.smps = VAR_10->smps_mode;


 switch (FUNC_2(&VAR_8->chandef)) {
 case 128:
 case 131:
  VAR_13->ht.is_40mhz = 0;
  VAR_13->ht.extension_chan_offset = VAR_2;
  break;
 case 130:
  VAR_13->ht.extension_chan_offset = VAR_1;
  VAR_13->ht.is_40mhz = 1;
  break;
 case 129:
  VAR_13->ht.extension_chan_offset = VAR_0;
  VAR_13->ht.is_40mhz = 1;
  break;
 }

 if ((FUNC_11(VAR_13->staging.channel) != VAR_14))
  VAR_13->staging.flags = 0;

 FUNC_9(VAR_9, VAR_11, VAR_13);
 FUNC_10(VAR_9, VAR_12);
 FUNC_8(VAR_9, VAR_13, VAR_11->band, VAR_13->vif);





 FUNC_14(VAR_4, &VAR_9->status);
 VAR_9->switch_channel = FUNC_4(VAR_14);
 if (VAR_9->lib->set_channel_switch(VAR_9, VAR_8)) {
  FUNC_3(VAR_4, &VAR_9->status);
  VAR_9->switch_channel = 0;
  FUNC_5(VAR_13->vif, 0);
 }

out:
 FUNC_13(&VAR_9->mutex);
 FUNC_0(VAR_9, "leave\n");
}
