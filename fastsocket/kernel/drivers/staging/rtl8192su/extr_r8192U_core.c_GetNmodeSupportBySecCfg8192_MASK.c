
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {struct ieee80211_device* ieee80211; } ;
struct net_device {int dummy; } ;
struct ieee80211_network {int capability; } ;
struct ieee80211_device {int wpa_ie_len; size_t tx_keyidx; int* wpa_ie; scalar_t__ host_encrypt; struct ieee80211_crypt_data** crypt; struct ieee80211_network current_network; } ;
struct ieee80211_crypt_data {TYPE_1__* ops; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int*,int ,int) ;
 scalar_t__ FUNC_2 (int ,char*) ;

bool FUNC_3(struct net_device*VAR_4)
{

 struct r8192_priv* VAR_5 = FUNC_0(VAR_4);
 struct ieee80211_device* VAR_6 = VAR_5->ieee80211;
 struct ieee80211_network * VAR_7 = &VAR_6->current_network;
        int VAR_8= VAR_6->wpa_ie_len;
        struct ieee80211_crypt_data* VAR_9;
        int VAR_10;
 return VAR_0;

        VAR_9 = VAR_6->crypt[VAR_6->tx_keyidx];

        VAR_10 = (VAR_7->capability & VAR_1) || (VAR_6->host_encrypt && VAR_9 && VAR_9->ops && (0 == FUNC_2(VAR_9->ops->name,"WEP")));


 if(VAR_10 && (VAR_8 == 0)) {

  return 0;

 } else if((VAR_8 != 0)) {


  if (((VAR_6->wpa_ie[0] == 0xdd) && (!FUNC_1(&(VAR_6->wpa_ie[14]),VAR_2,4))) || ((VAR_6->wpa_ie[0] == 0x30) && (!FUNC_1(&VAR_6->wpa_ie[10],VAR_3, 4))))
   return 1;
  else
   return 0;
 } else {
  return 1;
 }

 return 1;

}
