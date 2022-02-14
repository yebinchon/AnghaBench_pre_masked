
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wl1251 {int scanning; int mutex; int vif; int hw; int dtim_period; int beacon_int; int channel; int bss_type; } ;
struct sk_buff {int len; int data; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct ieee80211_hw {TYPE_2__ conf; struct wl1251* priv; } ;
struct cfg80211_scan_request {int n_channels; int channels; int ie_len; int ie; TYPE_1__* ssids; scalar_t__ n_ssids; } ;
struct TYPE_3__ {size_t ssid_len; int * ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ,int *,size_t,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct wl1251*,int *,size_t,int ,int ,int ) ;
 int FUNC_7 (struct wl1251*,int ,int ,int ) ;
 int FUNC_8 (struct wl1251*,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct wl1251*,int ,int ,int ,int ) ;
 int FUNC_11 (struct wl1251*) ;
 int FUNC_12 (struct wl1251*) ;
 int FUNC_13 (struct wl1251*,int ) ;

__attribute__((used)) static int FUNC_14(struct ieee80211_hw *VAR_9,
        struct ieee80211_vif *VAR_10,
        struct cfg80211_scan_request *VAR_11)
{
 struct wl1251 *VAR_12 = VAR_9->priv;
 struct sk_buff *VAR_13;
 size_t VAR_14 = 0;
 u8 *VAR_15 = ((void*)0);
 int VAR_16;

 FUNC_9(VAR_1, "mac80211 hw scan");

 if (VAR_11->n_ssids) {
  VAR_15 = VAR_11->ssids[0].ssid;
  VAR_14 = VAR_11->ssids[0].ssid_len;
 }

 FUNC_3(&VAR_12->mutex);

 if (VAR_12->scanning) {
  FUNC_9(VAR_2, "scan already in progress");
  VAR_16 = -VAR_3;
  goto out;
 }

 VAR_16 = FUNC_12(VAR_12);
 if (VAR_16 < 0)
  goto out;

 if (VAR_9->conf.flags & VAR_5) {
  VAR_16 = FUNC_13(VAR_12, VAR_6);
  if (VAR_16 < 0)
   goto out_sleep;
  VAR_16 = FUNC_10(VAR_12, VAR_12->bss_type, VAR_12->channel,
      VAR_12->beacon_int, VAR_12->dtim_period);
  if (VAR_16 < 0)
   goto out_sleep;
 }

 VAR_13 = FUNC_1(VAR_12->hw, VAR_12->vif, VAR_15, VAR_14,
         VAR_11->ie_len);
 if (!VAR_13) {
  VAR_16 = -VAR_4;
  goto out_idle;
 }
 if (VAR_11->ie_len)
  FUNC_2(FUNC_5(VAR_13, VAR_11->ie_len), VAR_11->ie, VAR_11->ie_len);

 VAR_16 = FUNC_7(VAR_12, VAR_0, VAR_13->data,
          VAR_13->len);
 FUNC_0(VAR_13);
 if (VAR_16 < 0)
  goto out_idle;

 VAR_16 = FUNC_8(VAR_12, 0);
 if (VAR_16 < 0)
  goto out_idle;

 VAR_12->scanning = 1;

 VAR_16 = FUNC_6(VAR_12, VAR_15, VAR_14, VAR_11->channels,
         VAR_11->n_channels, VAR_8);
 if (VAR_16 < 0) {
  VAR_12->scanning = 0;
  goto out_idle;
 }
 goto out_sleep;

out_idle:
 if (VAR_9->conf.flags & VAR_5)
  VAR_16 = FUNC_13(VAR_12, VAR_7);
out_sleep:
 FUNC_11(VAR_12);

out:
 FUNC_4(&VAR_12->mutex);

 return VAR_16;
}
