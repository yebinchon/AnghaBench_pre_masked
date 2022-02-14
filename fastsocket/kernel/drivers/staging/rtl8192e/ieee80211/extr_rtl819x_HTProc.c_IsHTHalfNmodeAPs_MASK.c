
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bdRT2RTAggregation; } ;
struct ieee80211_network {TYPE_1__ bssht; scalar_t__ broadcom_cap_exist; int bssid; scalar_t__ ralink_cap_exist; } ;
struct ieee80211_device {struct ieee80211_network current_network; } ;
struct TYPE_4__ {int bHalfNMode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 TYPE_2__* VAR_9 ;

bool FUNC_1(struct ieee80211_device* VAR_10)
{
 bool VAR_11 = 0;
 struct ieee80211_network* VAR_12 = &VAR_10->current_network;





 if((FUNC_0(VAR_12->bssid, VAR_2, 3)==0) ||
       (FUNC_0(VAR_12->bssid, VAR_1, 3)==0) ||
       (FUNC_0(VAR_12->bssid, VAR_7, 3)==0) ||
       (FUNC_0(VAR_12->bssid, VAR_3, 3)==0) ||
       (FUNC_0(VAR_12->bssid, VAR_0, 3)==0) ||
       (VAR_12->ralink_cap_exist))
  VAR_11 = 1;
 else if((FUNC_0(VAR_12->bssid, VAR_8, 3)==0) ||
          (FUNC_0(VAR_12->bssid, VAR_4, 3)==0)||
          (FUNC_0(VAR_12->bssid, VAR_5, 3)==0)||
          (FUNC_0(VAR_12->bssid, VAR_6, 3)==0) ||
          (VAR_12->broadcom_cap_exist))
        VAR_11 = 1;
 else if(VAR_12->bssht.bdRT2RTAggregation)
  VAR_11 = 1;
 else
  VAR_11 = 0;

 return VAR_11;
}
