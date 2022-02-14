
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_device {int dev; scalar_t__ (* is_ap_in_wep_tkip ) (int ) ;TYPE_1__* pHTInfo; } ;
struct TYPE_2__ {scalar_t__ IOTPeer; } ;
typedef TYPE_1__* PRT_HIGH_THROUGHPUT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

bool FUNC_3(struct ieee80211_device* VAR_8)
{
 bool VAR_9 = 0;
       PRT_HIGH_THROUGHPUT VAR_10 = VAR_8->pHTInfo;
 if(VAR_8->is_ap_in_wep_tkip && VAR_8->is_ap_in_wep_tkip(VAR_8->dev))
 {
  if( (VAR_10->IOTPeer != VAR_3) &&
      (VAR_10->IOTPeer != VAR_5) &&
      (VAR_10->IOTPeer != VAR_4) )
   VAR_9 = 1;
 }

 return VAR_9;
}
