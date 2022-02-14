
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {int qos; int hlid; } ;
struct wl12xx_vif {scalar_t__ bss_type; size_t band; int ip_addr; TYPE_2__ sta; int rate_set; int flags; int basic_rate_set; int basic_rate; int rssi_thold; } ;
struct TYPE_9__ {scalar_t__ forced_ps; } ;
struct TYPE_10__ {TYPE_4__ conn; } ;
struct wl1271 {TYPE_5__ conf; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_8__ {int* rx_mask; } ;
struct ieee80211_sta_ht_cap {scalar_t__ ht_supported; TYPE_3__ mcs; } ;
struct ieee80211_sta {int* supp_rates; struct ieee80211_sta_ht_cap ht_cap; } ;
struct TYPE_6__ {scalar_t__ width; } ;
struct ieee80211_bss_conf {int basic_rates; int arp_addr_cnt; scalar_t__ assoc; int qos; int * arp_addr_list; int ht_operation_mode; TYPE_1__ chandef; scalar_t__ ps; int ibss_joined; int bssid; int cqm_rssi_thold; int cqm_rssi_hyst; scalar_t__ enable_beacon; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 struct ieee80211_sta* FUNC_1 (struct ieee80211_vif*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct wl1271*,struct wl12xx_vif*,int,int ) ;
 int FUNC_8 (struct wl1271*,struct wl12xx_vif*,int,int ,int ) ;
 int FUNC_9 (struct wl1271*,struct wl12xx_vif*,int ) ;
 int FUNC_10 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_11 (struct wl1271*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_12 (struct wl1271*,struct ieee80211_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_13 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (struct wl1271*,struct wl12xx_vif*,int) ;
 int FUNC_16 (struct wl1271*,int,size_t) ;
 int FUNC_17 (struct wl1271*,int ) ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_20 (struct wl1271*,struct wl12xx_vif*) ;
 struct wl12xx_vif* FUNC_21 (struct ieee80211_vif*) ;
 int FUNC_22 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_23 (struct wl1271*,struct ieee80211_sta_ht_cap*,int,int ,int ) ;
 int FUNC_24 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_25 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_26 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_bss_conf*,int) ;
 int FUNC_27 (struct wl1271*,struct wl12xx_vif*) ;

__attribute__((used)) static void FUNC_28(struct wl1271 *VAR_28,
     struct ieee80211_vif *VAR_29,
     struct ieee80211_bss_conf *VAR_30,
     u32 VAR_31)
{
 struct wl12xx_vif *VAR_32 = FUNC_21(VAR_29);
 bool VAR_33 = 0;
 bool VAR_34 = (VAR_32->bss_type == VAR_13);
 bool VAR_35 = 0;
 u32 VAR_36 = 0;
 int VAR_37;
 struct ieee80211_sta *VAR_38;
 bool VAR_39 = 0;
 struct ieee80211_sta_ht_cap VAR_40;

 if (VAR_34) {
  VAR_37 = FUNC_11(VAR_28, VAR_29, VAR_30,
           VAR_31);
  if (VAR_37 < 0)
   goto out;
 }

 if (VAR_31 & VAR_10) {
  if (VAR_30->ibss_joined) {
   FUNC_5(VAR_24, &VAR_32->flags);
   VAR_35 = 1;
  } else {
   FUNC_27(VAR_28, VAR_32);
   FUNC_19(VAR_28, VAR_32);
  }
 }

 if ((VAR_31 & VAR_6) && VAR_35)
  VAR_33 = 1;


 if ((VAR_31 & VAR_4) && VAR_35)
  VAR_33 = 1;

 if ((VAR_31 & VAR_5) && VAR_35) {
  FUNC_14(VAR_16, "ad-hoc beaconing: %s",
        VAR_30->enable_beacon ? "enabled" : "disabled");

  VAR_33 = 1;
 }

 if (VAR_31 & VAR_8) {
  bool VAR_41 = 0;
  if (VAR_30->cqm_rssi_thold)
   VAR_41 = 1;
  VAR_37 = FUNC_8(VAR_28, VAR_32, VAR_41,
        VAR_30->cqm_rssi_thold,
        VAR_30->cqm_rssi_hyst);
  if (VAR_37 < 0)
   goto out;
  VAR_32->rssi_thold = VAR_30->cqm_rssi_thold;
 }

 if (VAR_31 & (VAR_7 | VAR_9 |
         VAR_3)) {
  FUNC_3();
  VAR_38 = FUNC_1(VAR_29, VAR_30->bssid);
  if (VAR_38) {
   u8 *VAR_42 = VAR_38->ht_cap.mcs.rx_mask;


   VAR_36 = VAR_38->supp_rates[VAR_32->band];
   if (VAR_38->ht_cap.ht_supported)
    VAR_36 |=
     (VAR_42[0] << VAR_18) |
     (VAR_42[1] << VAR_19);
   VAR_40 = VAR_38->ht_cap;
   VAR_39 = 1;
  }

  FUNC_4();
 }

 if (VAR_31 & VAR_7) {
  if (!FUNC_2(VAR_30->bssid)) {
   VAR_37 = FUNC_26(VAR_28, VAR_32, VAR_30,
            VAR_36);
   if (VAR_37 < 0)
    goto out;


   VAR_33 = 1;
  } else {
   VAR_37 = FUNC_22(VAR_28, VAR_32);
   if (VAR_37 < 0)
    goto out;
  }
 }

 if (VAR_31 & VAR_10) {
  FUNC_14(VAR_16, "ibss_joined: %d",
        VAR_30->ibss_joined);

  if (VAR_30->ibss_joined) {
   u32 VAR_43 = VAR_30->basic_rates;
   VAR_32->basic_rate_set =
    FUNC_16(VAR_28, VAR_43,
           VAR_32->band);
   VAR_32->basic_rate =
    FUNC_17(VAR_28,
             VAR_32->basic_rate_set);


   VAR_32->rate_set = VAR_15;
   VAR_37 = FUNC_10(VAR_28, VAR_32);
   if (VAR_37 < 0)
    goto out;
  }
 }

 VAR_37 = FUNC_12(VAR_28, VAR_29, VAR_30, VAR_31);
 if (VAR_37 < 0)
  goto out;

 if (VAR_33) {
  VAR_37 = FUNC_24(VAR_28, VAR_32);
  if (VAR_37 < 0) {
   FUNC_18("cmd join failed %d", VAR_37);
   goto out;
  }
 }

 if (VAR_31 & VAR_3) {
  if (VAR_30->assoc) {
   VAR_37 = FUNC_25(VAR_28, VAR_32, VAR_30,
            VAR_36);
   if (VAR_37 < 0)
    goto out;

   if (FUNC_6(VAR_27, &VAR_32->flags))
    FUNC_20(VAR_28, VAR_32);
  } else {
   FUNC_27(VAR_28, VAR_32);
  }
 }

 if (VAR_31 & VAR_11) {
  if ((VAR_30->ps) &&
      FUNC_6(VAR_26, &VAR_32->flags) &&
      !FUNC_6(VAR_25, &VAR_32->flags)) {
   int VAR_44;
   char *VAR_45;

   if (VAR_28->conf.conn.forced_ps) {
    VAR_44 = VAR_23;
    VAR_45 = "forced";
   } else {
    VAR_44 = VAR_22;
    VAR_45 = "auto";
   }

   FUNC_14(VAR_17, "%s ps enabled", VAR_45);

   VAR_37 = FUNC_15(VAR_28, VAR_32, VAR_44);
   if (VAR_37 < 0)
    FUNC_18("enter %s ps failed %d",
            VAR_45, VAR_37);
  } else if (!VAR_30->ps &&
      FUNC_6(VAR_25, &VAR_32->flags)) {
   FUNC_14(VAR_17, "auto ps disabled");

   VAR_37 = FUNC_15(VAR_28, VAR_32,
       VAR_21);
   if (VAR_37 < 0)
    FUNC_18("exit auto ps failed %d", VAR_37);
  }
 }


 if (VAR_39 &&
     (VAR_31 & VAR_9)) {
  bool VAR_46 =
   VAR_30->chandef.width != VAR_20;

  VAR_37 = FUNC_23(VAR_28,
          &VAR_40,
          VAR_46,
          VAR_32->rate_set,
          VAR_32->sta.hlid);
  if (VAR_37 < 0) {
   FUNC_18("Set ht cap failed %d", VAR_37);
   goto out;

  }

  if (VAR_46) {
   VAR_37 = FUNC_9(VAR_28, VAR_32,
      VAR_30->ht_operation_mode);
   if (VAR_37 < 0) {
    FUNC_18("Set ht information failed %d",
            VAR_37);
    goto out;
   }
  }
 }


 if ((VAR_31 & VAR_2) ||
     (!VAR_34 && (VAR_31 & VAR_12))) {
  __be32 VAR_47 = VAR_30->arp_addr_list[0];
  VAR_32->sta.qos = VAR_30->qos;
  FUNC_0(VAR_32->bss_type != VAR_14);

  if (VAR_30->arp_addr_cnt == 1 && VAR_30->assoc) {
   VAR_32->ip_addr = VAR_47;






   VAR_37 = FUNC_13(VAR_28, VAR_32);
   if (VAR_37 < 0) {
    FUNC_18("build arp rsp failed: %d", VAR_37);
    goto out;
   }

   VAR_37 = FUNC_7(VAR_28, VAR_32,
    (VAR_0 |
     VAR_1),
    VAR_47);
  } else {
   VAR_32->ip_addr = 0;
   VAR_37 = FUNC_7(VAR_28, VAR_32, 0, VAR_47);
  }

  if (VAR_37 < 0)
   goto out;
 }

out:
 return;
}
