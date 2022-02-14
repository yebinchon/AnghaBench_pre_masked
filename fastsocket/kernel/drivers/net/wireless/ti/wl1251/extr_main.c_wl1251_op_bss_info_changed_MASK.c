
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl1251 {scalar_t__ bss_type; int mutex; int dtim_period; int channel; int beacon_int; int vif; int hw; int bssid; int rssi_thold; } ;
struct sk_buff {int len; int data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wl1251* priv; } ;
struct ieee80211_bss_conf {scalar_t__ use_cts_prot; scalar_t__ use_short_preamble; scalar_t__ use_short_slot; int aid; int beacon_int; scalar_t__ assoc; int bssid; int cqm_rssi_thold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct wl1251*,int ) ;
 int FUNC_8 (struct wl1251*,int ) ;
 int FUNC_9 (struct wl1251*,int ,int ,int ,int ) ;
 int FUNC_10 (struct wl1251*,int ) ;
 int FUNC_11 (struct wl1251*,int ) ;
 int FUNC_12 (struct wl1251*) ;
 int FUNC_13 (struct wl1251*,int ,int ,int ) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (struct wl1251*,scalar_t__,int ,int ,int ) ;
 int FUNC_16 (struct wl1251*) ;
 int FUNC_17 (struct wl1251*) ;
 int FUNC_18 (char*,int) ;

__attribute__((used)) static void FUNC_19(struct ieee80211_hw *VAR_25,
           struct ieee80211_vif *VAR_26,
           struct ieee80211_bss_conf *VAR_27,
           u32 VAR_28)
{
 struct wl1251 *VAR_29 = VAR_25->priv;
 struct sk_buff *VAR_30, *VAR_31;
 int VAR_32;

 FUNC_14(VAR_16, "mac80211 bss info changed");

 FUNC_5(&VAR_29->mutex);

 VAR_32 = FUNC_17(VAR_29);
 if (VAR_32 < 0)
  goto out;

 if (VAR_28 & VAR_5) {
  VAR_32 = FUNC_9(VAR_29, VAR_27->cqm_rssi_thold,
       VAR_24,
       VAR_23,
       VAR_20);
  if (VAR_32 < 0)
   goto out;
  VAR_29->rssi_thold = VAR_27->cqm_rssi_thold;
 }

 if (VAR_28 & VAR_4) {
  FUNC_4(VAR_29->bssid, VAR_27->bssid, VAR_17);

  VAR_31 = FUNC_2(VAR_29->hw, VAR_29->vif);
  if (!VAR_31)
   goto out_sleep;

  VAR_32 = FUNC_13(VAR_29, VAR_11,
           VAR_31->data, VAR_31->len);
  FUNC_0(VAR_31);
  if (VAR_32 < 0)
   goto out_sleep;

  VAR_32 = FUNC_12(VAR_29);
  if (VAR_32 < 0)
   goto out;

  if (VAR_29->bss_type != VAR_9) {
   VAR_32 = FUNC_15(VAR_29, VAR_29->bss_type, VAR_29->channel,
       VAR_29->beacon_int, VAR_29->dtim_period);
   if (VAR_32 < 0)
    goto out_sleep;
  }
 }

 if (VAR_28 & VAR_2) {
  if (VAR_27->assoc) {
   VAR_29->beacon_int = VAR_27->beacon_int;

   VAR_31 = FUNC_3(VAR_29->hw, VAR_29->vif);
   if (!VAR_31)
    goto out_sleep;

   VAR_32 = FUNC_13(VAR_29, VAR_13,
            VAR_31->data,
            VAR_31->len);
   FUNC_0(VAR_31);
   if (VAR_32 < 0)
    goto out_sleep;

   VAR_32 = FUNC_7(VAR_29, VAR_27->aid);
   if (VAR_32 < 0)
    goto out_sleep;
  } else {

   VAR_29->beacon_int = VAR_21;
   VAR_29->dtim_period = VAR_22;
  }
 }
 if (VAR_28 & VAR_8) {
  if (VAR_27->use_short_slot)
   VAR_32 = FUNC_11(VAR_29, VAR_19);
  else
   VAR_32 = FUNC_11(VAR_29, VAR_18);
  if (VAR_32 < 0) {
   FUNC_18("Set slot time failed %d", VAR_32);
   goto out_sleep;
  }
 }

 if (VAR_28 & VAR_7) {
  if (VAR_27->use_short_preamble)
   FUNC_10(VAR_29, VAR_1);
  else
   FUNC_10(VAR_29, VAR_0);
 }

 if (VAR_28 & VAR_6) {
  if (VAR_27->use_cts_prot)
   VAR_32 = FUNC_8(VAR_29, VAR_15);
  else
   VAR_32 = FUNC_8(VAR_29, VAR_14);
  if (VAR_32 < 0) {
   FUNC_18("Set ctsprotect failed %d", VAR_32);
   goto out_sleep;
  }
 }

 if (VAR_28 & VAR_3) {
  VAR_30 = FUNC_1(VAR_25, VAR_26);
  if (!VAR_30)
   goto out_sleep;

  VAR_32 = FUNC_13(VAR_29, VAR_10, VAR_30->data,
           VAR_30->len);

  if (VAR_32 < 0) {
   FUNC_0(VAR_30);
   goto out_sleep;
  }

  VAR_32 = FUNC_13(VAR_29, VAR_12, VAR_30->data,
           VAR_30->len);

  FUNC_0(VAR_30);

  if (VAR_32 < 0)
   goto out_sleep;

  VAR_32 = FUNC_15(VAR_29, VAR_29->bss_type, VAR_29->beacon_int,
      VAR_29->channel, VAR_29->dtim_period);

  if (VAR_32 < 0)
   goto out_sleep;
 }

out_sleep:
 FUNC_16(VAR_29);

out:
 FUNC_6(&VAR_29->mutex);
}
