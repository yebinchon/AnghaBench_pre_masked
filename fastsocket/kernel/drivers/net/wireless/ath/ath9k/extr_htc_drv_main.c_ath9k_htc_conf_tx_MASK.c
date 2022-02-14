
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int txop; int cw_max; int cw_min; int aifs; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath_common {int dummy; } ;
struct ath9k_tx_queue_info {int tqi_burstTime; int tqi_cwmax; int tqi_cwmin; int tqi_aifs; } ;
struct ath9k_htc_priv {int* hwq_map; int mutex; TYPE_1__* ah; } ;
struct TYPE_2__ {scalar_t__ opmode; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath9k_htc_priv*) ;
 struct ath_common* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct ath_common*,int ,char*,scalar_t__,int,int ,int ,int ,int) ;
 int FUNC_5 (struct ath_common*,char*) ;
 int FUNC_6 (struct ath9k_htc_priv*,int,struct ath9k_tx_queue_info*) ;
 int FUNC_7 (scalar_t__,int*) ;
 int FUNC_8 (struct ath9k_tx_queue_info*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_4,
        struct ieee80211_vif *VAR_5, u16 VAR_6,
        const struct ieee80211_tx_queue_params *VAR_7)
{
 struct ath9k_htc_priv *VAR_8 = VAR_4->priv;
 struct ath_common *VAR_9 = FUNC_3(VAR_8->ah);
 struct ath9k_tx_queue_info VAR_10;
 int VAR_11 = 0, VAR_12;

 if (VAR_6 >= VAR_2)
  return 0;

 FUNC_9(&VAR_8->mutex);
 FUNC_2(VAR_8);

 FUNC_8(&VAR_10, 0, sizeof(struct ath9k_tx_queue_info));

 VAR_10.tqi_aifs = VAR_7->aifs;
 VAR_10.tqi_cwmin = VAR_7->cw_min;
 VAR_10.tqi_cwmax = VAR_7->cw_max;
 VAR_10.tqi_burstTime = VAR_7->txop * 32;

 VAR_12 = FUNC_7(VAR_6, VAR_8->hwq_map);

 FUNC_4(VAR_9, VAR_0,
  "Configure tx [queue/hwq] [%d/%d],  aifs: %d, cw_min: %d, cw_max: %d, txop: %d\n",
  VAR_6, VAR_12, VAR_7->aifs, VAR_7->cw_min,
  VAR_7->cw_max, VAR_7->txop);

 VAR_11 = FUNC_6(VAR_8, VAR_12, &VAR_10);
 if (VAR_11) {
  FUNC_5(VAR_9, "TXQ Update failed\n");
  goto out;
 }

 if ((VAR_8->ah->opmode == VAR_3) &&
     (VAR_12 == VAR_8->hwq_map[VAR_1]))
      FUNC_0(VAR_8);
out:
 FUNC_1(VAR_8);
 FUNC_10(&VAR_8->mutex);

 return VAR_11;
}
