
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_network {int dummy; } ;
struct ieee80211_device {TYPE_1__* pHTInfo; } ;
struct TYPE_2__ {scalar_t__ IOTPeer; } ;
typedef TYPE_1__* PRT_HIGH_THROUGHPUT ;


 scalar_t__ VAR_0 ;

bool FUNC_0(struct ieee80211_device* VAR_1,struct ieee80211_network *VAR_2)
{
 bool VAR_3 = 0;
 PRT_HIGH_THROUGHPUT VAR_4 = VAR_1->pHTInfo;
 {
  if(VAR_4->IOTPeer == VAR_0)
   return 1;

 }
 return VAR_3;
}
