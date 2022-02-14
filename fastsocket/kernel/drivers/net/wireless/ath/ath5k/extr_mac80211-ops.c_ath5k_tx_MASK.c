
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct ieee80211_tx_control {int dummy; } ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct TYPE_3__ {size_t q_tx_num; } ;
struct TYPE_4__ {TYPE_1__ cap_queues; } ;
struct ath5k_hw {int * txqs; TYPE_2__ ah_capabilities; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_hw*,struct sk_buff*,int *) ;
 int FUNC_2 (struct ieee80211_hw*,struct sk_buff*) ;
 size_t FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211_hw *VAR_0, struct ieee80211_tx_control *VAR_1,
  struct sk_buff *VAR_2)
{
 struct ath5k_hw *VAR_3 = VAR_0->priv;
 u16 VAR_4 = FUNC_3(VAR_2);

 if (FUNC_0(VAR_4 >= VAR_3->ah_capabilities.cap_queues.q_tx_num)) {
  FUNC_2(VAR_0, VAR_2);
  return;
 }

 FUNC_1(VAR_0, VAR_2, &VAR_3->txqs[VAR_4]);
}
