
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {unsigned long data; int function; } ;
struct ieee80211_device {int open_wep; int host_encrypt; int host_decrypt; int ieee802_1x; int* last_rxseq_num; int* last_rxfrag_num; scalar_t__* last_packet_time; int * ibss_mac_hash; scalar_t__ raw_tx; scalar_t__ privacy_invoked; scalar_t__ drop_unencrypted; scalar_t__ tkip_countermeasures; scalar_t__ wpa_enabled; scalar_t__ wpax_type_set; int wpax_suitlist_lock; int lock; TYPE_1__ crypt_deinit_timer; int crypt_deinit_list; int scan_age; int fts; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 struct net_device* FUNC_3 (int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 () ;
 int VAR_3 ;
 int FUNC_6 (struct ieee80211_device*) ;
 int FUNC_7 (struct ieee80211_device*) ;
 int FUNC_8 (struct ieee80211_device*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_1__*) ;
 struct ieee80211_device* FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *) ;

struct net_device *FUNC_14(int VAR_4)
{
 struct ieee80211_device *VAR_5;
 struct net_device *VAR_6;
 int VAR_7,VAR_8;

 FUNC_0("Initializing...\n");

 VAR_6 = FUNC_3(sizeof(struct ieee80211_device) + VAR_4);
 if (!VAR_6) {
  FUNC_1("Unable to network device.\n");
  goto failed;
 }
 VAR_5 = FUNC_12(VAR_6);

 VAR_5->dev = VAR_6;

 VAR_8 = FUNC_6(VAR_5);
 if (VAR_8) {
  FUNC_1("Unable to allocate beacon storage: %d\n",
    VAR_8);
  goto failed;
 }
 FUNC_7(VAR_5);


 VAR_5->fts = VAR_0;
 VAR_5->scan_age = VAR_1;
 VAR_5->open_wep = 1;


 VAR_5->host_encrypt = 1;
 VAR_5->host_decrypt = 1;
 VAR_5->ieee802_1x = 1;

 FUNC_2(&VAR_5->crypt_deinit_list);
 FUNC_11(&VAR_5->crypt_deinit_timer);
 VAR_5->crypt_deinit_timer.data = (unsigned long)VAR_5;
 VAR_5->crypt_deinit_timer.function = VAR_3;

 FUNC_13(&VAR_5->lock);
 FUNC_13(&VAR_5->wpax_suitlist_lock);

 VAR_5->wpax_type_set = 0;
  VAR_5->wpa_enabled = 0;
  VAR_5->tkip_countermeasures = 0;
  VAR_5->drop_unencrypted = 0;
  VAR_5->privacy_invoked = 0;
  VAR_5->ieee802_1x = 1;
 VAR_5->raw_tx = 0;

 FUNC_8(VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  FUNC_2(&VAR_5->ibss_mac_hash[VAR_7]);

 for (VAR_7 = 0; VAR_7 < 17; VAR_7++) {
   VAR_5->last_rxseq_num[VAR_7] = -1;
   VAR_5->last_rxfrag_num[VAR_7] = -1;
   VAR_5->last_packet_time[VAR_7] = 0;
 }

 FUNC_9();
 FUNC_10();
 FUNC_5();
 return VAR_6;

 failed:
 if (VAR_6)
  FUNC_4(VAR_6);
 return ((void*)0);
}
