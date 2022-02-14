
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int hw; int irq; TYPE_1__* sc_ah; } ;
struct TYPE_2__ {int ah_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (int ,struct ath_softc*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 struct ieee80211_hw* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_2)
{
 struct ieee80211_hw *VAR_3 = FUNC_3(VAR_2);
 struct ath_softc *VAR_4 = VAR_3->priv;

 if (!VAR_1)
  VAR_4->sc_ah->ah_flags |= VAR_0;
 FUNC_0(VAR_4);
 FUNC_1(VAR_4->irq, VAR_4);
 FUNC_2(VAR_4->hw);
}
