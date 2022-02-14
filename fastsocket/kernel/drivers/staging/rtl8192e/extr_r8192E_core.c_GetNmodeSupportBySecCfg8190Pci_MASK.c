
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r8192_priv {struct ieee80211_device* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int capability; } ;
struct ieee80211_device {int wpa_ie_len; size_t tx_keyidx; int* wpa_ie; scalar_t__ host_encrypt; TYPE_1__ current_network; struct ieee80211_crypt_data** crypt; } ;
struct ieee80211_crypt_data {TYPE_2__* ops; } ;
struct TYPE_6__ {scalar_t__ GroupEncAlgorithm; scalar_t__ PairwiseEncAlgorithm; } ;
struct TYPE_5__ {int name; } ;


 scalar_t__ TKIP_Encryption ;
 scalar_t__ WEP104_Encryption ;
 scalar_t__ WEP40_Encryption ;
 int WLAN_CAPABILITY_PRIVACY ;
 int ccmp_ie ;
 int ccmp_rsn_ie ;
 struct r8192_priv* ieee80211_priv (struct net_device*) ;
 int memcmp (int*,int ,int) ;
 TYPE_3__* pSecInfo ;
 scalar_t__ strcmp (int ,char*) ;

__attribute__((used)) static bool GetNmodeSupportBySecCfg8190Pci(struct net_device*dev)
{

 struct r8192_priv* priv = ieee80211_priv(dev);
 struct ieee80211_device* ieee = priv->ieee80211;
        int wpa_ie_len= ieee->wpa_ie_len;
        struct ieee80211_crypt_data* crypt;
        int encrypt;

        crypt = ieee->crypt[ieee->tx_keyidx];
        encrypt = (ieee->current_network.capability & WLAN_CAPABILITY_PRIVACY) || (ieee->host_encrypt && crypt && crypt->ops && (0 == strcmp(crypt->ops->name,"WEP")));


 if(encrypt && (wpa_ie_len == 0)) {

  return 0;

 } else if((wpa_ie_len != 0)) {


  if (((ieee->wpa_ie[0] == 0xdd) && (!memcmp(&(ieee->wpa_ie[14]),ccmp_ie,4))) || ((ieee->wpa_ie[0] == 0x30) && (!memcmp(&ieee->wpa_ie[10],ccmp_rsn_ie, 4))))
   return 1;
  else
   return 0;
 } else {

  return 1;
 }
 return 1;

}
