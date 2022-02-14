
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct usbnet {int net; } ;
struct rndis_wlan_private {int encr_tx_key_index; struct usbnet* usbdev; } ;
struct net_device {int dummy; } ;
struct ndis_80211_ssid {int essid; int length; } ;
struct ieee80211_channel {int center_freq; } ;
struct TYPE_2__ {int n_ciphers_pairwise; int n_akm_suites; int wpa_versions; int * akm_suites; int * ciphers_pairwise; int cipher_group; } ;
struct cfg80211_connect_params {int ssid_len; int ssid; int bssid; int key_idx; int key_len; int key; int auth_type; TYPE_1__ crypto; int privacy; struct ieee80211_channel* channel; } ;
typedef int ssid ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usbnet*,int ,int ,int ) ;
 int FUNC_1 (struct usbnet*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct usbnet*,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct usbnet*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (struct ndis_80211_ssid*,int ,int) ;
 int FUNC_10 (int ,char*,int,...) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct usbnet*,int ,int ,int) ;
 int FUNC_15 (struct usbnet*,int ) ;
 int FUNC_16 (struct usbnet*,int) ;
 int FUNC_17 (struct usbnet*,int,int) ;
 int FUNC_18 (struct usbnet*,struct ndis_80211_ssid*) ;
 int FUNC_19 (struct usbnet*,int ) ;
 int FUNC_20 (struct usbnet*) ;
 int FUNC_21 (struct usbnet*) ;
 int FUNC_22 (struct usbnet*) ;
 struct rndis_wlan_private* FUNC_23 (struct wiphy*) ;

__attribute__((used)) static int FUNC_24(struct wiphy *VAR_6, struct net_device *VAR_7,
     struct cfg80211_connect_params *VAR_8)
{
 struct rndis_wlan_private *VAR_9 = FUNC_23(VAR_6);
 struct usbnet *VAR_10 = VAR_9->usbdev;
 struct ieee80211_channel *VAR_11 = VAR_8->channel;
 struct ndis_80211_ssid VAR_12;
 int VAR_13 = VAR_3;
 int VAR_14 = VAR_3;
 int VAR_15 = VAR_5;
 int VAR_16, VAR_17, VAR_18, VAR_19 = -1;

 if (VAR_11)
  VAR_19 = FUNC_4(VAR_11->center_freq);

 VAR_14 = FUNC_13(VAR_8->crypto.cipher_group);
 for (VAR_17 = 0; VAR_17 < VAR_8->crypto.n_ciphers_pairwise; VAR_17++)
  VAR_13 |=
   FUNC_13(VAR_8->crypto.ciphers_pairwise[VAR_17]);

 if (VAR_8->crypto.n_ciphers_pairwise > 0 &&
   VAR_13 == VAR_3) {
  FUNC_11(VAR_10->net, "Unsupported pairwise cipher\n");
  return -VAR_0;
 }

 for (VAR_17 = 0; VAR_17 < VAR_8->crypto.n_akm_suites; VAR_17++)
  VAR_15 |=
   FUNC_12(VAR_8->crypto.akm_suites[VAR_17]);

 if (VAR_8->crypto.n_akm_suites > 0 &&
   VAR_15 == VAR_5) {
  FUNC_11(VAR_10->net, "Invalid keymgmt\n");
  return -VAR_0;
 }

 FUNC_10(VAR_10->net, "cfg80211.connect('%.32s':[%pM]:%d:[%d,0x%x:0x%x]:[0x%x:0x%x]:0x%x)\n",
     VAR_8->ssid, VAR_8->bssid, VAR_19,
     VAR_8->privacy, VAR_8->crypto.wpa_versions, VAR_8->auth_type,
     VAR_14, VAR_13, VAR_15);

 if (FUNC_5(VAR_10))
  FUNC_3(VAR_10, 0);

 VAR_18 = FUNC_19(VAR_10, VAR_1);
 if (VAR_18 < 0) {
  FUNC_10(VAR_10->net, "connect: set_infra_mode failed, %d\n",
      VAR_18);
  goto err_turn_radio_on;
 }

 VAR_18 = FUNC_14(VAR_10, VAR_8->crypto.wpa_versions, VAR_8->auth_type,
        VAR_15);
 if (VAR_18 < 0) {
  FUNC_10(VAR_10->net, "connect: set_auth_mode failed, %d\n",
      VAR_18);
  goto err_turn_radio_on;
 }

 FUNC_20(VAR_10);

 VAR_18 = FUNC_17(VAR_10, VAR_13, VAR_14);
 if (VAR_18 < 0) {
  FUNC_10(VAR_10->net, "connect: set_encr_mode failed, %d\n",
      VAR_18);
  goto err_turn_radio_on;
 }

 if (VAR_11) {
  VAR_18 = FUNC_16(VAR_10, VAR_19);
  if (VAR_18 < 0) {
   FUNC_10(VAR_10->net, "connect: set_channel failed, %d\n",
       VAR_18);
   goto err_turn_radio_on;
  }
 }

 if (VAR_8->key && ((VAR_14 | VAR_13) & VAR_4)) {
  VAR_9->encr_tx_key_index = VAR_8->key_idx;
  VAR_18 = FUNC_0(VAR_10, VAR_8->key, VAR_8->key_len, VAR_8->key_idx);
  if (VAR_18 < 0) {
   FUNC_10(VAR_10->net, "connect: add_wep_key failed, %d (%d, %d)\n",
       VAR_18, VAR_8->key_len, VAR_8->key_idx);
   goto err_turn_radio_on;
  }
 }

 if (VAR_8->bssid && !FUNC_7(VAR_8->bssid) &&
    !FUNC_6(VAR_8->bssid)) {
  VAR_18 = FUNC_15(VAR_10, VAR_8->bssid);
  if (VAR_18 < 0) {
   FUNC_10(VAR_10->net, "connect: set_bssid failed, %d\n",
       VAR_18);
   goto err_turn_radio_on;
  }
 } else
  FUNC_1(VAR_10);

 VAR_16 = VAR_8->ssid_len;
 if (VAR_16 > VAR_2)
  VAR_16 = VAR_2;

 FUNC_9(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.length = FUNC_2(VAR_16);
 FUNC_8(VAR_12.essid, VAR_8->ssid, VAR_16);




 FUNC_21(VAR_10);
 FUNC_22(VAR_10);

 VAR_18 = FUNC_18(VAR_10, &VAR_12);
 if (VAR_18 < 0)
  FUNC_10(VAR_10->net, "connect: set_essid failed, %d\n", VAR_18);
 return VAR_18;

err_turn_radio_on:
 FUNC_3(VAR_10, 1);

 return VAR_18;
}
