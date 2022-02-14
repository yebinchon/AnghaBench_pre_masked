
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tx_probe_rq; } ;
struct ieee80211_device {TYPE_1__ softmac_stats; } ;


 struct sk_buff* FUNC_0 (struct ieee80211_device*) ;
 int FUNC_1 (struct sk_buff*,struct ieee80211_device*) ;

void FUNC_2(struct ieee80211_device *VAR_0)
{
 struct sk_buff *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1){
  FUNC_1(VAR_1, VAR_0);
  VAR_0->softmac_stats.tx_probe_rq++;

 }
}
