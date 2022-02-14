
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int txop; int cw_max; int cw_min; int aifs; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_txq {int axq_qnum; } ;
struct TYPE_2__ {struct ath_txq** txq_map; } ;
struct ath_softc {int mutex; TYPE_1__ tx; int sc_ah; } ;
struct ath_common {int dummy; } ;
struct ath9k_tx_queue_info {int tqi_burstTime; int tqi_cwmax; int tqi_cwmin; int tqi_aifs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_common*,int ,char*,size_t,int ,int ,int ,int ,int) ;
 int FUNC_4 (struct ath_common*,char*) ;
 int FUNC_5 (struct ath_softc*,int ,struct ath9k_tx_queue_info*) ;
 int FUNC_6 (struct ath_softc*,size_t,int) ;
 int FUNC_7 (struct ath9k_tx_queue_info*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct ieee80211_hw *VAR_2,
    struct ieee80211_vif *VAR_3, u16 VAR_4,
    const struct ieee80211_tx_queue_params *VAR_5)
{
 struct ath_softc *VAR_6 = VAR_2->priv;
 struct ath_common *VAR_7 = FUNC_0(VAR_6->sc_ah);
 struct ath_txq *VAR_8;
 struct ath9k_tx_queue_info VAR_9;
 int VAR_10 = 0;

 if (VAR_4 >= VAR_1)
  return 0;

 VAR_8 = VAR_6->tx.txq_map[VAR_4];

 FUNC_2(VAR_6);
 FUNC_8(&VAR_6->mutex);

 FUNC_7(&VAR_9, 0, sizeof(struct ath9k_tx_queue_info));

 VAR_9.tqi_aifs = VAR_5->aifs;
 VAR_9.tqi_cwmin = VAR_5->cw_min;
 VAR_9.tqi_cwmax = VAR_5->cw_max;
 VAR_9.tqi_burstTime = VAR_5->txop * 32;

 FUNC_3(VAR_7, VAR_0,
  "Configure tx [queue/halq] [%d/%d], aifs: %d, cw_min: %d, cw_max: %d, txop: %d\n",
  VAR_4, VAR_8->axq_qnum, VAR_5->aifs, VAR_5->cw_min,
  VAR_5->cw_max, VAR_5->txop);

 FUNC_6(VAR_6, VAR_4, VAR_9.tqi_burstTime);
 VAR_10 = FUNC_5(VAR_6, VAR_8->axq_qnum, &VAR_9);
 if (VAR_10)
  FUNC_4(VAR_7, "TXQ Update failed\n");

 FUNC_9(&VAR_6->mutex);
 FUNC_1(VAR_6);

 return VAR_10;
}
