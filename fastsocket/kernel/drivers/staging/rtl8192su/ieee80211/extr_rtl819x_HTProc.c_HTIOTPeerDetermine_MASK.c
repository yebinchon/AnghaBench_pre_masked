
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int RT2RT_HT_Mode; scalar_t__ bdRT2RTAggregation; } ;
struct ieee80211_network {scalar_t__ marvell_cap_exist; int bssid; scalar_t__ atheros_cap_exist; scalar_t__ ralink_cap_exist; scalar_t__ broadcom_cap_exist; TYPE_1__ bssht; } ;
struct ieee80211_device {struct ieee80211_network current_network; TYPE_2__* pHTInfo; } ;
struct TYPE_4__ {void* IOTPeer; } ;
typedef TYPE_2__* PRT_HIGH_THROUGHPUT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_0 (int ,char*,void*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

void FUNC_2(struct ieee80211_device* VAR_23)
{
 PRT_HIGH_THROUGHPUT VAR_24 = VAR_23->pHTInfo;
 struct ieee80211_network* VAR_25 = &VAR_23->current_network;

 if(VAR_25->bssht.bdRT2RTAggregation){
  VAR_24->IOTPeer = VAR_12;
  if(VAR_25->bssht.RT2RT_HT_Mode & VAR_21){
   VAR_24->IOTPeer = VAR_13;
  }
 }
 else if(VAR_25->broadcom_cap_exist)
  VAR_24->IOTPeer = VAR_8;
 else if((FUNC_1(VAR_25->bssid, VAR_22, 3)==0) ||
   (FUNC_1(VAR_25->bssid, VAR_16, 3)==0)||
   (FUNC_1(VAR_25->bssid, VAR_17, 3)==0)||
   (FUNC_1(VAR_25->bssid, VAR_19, 3)==0) )
  VAR_24->IOTPeer = VAR_8;
 else if((FUNC_1(VAR_25->bssid, VAR_2, 3)==0) ||
   (FUNC_1(VAR_25->bssid, VAR_1, 3)==0) ||
   (FUNC_1(VAR_25->bssid, VAR_20, 3)==0) ||
   (FUNC_1(VAR_25->bssid, VAR_6, 3)==0) ||
   (FUNC_1(VAR_25->bssid, VAR_0, 3)==0) ||
    VAR_25->ralink_cap_exist)
  VAR_24->IOTPeer = VAR_11;
 else if((VAR_25->atheros_cap_exist )||
  (FUNC_1(VAR_25->bssid, VAR_4, 3) == 0)||
  (FUNC_1(VAR_25->bssid, VAR_5, 3) == 0))
  VAR_24->IOTPeer = VAR_7;
 else if(FUNC_1(VAR_25->bssid, VAR_3, 3)==0)
  VAR_24->IOTPeer = VAR_9;
 else if ((FUNC_1(VAR_25->bssid, VAR_18, 3) == 0) ||
    VAR_25->marvell_cap_exist)
  VAR_24->IOTPeer = VAR_10;
 else
  VAR_24->IOTPeer = VAR_14;

 FUNC_0(VAR_15, "Joseph debug!! IOTPEER: %x\n", VAR_24->IOTPeer);
}
