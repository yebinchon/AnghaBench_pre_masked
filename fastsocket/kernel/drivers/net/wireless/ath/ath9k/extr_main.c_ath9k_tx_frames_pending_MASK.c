
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_hw {struct ath_softc* priv; } ;
struct TYPE_2__ {int * txq; } ;
struct ath_softc {TYPE_1__ tx; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,int) ;
 scalar_t__ FUNC_1 (struct ath_softc*,int *) ;

__attribute__((used)) static bool FUNC_2(struct ieee80211_hw *VAR_1)
{
 struct ath_softc *VAR_2 = VAR_1->priv;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (!FUNC_0(VAR_2, VAR_3))
   continue;

  if (FUNC_1(VAR_2, &VAR_2->tx.txq[VAR_3]))
   return 1;
 }
 return 0;
}
