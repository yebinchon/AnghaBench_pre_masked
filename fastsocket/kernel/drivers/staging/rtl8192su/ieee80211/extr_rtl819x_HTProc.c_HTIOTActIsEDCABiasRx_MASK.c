
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_network {int dummy; } ;
struct ieee80211_device {TYPE_1__* pHTInfo; } ;
struct TYPE_2__ {scalar_t__ IOTPeer; } ;
typedef TYPE_1__* PRT_HIGH_THROUGHPUT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

u8
  FUNC_0(struct ieee80211_device* VAR_3,struct ieee80211_network *VAR_4)
{
 u8 VAR_5 = 0;

 PRT_HIGH_THROUGHPUT VAR_6 = VAR_3->pHTInfo;
 {




  if(VAR_6->IOTPeer==VAR_0 ||
     VAR_6->IOTPeer==VAR_1 ||
     VAR_6->IOTPeer==VAR_2)

   return 1;

 }
 return VAR_5;
}
