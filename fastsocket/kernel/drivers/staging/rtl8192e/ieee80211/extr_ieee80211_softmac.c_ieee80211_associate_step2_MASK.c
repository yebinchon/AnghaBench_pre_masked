
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_network {int dummy; } ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct TYPE_5__ {int tx_ass_rq; } ;
struct ieee80211_device {TYPE_2__ associate_timer; TYPE_1__ softmac_stats; struct ieee80211_network current_network; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct ieee80211_device*) ;
 struct sk_buff* FUNC_4 (struct ieee80211_network*,struct ieee80211_device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,struct ieee80211_device*) ;

void FUNC_7(struct ieee80211_device *VAR_2)
{
 struct sk_buff* VAR_3;
 struct ieee80211_network *VAR_4 = &VAR_2->current_network;

 FUNC_2(&VAR_2->associate_timer);

 FUNC_0("Sending association request\n");

 VAR_2->softmac_stats.tx_ass_rq++;
 VAR_3=FUNC_4(VAR_4, VAR_2);
 if (!VAR_3)
  FUNC_3(VAR_2);
 else{
  FUNC_6(VAR_3, VAR_2);
  FUNC_5(&VAR_2->associate_timer, VAR_1 + (VAR_0/2));





 }
}
