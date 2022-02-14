
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; size_t queue_mapping; } ;
struct ieee80211_tx_control {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct b43_wl {int hw; int tx_work; int * tx_queue_stopped; int * tx_queue; } ;
struct TYPE_2__ {int nr_frags; } ;


 int FUNC_0 (int ) ;
 struct b43_wl* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 TYPE_1__* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_0,
        struct ieee80211_tx_control *VAR_1,
        struct sk_buff *VAR_2)
{
 struct b43_wl *VAR_3 = FUNC_1(VAR_0);

 if (FUNC_7(VAR_2->len < 2 + 2 + 6)) {

  FUNC_2(VAR_0, VAR_2);
  return;
 }
 FUNC_0(FUNC_6(VAR_2)->nr_frags);

 FUNC_5(&VAR_3->tx_queue[VAR_2->queue_mapping], VAR_2);
 if (!VAR_3->tx_queue_stopped[VAR_2->queue_mapping]) {
  FUNC_3(VAR_3->hw, &VAR_3->tx_work);
 } else {
  FUNC_4(VAR_3->hw, VAR_2->queue_mapping);
 }
}
