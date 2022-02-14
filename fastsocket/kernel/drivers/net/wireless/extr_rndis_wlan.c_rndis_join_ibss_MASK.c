
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct usbnet {int net; } ;
struct rndis_wlan_private {struct usbnet* usbdev; } ;
struct net_device {int dummy; } ;
struct ndis_80211_ssid {int essid; int length; } ;
struct ieee80211_channel {int center_freq; } ;
struct TYPE_2__ {struct ieee80211_channel* chan; } ;
struct cfg80211_ibss_params {int ssid_len; int ssid; int bssid; int privacy; TYPE_1__ chandef; } ;
typedef int ssid ;
typedef enum nl80211_auth_type { ____Placeholder_nl80211_auth_type } nl80211_auth_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct usbnet*,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct usbnet*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct ndis_80211_ssid*,int ,int) ;
 int FUNC_9 (int ,char*,int,...) ;
 int FUNC_10 (struct usbnet*,int ,int,int ) ;
 int FUNC_11 (struct usbnet*,int ) ;
 int FUNC_12 (struct usbnet*,int) ;
 int FUNC_13 (struct usbnet*,int,int) ;
 int FUNC_14 (struct usbnet*,struct ndis_80211_ssid*) ;
 int FUNC_15 (struct usbnet*,int ) ;
 int FUNC_16 (struct usbnet*) ;
 int FUNC_17 (struct usbnet*) ;
 int FUNC_18 (struct usbnet*) ;
 struct rndis_wlan_private* FUNC_19 (struct wiphy*) ;

__attribute__((used)) static int FUNC_20(struct wiphy *VAR_7, struct net_device *VAR_8,
     struct cfg80211_ibss_params *VAR_9)
{
 struct rndis_wlan_private *VAR_10 = FUNC_19(VAR_7);
 struct usbnet *VAR_11 = VAR_10->usbdev;
 struct ieee80211_channel *VAR_12 = VAR_9->chandef.chan;
 struct ndis_80211_ssid VAR_13;
 enum nl80211_auth_type VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18 = -1;

 if (VAR_12)
  VAR_18 = FUNC_3(VAR_12->center_freq);






 if (VAR_9->privacy) {
  VAR_14 = VAR_3;
  VAR_16 = VAR_5;
 } else {
  VAR_14 = VAR_2;
  VAR_16 = VAR_4;
 }

 FUNC_9(VAR_11->net, "cfg80211.join_ibss('%.32s':[%pM]:%d:%d)\n",
     VAR_9->ssid, VAR_9->bssid, VAR_18, VAR_9->privacy);

 if (FUNC_4(VAR_11))
  FUNC_2(VAR_11, 0);

 VAR_15 = FUNC_15(VAR_11, VAR_0);
 if (VAR_15 < 0) {
  FUNC_9(VAR_11->net, "join_ibss: set_infra_mode failed, %d\n",
      VAR_15);
  goto err_turn_radio_on;
 }

 VAR_15 = FUNC_10(VAR_11, 0, VAR_14, VAR_6);
 if (VAR_15 < 0) {
  FUNC_9(VAR_11->net, "join_ibss: set_auth_mode failed, %d\n",
      VAR_15);
  goto err_turn_radio_on;
 }

 FUNC_16(VAR_11);

 VAR_15 = FUNC_13(VAR_11, VAR_16, VAR_4);
 if (VAR_15 < 0) {
  FUNC_9(VAR_11->net, "join_ibss: set_encr_mode failed, %d\n",
      VAR_15);
  goto err_turn_radio_on;
 }

 if (VAR_12) {
  VAR_15 = FUNC_12(VAR_11, VAR_18);
  if (VAR_15 < 0) {
   FUNC_9(VAR_11->net, "join_ibss: set_channel failed, %d\n",
       VAR_15);
   goto err_turn_radio_on;
  }
 }

 if (VAR_9->bssid && !FUNC_6(VAR_9->bssid) &&
    !FUNC_5(VAR_9->bssid)) {
  VAR_15 = FUNC_11(VAR_11, VAR_9->bssid);
  if (VAR_15 < 0) {
   FUNC_9(VAR_11->net, "join_ibss: set_bssid failed, %d\n",
       VAR_15);
   goto err_turn_radio_on;
  }
 } else
  FUNC_0(VAR_11);

 VAR_17 = VAR_9->ssid_len;
 if (VAR_17 > VAR_1)
  VAR_17 = VAR_1;

 FUNC_8(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.length = FUNC_1(VAR_17);
 FUNC_7(VAR_13.essid, VAR_9->ssid, VAR_17);


 FUNC_17(VAR_11);
 FUNC_18(VAR_11);

 VAR_15 = FUNC_14(VAR_11, &VAR_13);
 if (VAR_15 < 0)
  FUNC_9(VAR_11->net, "join_ibss: set_essid failed, %d\n",
      VAR_15);
 return VAR_15;

err_turn_radio_on:
 FUNC_2(VAR_11, 1);

 return VAR_15;
}
