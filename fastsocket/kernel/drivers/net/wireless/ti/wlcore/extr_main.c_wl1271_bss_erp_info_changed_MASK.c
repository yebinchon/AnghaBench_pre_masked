
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271 {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_bss_conf {scalar_t__ use_cts_prot; scalar_t__ use_short_preamble; scalar_t__ use_short_slot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct wl1271*,struct wl12xx_vif*,int ) ;
 int FUNC_1 (struct wl1271*,struct wl12xx_vif*,int ) ;
 int FUNC_2 (struct wl1271*,struct wl12xx_vif*,int ) ;
 int FUNC_3 (char*,int) ;
 struct wl12xx_vif* FUNC_4 (struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_5(struct wl1271 *VAR_9,
           struct ieee80211_vif *VAR_10,
           struct ieee80211_bss_conf *VAR_11,
           u32 VAR_12)
{
 struct wl12xx_vif *VAR_13 = FUNC_4(VAR_10);
 int VAR_14 = 0;

 if (VAR_12 & VAR_4) {
  if (VAR_11->use_short_slot)
   VAR_14 = FUNC_2(VAR_9, VAR_13, VAR_8);
  else
   VAR_14 = FUNC_2(VAR_9, VAR_13, VAR_7);
  if (VAR_14 < 0) {
   FUNC_3("Set slot time failed %d", VAR_14);
   goto out;
  }
 }

 if (VAR_12 & VAR_3) {
  if (VAR_11->use_short_preamble)
   FUNC_1(VAR_9, VAR_13, VAR_1);
  else
   FUNC_1(VAR_9, VAR_13, VAR_0);
 }

 if (VAR_12 & VAR_2) {
  if (VAR_11->use_cts_prot)
   VAR_14 = FUNC_0(VAR_9, VAR_13,
           VAR_6);
  else
   VAR_14 = FUNC_0(VAR_9, VAR_13,
           VAR_5);
  if (VAR_14 < 0) {
   FUNC_3("Set ctsprotect failed %d", VAR_14);
   goto out;
  }
 }

out:
 return VAR_14;
}
