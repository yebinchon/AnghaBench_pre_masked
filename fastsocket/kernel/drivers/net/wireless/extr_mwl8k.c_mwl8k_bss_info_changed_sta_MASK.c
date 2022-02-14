
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mwl8k_priv {int capture_beacon; int * capture_bssid; scalar_t__ ap_fw; } ;
struct TYPE_14__ {int bssid; scalar_t__ assoc; int use_short_slot; int use_short_preamble; int basic_rates; } ;
struct ieee80211_vif {TYPE_6__ bss_conf; } ;
struct TYPE_9__ {int rx_mask; } ;
struct TYPE_10__ {TYPE_1__ mcs; } ;
struct ieee80211_sta {int* supp_rates; TYPE_2__ ht_cap; } ;
struct TYPE_12__ {TYPE_3__* chan; } ;
struct TYPE_13__ {TYPE_4__ chandef; } ;
struct ieee80211_hw {TYPE_5__ conf; struct mwl8k_priv* priv; } ;
struct ieee80211_bss_conf {int dummy; } ;
struct TYPE_16__ {int hw_value; } ;
struct TYPE_15__ {int hw_value; } ;
struct TYPE_11__ {size_t band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int ) ;
 struct ieee80211_sta* FUNC_1 (struct ieee80211_vif*,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct ieee80211_hw*,struct ieee80211_vif*,int) ;
 int FUNC_4 (struct ieee80211_hw*,struct ieee80211_vif*,int,int *) ;
 int FUNC_5 (struct ieee80211_hw*,int ) ;
 int FUNC_6 (struct ieee80211_hw*,int,int) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*) ;
 TYPE_8__* VAR_9 ;
 TYPE_7__* VAR_10 ;
 int FUNC_10 (struct ieee80211_hw*,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static void
FUNC_13(struct ieee80211_hw *VAR_11, struct ieee80211_vif *VAR_12,
      struct ieee80211_bss_conf *VAR_13, u32 VAR_14)
{
 struct mwl8k_priv *VAR_15 = VAR_11->priv;
 u32 VAR_16 = 0;
 u8 VAR_17[16];
 int VAR_18;

 if (FUNC_8(VAR_11))
  return;




 if ((VAR_14 & VAR_0) && !VAR_12->bss_conf.assoc)
  VAR_15->capture_beacon = 0;




 if (VAR_12->bss_conf.assoc) {
  struct ieee80211_sta *VAR_19;

  FUNC_11();

  VAR_19 = FUNC_1(VAR_12, VAR_12->bss_conf.bssid);
  if (VAR_19 == ((void*)0)) {
   FUNC_12();
   goto out;
  }

  if (VAR_11->conf.chandef.chan->band == VAR_7) {
   VAR_16 = VAR_19->supp_rates[VAR_7];
  } else {
   VAR_16 =
    VAR_19->supp_rates[VAR_8] << 5;
  }
  FUNC_2(VAR_17, VAR_19->ht_cap.mcs.rx_mask, 16);

  FUNC_12();
 }

 if ((VAR_14 & VAR_0) && VAR_12->bss_conf.assoc &&
     !VAR_15->ap_fw) {
  VAR_18 = FUNC_4(VAR_11, VAR_12, VAR_16, VAR_17);
  if (VAR_18)
   goto out;

  VAR_18 = FUNC_7(VAR_11);
  if (VAR_18)
   goto out;
 } else {
  if ((VAR_14 & VAR_0) && VAR_12->bss_conf.assoc &&
      VAR_15->ap_fw) {
   int VAR_20;
   int VAR_21;



   VAR_20 = FUNC_0(VAR_12->bss_conf.basic_rates);
   if (VAR_20)
    VAR_20--;

   if (VAR_11->conf.chandef.chan->band == VAR_7)
    VAR_21 = VAR_9[VAR_20].hw_value;
   else
    VAR_21 = VAR_10[VAR_20].hw_value;

   FUNC_6(VAR_11, VAR_21, VAR_21);
  }
 }

 if (VAR_14 & VAR_3) {
  VAR_18 = FUNC_10(VAR_11,
    VAR_12->bss_conf.use_short_preamble);
  if (VAR_18)
   goto out;
 }

 if ((VAR_14 & VAR_4) && !VAR_15->ap_fw) {
  VAR_18 = FUNC_5(VAR_11, VAR_12->bss_conf.use_short_slot);
  if (VAR_18)
   goto out;
 }

 if (VAR_12->bss_conf.assoc && !VAR_15->ap_fw &&
     (VAR_14 & (VAR_0 | VAR_2 |
   VAR_5))) {
  VAR_18 = FUNC_3(VAR_11, VAR_12, VAR_16);
  if (VAR_18)
   goto out;
 }

 if (VAR_12->bss_conf.assoc &&
     (VAR_14 & (VAR_0 | VAR_1))) {




  FUNC_2(VAR_15->capture_bssid, VAR_12->bss_conf.bssid, VAR_6);
  VAR_15->capture_beacon = 1;
 }

out:
 FUNC_9(VAR_11);
}
