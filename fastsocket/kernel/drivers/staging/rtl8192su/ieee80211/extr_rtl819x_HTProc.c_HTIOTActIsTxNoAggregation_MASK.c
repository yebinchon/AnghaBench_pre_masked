
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_network {int dummy; } ;
struct ieee80211_device {scalar_t__ pairwise_key_type; scalar_t__ group_key_type; TYPE_1__* pHTInfo; } ;
struct TYPE_2__ {scalar_t__ IOTPeer; } ;
typedef TYPE_1__* PRT_HIGH_THROUGHPUT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

u8
FUNC_0(struct ieee80211_device* VAR_5,struct ieee80211_network *VAR_6)
{
 u8 VAR_7 = 0;

 PRT_HIGH_THROUGHPUT VAR_8 = VAR_5->pHTInfo;
 if( (VAR_3 == VAR_5->pairwise_key_type) ||
  (VAR_4 == VAR_5->pairwise_key_type) ||
  (VAR_3 == VAR_5->group_key_type) ||
  (VAR_4 == VAR_5->group_key_type) ||
  (VAR_2 == VAR_5->pairwise_key_type) )
 {
  if(VAR_8->IOTPeer==VAR_0 ||
      VAR_8->IOTPeer==VAR_1)
   VAR_7 = 1;
 }

 return VAR_7;
}
