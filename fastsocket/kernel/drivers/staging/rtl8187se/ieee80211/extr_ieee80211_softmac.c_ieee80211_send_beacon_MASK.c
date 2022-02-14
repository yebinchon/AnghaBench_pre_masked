
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct TYPE_5__ {scalar_t__ beacon_interval; } ;
struct TYPE_4__ {int tx_beacons; } ;
struct ieee80211_device {TYPE_3__ beacon_timer; scalar_t__ beacon_txing; TYPE_2__ current_network; TYPE_1__ softmac_stats; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct ieee80211_device*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct sk_buff*,struct ieee80211_device*) ;

void FUNC_5(struct ieee80211_device *VAR_1)
{
 struct sk_buff *VAR_2;



 VAR_2 = FUNC_3(VAR_1);

 if (VAR_2){
  FUNC_4(VAR_2, VAR_1);
  VAR_1->softmac_stats.tx_beacons++;
  FUNC_2(VAR_2);
 }


 VAR_1->beacon_timer.expires = VAR_0 +
  (FUNC_0( VAR_1->current_network.beacon_interval -5));


 if(VAR_1->beacon_txing)
  FUNC_1(&VAR_1->beacon_timer);

}
