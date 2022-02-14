
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int dummy; } ;
struct ieee80211_hw {struct ar9170* priv; } ;
struct ar9170 {int mutex; int * edcf; TYPE_1__* hw; } ;
struct TYPE_2__ {scalar_t__ queues; } ;


 int VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_0 (struct ar9170*) ;
 int FUNC_1 (int *,struct ieee80211_tx_queue_params const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_2,
          struct ieee80211_vif *VAR_3, u16 VAR_4,
          const struct ieee80211_tx_queue_params *VAR_5)
{
 struct ar9170 *VAR_6 = VAR_2->priv;
 int VAR_7;

 FUNC_2(&VAR_6->mutex);
 if (VAR_4 < VAR_6->hw->queues) {
  FUNC_1(&VAR_6->edcf[VAR_1[VAR_4]], VAR_5, sizeof(*VAR_5));
  VAR_7 = FUNC_0(VAR_6);
 } else {
  VAR_7 = -VAR_0;
 }

 FUNC_3(&VAR_6->mutex);
 return VAR_7;
}
