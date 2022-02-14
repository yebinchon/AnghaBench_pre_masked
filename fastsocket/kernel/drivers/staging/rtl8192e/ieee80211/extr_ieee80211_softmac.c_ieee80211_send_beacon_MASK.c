
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ beacon_interval; } ;
struct TYPE_3__ {int tx_beacons; } ;
struct ieee80211_device {TYPE_2__ current_network; int beacon_timer; scalar_t__ ieee_up; scalar_t__ beacon_txing; TYPE_1__ softmac_stats; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 struct sk_buff* FUNC_1 (struct ieee80211_device*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct sk_buff*,struct ieee80211_device*) ;

void FUNC_4(struct ieee80211_device *VAR_1)
{
 struct sk_buff *VAR_2;
 if(!VAR_1->ieee_up)
  return;

 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2){
  FUNC_3(VAR_2, VAR_1);
  VAR_1->softmac_stats.tx_beacons++;

 }




 if(VAR_1->beacon_txing && VAR_1->ieee_up){


  FUNC_2(&VAR_1->beacon_timer,VAR_0+(FUNC_0(VAR_1->current_network.beacon_interval-5)));
 }

}
