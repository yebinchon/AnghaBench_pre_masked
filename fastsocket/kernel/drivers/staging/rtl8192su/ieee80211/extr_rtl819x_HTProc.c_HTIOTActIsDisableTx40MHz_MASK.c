
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ bdSupportHT; } ;
struct ieee80211_network {TYPE_1__ bssht; } ;
struct ieee80211_device {scalar_t__ pairwise_key_type; scalar_t__ group_key_type; TYPE_2__* pHTInfo; } ;
struct TYPE_4__ {scalar_t__ IOTPeer; } ;
typedef TYPE_2__* PRT_HIGH_THROUGHPUT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

u8
FUNC_0(struct ieee80211_device* VAR_4,struct ieee80211_network *VAR_5)
{
 u8 VAR_6 = 0;

 PRT_HIGH_THROUGHPUT VAR_7 = VAR_4->pHTInfo;
 if( (VAR_2 == VAR_4->pairwise_key_type) ||
  (VAR_3 == VAR_4->pairwise_key_type) ||
  (VAR_2 == VAR_4->group_key_type) ||
  (VAR_3 == VAR_4->group_key_type) ||
  (VAR_1 == VAR_4->pairwise_key_type) )
 {
  if((VAR_7->IOTPeer==VAR_0) && (VAR_5->bssht.bdSupportHT))
   VAR_6 = 1;
 }

 return VAR_6;
}
