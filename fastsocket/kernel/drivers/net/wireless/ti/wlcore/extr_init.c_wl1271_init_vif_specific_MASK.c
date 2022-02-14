
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wl12xx_vif {scalar_t__ bss_type; } ;
struct TYPE_5__ {int tid_conf_count; int ac_conf_count; struct conf_tx_tid* tid_conf; struct conf_tx_ac_category* ac_conf; } ;
struct TYPE_4__ {scalar_t__ sta_sleep_auth; } ;
struct TYPE_6__ {TYPE_2__ tx; TYPE_1__ conn; } ;
struct wl1271 {scalar_t__ ap_count; scalar_t__ sta_count; TYPE_3__ conf; } ;
struct ieee80211_vif {int dummy; } ;
struct conf_tx_tid {int * apsd_conf; int ack_policy; int ps_scheme; int tsid; int channel_type; int queue_id; } ;
struct conf_tx_ac_category {int tx_op_limit; int aifsn; int cw_max; int cw_min; int ac; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct wl1271*,struct wl12xx_vif*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_3 (struct wl1271*,scalar_t__) ;
 int FUNC_4 (struct wl1271*,struct wl12xx_vif*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_6 (struct wl1271*,struct ieee80211_vif*) ;
 int FUNC_7 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_8 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_9 (struct wl1271*,struct ieee80211_vif*) ;
 int FUNC_10 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_11 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_12 (struct wl1271*,struct wl12xx_vif*) ;
 struct wl12xx_vif* FUNC_13 (struct ieee80211_vif*) ;
 int FUNC_14 (struct wl1271*,struct wl12xx_vif*) ;

int FUNC_15(struct wl1271 *VAR_4, struct ieee80211_vif *VAR_5)
{
 struct wl12xx_vif *VAR_6 = FUNC_13(VAR_5);
 struct conf_tx_ac_category *VAR_7;
 struct conf_tx_tid *VAR_8;
 bool VAR_9 = (VAR_6->bss_type == VAR_0);
 int VAR_10, VAR_11;



 if (VAR_4->ap_count == 0 && VAR_9) {

  VAR_10 = FUNC_3(VAR_4, VAR_1);
  if (VAR_10 < 0)
   return VAR_10;

 } else if (VAR_4->sta_count == 0 && VAR_4->ap_count == 0 && !VAR_9) {
  u8 VAR_12 = VAR_4->conf.conn.sta_sleep_auth;

  if (VAR_12 != VAR_3)
   VAR_10 = FUNC_3(VAR_4, VAR_12);

  else
   VAR_10 = FUNC_3(VAR_4, VAR_2);

  if (VAR_10 < 0)
   return VAR_10;
 }


 if (VAR_9) {
  VAR_10 = FUNC_5(VAR_4, VAR_6);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 = FUNC_10(VAR_4, VAR_6);
  if (VAR_10 < 0)
   return VAR_10;
 } else {
  VAR_10 = FUNC_8(VAR_4, VAR_6);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_10 = FUNC_12(VAR_4, VAR_6);
  if (VAR_10 < 0)
   return VAR_10;
 }

 FUNC_11(VAR_4, VAR_6);


 FUNC_0(VAR_4->conf.tx.tid_conf_count != VAR_4->conf.tx.ac_conf_count);
 for (VAR_11 = 0; VAR_11 < VAR_4->conf.tx.tid_conf_count; VAR_11++) {
  VAR_7 = &VAR_4->conf.tx.ac_conf[VAR_11];
  VAR_10 = FUNC_1(VAR_4, VAR_6, VAR_7->ac,
     VAR_7->cw_min, VAR_7->cw_max,
     VAR_7->aifsn, VAR_7->tx_op_limit);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_8 = &VAR_4->conf.tx.tid_conf[VAR_11];
  VAR_10 = FUNC_4(VAR_4, VAR_6,
      VAR_8->queue_id,
      VAR_8->channel_type,
      VAR_8->tsid,
      VAR_8->ps_scheme,
      VAR_8->ack_policy,
      VAR_8->apsd_conf[0],
      VAR_8->apsd_conf[1]);
  if (VAR_10 < 0)
   return VAR_10;
 }


 VAR_10 = FUNC_2(VAR_4, VAR_6);
 if (VAR_10 < 0)
  return VAR_10;


 if (VAR_9)
  VAR_10 = FUNC_6(VAR_4, VAR_5);
 else
  VAR_10 = FUNC_9(VAR_4, VAR_5);

 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_7(VAR_4, VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_14(VAR_4, VAR_6);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
