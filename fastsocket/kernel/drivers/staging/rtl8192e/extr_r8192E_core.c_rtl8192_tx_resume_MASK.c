
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct r8192_priv {struct ieee80211_device* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct ieee80211_device {scalar_t__ (* check_nic_enough_desc ) (struct net_device*,int) ;TYPE_1__ stats; int (* softmac_data_hard_start_xmit ) (struct sk_buff*,struct net_device*,int ) ;int * skb_waitQ; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct sk_buff*,struct net_device*,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3)
{
 struct r8192_priv *VAR_4 = (struct r8192_priv *)FUNC_0(VAR_3);
 struct ieee80211_device *VAR_5 = VAR_4->ieee80211;
 struct sk_buff *VAR_6;
 int VAR_7;

 for(VAR_7 = VAR_0; VAR_7 < VAR_2;VAR_7++) {
  while((!FUNC_2(&VAR_5->skb_waitQ[VAR_7]))&&
    (VAR_4->ieee80211->check_nic_enough_desc(VAR_3,VAR_7) > 0)) {

   VAR_6 = FUNC_1(&VAR_5->skb_waitQ[VAR_7]);

   VAR_5->softmac_data_hard_start_xmit(VAR_6,VAR_3,0 );






  }
 }
}
