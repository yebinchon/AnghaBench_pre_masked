
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl12xx_vif {int role_id; } ;
struct wl12xx_cmd_channel_switch {scalar_t__ post_switch_tx_disable; int stop_tx; int switch_time; int channel; int role_id; } ;
struct wl1271 {int dummy; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct ieee80211_channel_switch {int block_tx; int count; TYPE_2__ chandef; } ;
struct TYPE_3__ {int hw_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct wl12xx_cmd_channel_switch*) ;
 struct wl12xx_cmd_channel_switch* FUNC_1 (int,int ) ;
 int FUNC_2 (struct wl1271*,int ,struct wl12xx_cmd_channel_switch*,int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;

int FUNC_5(struct wl1271 *VAR_4,
         struct wl12xx_vif *VAR_5,
         struct ieee80211_channel_switch *VAR_6)
{
 struct wl12xx_cmd_channel_switch *VAR_7;
 int VAR_8;

 FUNC_3(VAR_1, "cmd channel switch");

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_3);
 if (!VAR_7) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_7->role_id = VAR_5->role_id;
 VAR_7->channel = VAR_6->chandef.chan->hw_value;
 VAR_7->switch_time = VAR_6->count;
 VAR_7->stop_tx = VAR_6->block_tx;



 VAR_7->post_switch_tx_disable = 0;

 VAR_8 = FUNC_2(VAR_4, VAR_0, VAR_7, sizeof(*VAR_7), 0);
 if (VAR_8 < 0) {
  FUNC_4("failed to send channel switch command");
  goto out_free;
 }

out_free:
 FUNC_0(VAR_7);

out:
 return VAR_8;
}
