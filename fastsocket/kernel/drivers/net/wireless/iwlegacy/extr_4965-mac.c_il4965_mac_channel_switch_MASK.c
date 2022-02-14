
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
struct il_ht_config {int smps; } ;
struct TYPE_6__ {int channel; } ;
struct il_priv {int mutex; int vif; scalar_t__ switch_channel; int status; TYPE_4__* ops; int lock; TYPE_3__ staging; TYPE_2__ ht; struct il_ht_config current_ht_config; TYPE_1__ active; } ;
struct il_channel_info {int dummy; } ;
struct ieee80211_conf {int smps_mode; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct il_priv* priv; } ;
struct TYPE_10__ {struct ieee80211_channel* chan; } ;
struct ieee80211_channel_switch {TYPE_5__ chandef; } ;
struct ieee80211_channel {scalar_t__ hw_value; int band; } ;
struct TYPE_9__ {scalar_t__ (* set_channel_switch ) (struct il_priv*,struct ieee80211_channel_switch*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int) ;
 struct il_channel_info* FUNC_5 (struct il_priv*,int ,scalar_t__) ;
 int FUNC_6 (struct il_priv*) ;
 int FUNC_7 (struct il_channel_info const*) ;
 scalar_t__ FUNC_8 (struct il_priv*) ;
 int FUNC_9 (struct il_priv*,int ,int ) ;
 int FUNC_10 (struct il_priv*) ;
 int FUNC_11 (struct il_priv*,struct ieee80211_channel*) ;
 int FUNC_12 (struct il_priv*,struct il_ht_config*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (struct il_priv*,struct ieee80211_channel_switch*) ;
 scalar_t__ FUNC_20 (int ,int *) ;

void
FUNC_21(struct ieee80211_hw *VAR_6,
     struct ieee80211_channel_switch *VAR_7)
{
 struct il_priv *VAR_8 = VAR_6->priv;
 const struct il_channel_info *VAR_9;
 struct ieee80211_conf *VAR_10 = &VAR_6->conf;
 struct ieee80211_channel *VAR_11 = VAR_7->chandef.chan;
 struct il_ht_config *VAR_12 = &VAR_8->current_ht_config;
 u16 VAR_13;

 FUNC_0("enter\n");

 FUNC_14(&VAR_8->mutex);

 if (FUNC_8(VAR_8))
  goto out;

 if (FUNC_20(VAR_4, &VAR_8->status) ||
     FUNC_20(VAR_5, &VAR_8->status) ||
     FUNC_20(VAR_3, &VAR_8->status))
  goto out;

 if (!FUNC_6(VAR_8))
  goto out;

 if (!VAR_8->ops->set_channel_switch)
  goto out;

 VAR_13 = VAR_11->hw_value;
 if (FUNC_13(VAR_8->active.channel) == VAR_13)
  goto out;

 VAR_9 = FUNC_5(VAR_8, VAR_11->band, VAR_13);
 if (!FUNC_7(VAR_9)) {
  FUNC_0("invalid channel\n");
  goto out;
 }

 FUNC_17(&VAR_8->lock);

 VAR_8->current_ht_config.smps = VAR_10->smps_mode;


 switch (FUNC_1(&VAR_7->chandef)) {
 case 128:
 case 131:
  VAR_8->ht.is_40mhz = 0;
  VAR_8->ht.extension_chan_offset = VAR_2;
  break;
 case 130:
  VAR_8->ht.extension_chan_offset = VAR_1;
  VAR_8->ht.is_40mhz = 1;
  break;
 case 129:
  VAR_8->ht.extension_chan_offset = VAR_0;
  VAR_8->ht.is_40mhz = 1;
  break;
 }

 if ((FUNC_13(VAR_8->staging.channel) != VAR_13))
  VAR_8->staging.flags = 0;

 FUNC_11(VAR_8, VAR_11);
 FUNC_12(VAR_8, VAR_12);
 FUNC_9(VAR_8, VAR_11->band, VAR_8->vif);

 FUNC_18(&VAR_8->lock);

 FUNC_10(VAR_8);




 FUNC_16(VAR_3, &VAR_8->status);
 VAR_8->switch_channel = FUNC_3(VAR_13);
 if (VAR_8->ops->set_channel_switch(VAR_8, VAR_7)) {
  FUNC_2(VAR_3, &VAR_8->status);
  VAR_8->switch_channel = 0;
  FUNC_4(VAR_8->vif, 0);
 }

out:
 FUNC_15(&VAR_8->mutex);
 FUNC_0("leave\n");
}
