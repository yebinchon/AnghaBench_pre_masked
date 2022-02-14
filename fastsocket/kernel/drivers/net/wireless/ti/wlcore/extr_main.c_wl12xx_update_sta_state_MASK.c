
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {scalar_t__ bss_type; scalar_t__ role_id; int channel; int band; int flags; } ;
struct wl1271_station {int hlid; } ;
struct wl1271 {int roc_map; } ;
struct ieee80211_sta {int ht_cap; scalar_t__ drv_priv; } ;
typedef enum ieee80211_sta_state { ____Placeholder_ieee80211_sta_state } ieee80211_sta_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct wl1271*,int *,int,int ) ;
 int FUNC_6 (struct wl1271*,struct wl12xx_vif*,int ) ;
 int FUNC_7 (struct wl1271*,scalar_t__) ;
 int FUNC_8 (struct wl1271*,struct wl12xx_vif*,scalar_t__,int ,int ) ;
 int FUNC_9 (struct wl1271*,struct wl12xx_vif*) ;
 int FUNC_10 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_sta*) ;
 int FUNC_11 (struct wl1271*,struct wl12xx_vif*,struct ieee80211_sta*) ;
 int FUNC_12 (struct wl1271*,struct wl12xx_vif*,struct wl1271_station*,int) ;

__attribute__((used)) static int FUNC_13(struct wl1271 *VAR_10,
       struct wl12xx_vif *VAR_11,
       struct ieee80211_sta *VAR_12,
       enum ieee80211_sta_state VAR_13,
       enum ieee80211_sta_state VAR_14)
{
 struct wl1271_station *VAR_15;
 bool VAR_16 = VAR_11->bss_type == VAR_0;
 bool VAR_17 = VAR_11->bss_type == VAR_1;
 int VAR_18;

 VAR_15 = (struct wl1271_station *)VAR_12->drv_priv;


 if (VAR_16 &&
     VAR_13 == VAR_5 &&
     VAR_14 == VAR_4) {
  VAR_18 = FUNC_10(VAR_10, VAR_11, VAR_12);
  if (VAR_18)
   return VAR_18;

  FUNC_12(VAR_10, VAR_11, VAR_15, 1);
 }


 if (VAR_16 &&
     VAR_13 == VAR_4 &&
     VAR_14 == VAR_5) {

  FUNC_11(VAR_10, VAR_11, VAR_12);

  FUNC_12(VAR_10, VAR_11, VAR_15, 0);
 }


 if (VAR_16 &&
     VAR_14 == VAR_3) {
  VAR_18 = FUNC_6(VAR_10, VAR_11, VAR_15->hlid);
  if (VAR_18 < 0)
   return VAR_18;

  VAR_18 = FUNC_5(VAR_10, &VAR_12->ht_cap, 1,
           VAR_15->hlid);
  if (VAR_18)
   return VAR_18;

  FUNC_12(VAR_10, VAR_11, VAR_15, 0);
 }


 if (VAR_17 &&
     VAR_14 == VAR_3) {
  FUNC_3(VAR_8, &VAR_11->flags);
  VAR_18 = FUNC_9(VAR_10, VAR_11);
  if (VAR_18)
   return VAR_18;
 }

 if (VAR_17 &&
     VAR_13 == VAR_3 &&
     VAR_14 == VAR_2) {
  FUNC_1(VAR_8, &VAR_11->flags);
  FUNC_1(VAR_9, &VAR_11->flags);
 }


 if (VAR_17 &&
     (VAR_14 == VAR_3 ||
      VAR_14 == VAR_5)) {
  if (FUNC_4(VAR_11->role_id, VAR_10->roc_map))
   FUNC_7(VAR_10, VAR_11->role_id);
 }

 if (VAR_17 &&
     VAR_13 == VAR_5 &&
     VAR_14 == VAR_4) {
  if (FUNC_2(VAR_10->roc_map,
       VAR_7) >= VAR_7) {
   FUNC_0(VAR_11->role_id == VAR_6);
   FUNC_8(VAR_10, VAR_11, VAR_11->role_id,
       VAR_11->band, VAR_11->channel);
  }
 }
 return 0;
}
