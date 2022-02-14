
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int txop; int cw_max; int cw_min; int aifs; } ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_txq_info {int tqi_burst_time; int tqi_cw_max; int tqi_cw_min; int tqi_aifs; } ;
struct TYPE_3__ {scalar_t__ q_tx_num; } ;
struct TYPE_4__ {TYPE_1__ cap_queues; } ;
struct ath5k_hw {int lock; TYPE_2__ ah_capabilities; } ;


 int FUNC_0 (struct ath5k_hw*,int ,char*,scalar_t__,int ,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ath5k_hw*,char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (struct ath5k_hw*,scalar_t__,struct ath5k_txq_info*) ;
 int FUNC_3 (struct ath5k_hw*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct ath5k_hw*,scalar_t__,struct ath5k_txq_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211_hw *VAR_2, struct ieee80211_vif *VAR_3, u16 VAR_4,
       const struct ieee80211_tx_queue_params *VAR_5)
{
 struct ath5k_hw *VAR_6 = VAR_2->priv;
 struct ath5k_txq_info VAR_7;
 int VAR_8 = 0;

 if (VAR_4 >= VAR_6->ah_capabilities.cap_queues.q_tx_num)
  return 0;

 FUNC_5(&VAR_6->lock);

 FUNC_2(VAR_6, VAR_4, &VAR_7);

 VAR_7.tqi_aifs = VAR_5->aifs;
 VAR_7.tqi_cw_min = VAR_5->cw_min;
 VAR_7.tqi_cw_max = VAR_5->cw_max;
 VAR_7.tqi_burst_time = VAR_5->txop * 32;

 FUNC_0(VAR_6, VAR_0,
    "Configure tx [queue %d],  "
    "aifs: %d, cw_min: %d, cw_max: %d, txop: %d\n",
    VAR_4, VAR_5->aifs, VAR_5->cw_min,
    VAR_5->cw_max, VAR_5->txop);

 if (FUNC_4(VAR_6, VAR_4, &VAR_7)) {
  FUNC_1(VAR_6,
     "Unable to update hardware queue %u!\n", VAR_4);
  VAR_8 = -VAR_1;
 } else
  FUNC_3(VAR_6, VAR_4);

 FUNC_6(&VAR_6->lock);

 return VAR_8;
}
