
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct p54_common {int conf_mutex; int * qos_params; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int txop; int cw_max; int cw_min; int aifs; } ;
struct ieee80211_hw {size_t queues; struct p54_common* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct p54_common*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_1,
         struct ieee80211_vif *VAR_2, u16 VAR_3,
         const struct ieee80211_tx_queue_params *VAR_4)
{
 struct p54_common *VAR_5 = VAR_1->priv;
 int VAR_6;

 FUNC_1(&VAR_5->conf_mutex);
 if (VAR_3 < VAR_1->queues) {
  FUNC_0(VAR_5->qos_params[VAR_3], VAR_4->aifs,
   VAR_4->cw_min, VAR_4->cw_max, VAR_4->txop);
  VAR_6 = FUNC_3(VAR_5);
 } else
  VAR_6 = -VAR_0;
 FUNC_2(&VAR_5->conf_mutex);
 return VAR_6;
}
