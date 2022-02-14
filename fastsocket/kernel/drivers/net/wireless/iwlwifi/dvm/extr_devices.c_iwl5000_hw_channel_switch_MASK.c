
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int filter_flags; int flags; } ;
struct TYPE_8__ {int channel; } ;
struct TYPE_7__ {int beacon_interval; } ;
struct iwl_rxon_context {TYPE_3__ staging; TYPE_2__ active; struct ieee80211_vif* vif; TYPE_1__ timing; } ;
struct iwl_priv {scalar_t__ band; int ucode_beacon_time; struct iwl_rxon_context* contexts; } ;
struct iwl_host_cmd {int data; int flags; int len; int id; } ;
struct iwl5000_channel_switch_cmd {int band; int expect_beacon; int switch_time; int rxon_filter_flags; int rxon_flags; int channel; } ;
struct TYPE_10__ {int beacon_int; } ;
struct ieee80211_vif {TYPE_4__ bss_conf; } ;
struct TYPE_12__ {TYPE_5__* chan; } ;
struct ieee80211_channel_switch {int count; int timestamp; TYPE_6__ chandef; } ;
struct TYPE_11__ {int hw_value; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,char*,int ,...) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct iwl_priv*,int,int,int) ;
 int FUNC_4 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_5 (struct iwl_priv*,int,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct iwl_priv *VAR_6,
         struct ieee80211_channel_switch *VAR_7)
{




 struct iwl_rxon_context *VAR_8 = &VAR_6->contexts[VAR_3];
 struct iwl5000_channel_switch_cmd VAR_9;
 u32 VAR_10, VAR_11;
 u16 VAR_12;
 u32 VAR_13;
 u8 VAR_14;
 u16 VAR_15 = FUNC_6(VAR_8->timing.beacon_interval);
 struct ieee80211_vif *VAR_16 = VAR_8->vif;
 struct iwl_host_cmd VAR_17 = {
  .id = VAR_4,
  .len = sizeof(VAR_9), 
  .flags = VAR_0,
  .data = &VAR_9, 
 };

 VAR_9.band = VAR_6->band == VAR_1;
 VAR_12 = VAR_7->chandef.chan->hw_value;
 FUNC_0(VAR_6, "channel switch from %d to %d\n",
        VAR_8->active.channel, VAR_12);
 VAR_9.channel = FUNC_1(VAR_12);
 VAR_9.rxon_flags = VAR_8->staging.flags;
 VAR_9.rxon_filter_flags = VAR_8->staging.filter_flags;
 VAR_14 = VAR_7->count;
 VAR_13 = VAR_7->timestamp & 0x0ffffffff;




 if ((VAR_6->ucode_beacon_time > VAR_13) && VAR_15) {
  if (VAR_14 > ((VAR_6->ucode_beacon_time - VAR_13) /
      VAR_15)) {
   VAR_14 -= (VAR_6->ucode_beacon_time -
    VAR_13) / VAR_15;
  } else
   VAR_14 = 0;
 }
 if (VAR_14 <= 1)
  VAR_9.switch_time = FUNC_2(VAR_6->ucode_beacon_time);
 else {
  VAR_10 =
   VAR_16->bss_conf.beacon_int * VAR_14 * VAR_5;
  VAR_11 = FUNC_5(VAR_6,
        VAR_10,
        VAR_15);
  VAR_9.switch_time = FUNC_3(VAR_6,
            VAR_6->ucode_beacon_time,
            VAR_11,
            VAR_15);
 }
 FUNC_0(VAR_6, "uCode time for the switch is 0x%x\n",
        VAR_9.switch_time);
 VAR_9.expect_beacon =
  VAR_7->chandef.chan->flags & VAR_2;

 return FUNC_4(VAR_6, &VAR_17);
}
