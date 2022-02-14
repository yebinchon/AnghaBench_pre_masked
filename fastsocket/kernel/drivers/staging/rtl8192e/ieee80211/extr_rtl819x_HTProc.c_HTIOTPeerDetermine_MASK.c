
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bdRT2RTAggregation; } ;
struct ieee80211_network {int bssid; scalar_t__ atheros_cap_exist; scalar_t__ ralink_cap_exist; scalar_t__ broadcom_cap_exist; TYPE_1__ bssht; } ;
struct ieee80211_device {struct ieee80211_network current_network; TYPE_2__* pHTInfo; } ;
struct TYPE_4__ {void* IOTPeer; } ;
typedef TYPE_2__* PRT_HIGH_THROUGHPUT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (int ,char*,void*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

void FUNC_2(struct ieee80211_device* VAR_18)
{
 PRT_HIGH_THROUGHPUT VAR_19 = VAR_18->pHTInfo;
 struct ieee80211_network* VAR_20 = &VAR_18->current_network;
 if(VAR_20->bssht.bdRT2RTAggregation)
  VAR_19->IOTPeer = VAR_10;
 else if(VAR_20->broadcom_cap_exist)
  VAR_19->IOTPeer = VAR_7;
 else if((FUNC_1(VAR_20->bssid, VAR_17, 3)==0) ||
   (FUNC_1(VAR_20->bssid, VAR_13, 3)==0)||
   (FUNC_1(VAR_20->bssid, VAR_14, 3)==0)||
   (FUNC_1(VAR_20->bssid, VAR_15, 3)==0) )
  VAR_19->IOTPeer = VAR_7;
 else if((FUNC_1(VAR_20->bssid, VAR_2, 3)==0) ||
   (FUNC_1(VAR_20->bssid, VAR_1, 3)==0) ||
   (FUNC_1(VAR_20->bssid, VAR_16, 3)==0) ||
   (FUNC_1(VAR_20->bssid, VAR_5, 3)==0) ||
   (FUNC_1(VAR_20->bssid, VAR_0, 3)==0) ||
    VAR_20->ralink_cap_exist)
  VAR_19->IOTPeer = VAR_9;
 else if((VAR_20->atheros_cap_exist )|| (FUNC_1(VAR_20->bssid, VAR_4, 3) == 0))
  VAR_19->IOTPeer = VAR_6;
 else if(FUNC_1(VAR_20->bssid, VAR_3, 3)==0)
  VAR_19->IOTPeer = VAR_8;
 else
  VAR_19->IOTPeer = VAR_11;

 FUNC_0(VAR_12, "Joseph debug!! IOTPEER: %x\n", VAR_19->IOTPeer);
}
