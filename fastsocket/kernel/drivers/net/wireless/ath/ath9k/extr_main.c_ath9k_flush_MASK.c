
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct TYPE_2__ {int * txq; } ;
struct ath_softc {int mutex; int tx_complete_work; int sc_pcu_lock; TYPE_1__ tx; int sc_flags; struct ath_hw* sc_ah; } ;
struct ath_hw {int ah_flags; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath_softc*,int) ;
 int VAR_3 ;
 int FUNC_1 (struct ath_softc*,int *) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_common*,int ,char*) ;
 int FUNC_6 (struct ath_softc*) ;
 int FUNC_7 (struct ath_softc*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ieee80211_hw*,int *,int ) ;
 int FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 int FUNC_16 (int,int) ;

__attribute__((used)) static void FUNC_17(struct ieee80211_hw *VAR_4, u32 VAR_5, bool VAR_6)
{
 struct ath_softc *VAR_7 = VAR_4->priv;
 struct ath_hw *VAR_8 = VAR_7->sc_ah;
 struct ath_common *VAR_9 = FUNC_2(VAR_8);
 int VAR_10 = 200;
 int VAR_11, VAR_12;
 bool VAR_13;

 FUNC_11(&VAR_7->mutex);
 FUNC_8(&VAR_7->tx_complete_work);

 if (VAR_8->ah_flags & VAR_0) {
  FUNC_5(VAR_9, VAR_1, "Device has been unplugged!\n");
  FUNC_12(&VAR_7->mutex);
  return;
 }

 if (FUNC_15(VAR_3, &VAR_7->sc_flags)) {
  FUNC_5(VAR_9, VAR_1, "Device not present\n");
  FUNC_12(&VAR_7->mutex);
  return;
 }

 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  bool VAR_14 = 0;

  if (VAR_12)
   FUNC_16(1000, 2000);

  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   if (!FUNC_0(VAR_7, VAR_11))
    continue;

   VAR_14 = FUNC_1(VAR_7, &VAR_7->tx.txq[VAR_11]);

   if (VAR_14)
    break;
  }

  if (!VAR_14)
      break;
 }

 if (VAR_6) {
  FUNC_4(VAR_7);
  FUNC_13(&VAR_7->sc_pcu_lock);
  VAR_13 = FUNC_6(VAR_7);
  FUNC_14(&VAR_7->sc_pcu_lock);

  if (!VAR_13)
   FUNC_7(VAR_7);

  FUNC_3(VAR_7);
  FUNC_10(VAR_4);
 }

 FUNC_9(VAR_4, &VAR_7->tx_complete_work, 0);
 FUNC_12(&VAR_7->mutex);
}
