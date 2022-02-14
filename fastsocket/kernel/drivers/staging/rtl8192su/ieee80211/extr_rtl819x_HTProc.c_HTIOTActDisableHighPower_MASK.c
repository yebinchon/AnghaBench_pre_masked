
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ bdHT1R; } ;
struct ieee80211_network {TYPE_1__ bssht; } ;
struct ieee80211_device {TYPE_2__* pHTInfo; } ;
struct TYPE_4__ {scalar_t__ IOTPeer; } ;
typedef TYPE_2__* PRT_HIGH_THROUGHPUT ;


 scalar_t__ VAR_0 ;

u8
FUNC_0(struct ieee80211_device* VAR_1,struct ieee80211_network *VAR_2)
{
 u8 VAR_3 = 0;
 PRT_HIGH_THROUGHPUT VAR_4 = VAR_1->pHTInfo;

 if(VAR_4->IOTPeer==VAR_0)
 {
  if(VAR_2->bssht.bdHT1R)
   VAR_3 = 1;
 }

 return VAR_3;
}
