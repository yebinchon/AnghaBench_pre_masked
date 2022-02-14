
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_tx_control {int txq; } ;
struct TYPE_2__ {int cabq; } ;
struct ath_softc {TYPE_1__ beacon; int sc_ah; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_common*,int ,char*,...) ;
 scalar_t__ FUNC_2 (struct ieee80211_hw*,struct sk_buff*,struct ath_tx_control*) ;
 int FUNC_3 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_4 (struct ath_tx_control*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_1, struct sk_buff *VAR_2)
{
 struct ath_softc *VAR_3 = VAR_1->priv;
 struct ath_common *VAR_4 = FUNC_0(VAR_3->sc_ah);
 struct ath_tx_control VAR_5;

 FUNC_4(&VAR_5, 0, sizeof(struct ath_tx_control));
 VAR_5.txq = VAR_3->beacon.cabq;

 FUNC_1(VAR_4, VAR_0, "transmitting CABQ packet, skb: %p\n", VAR_2);

 if (FUNC_2(VAR_1, VAR_2, &VAR_5) != 0) {
  FUNC_1(VAR_4, VAR_0, "CABQ TX failed\n");
  FUNC_3(VAR_1, VAR_2);
 }
}
