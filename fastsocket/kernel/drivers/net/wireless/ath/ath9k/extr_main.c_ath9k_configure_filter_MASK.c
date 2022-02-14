
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct TYPE_2__ {unsigned int rxfilter; } ;
struct ath_softc {int sc_ah; TYPE_1__ rx; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (int ,int ,char*,int ) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_2,
       unsigned int VAR_3,
       unsigned int *VAR_4,
       u64 VAR_5)
{
 struct ath_softc *VAR_6 = VAR_2->priv;
 u32 VAR_7;

 VAR_3 &= VAR_1;
 *VAR_4 &= VAR_1;

 VAR_6->rx.rxfilter = *VAR_4;
 FUNC_3(VAR_6);
 VAR_7 = FUNC_4(VAR_6);
 FUNC_1(VAR_6->sc_ah, VAR_7);
 FUNC_2(VAR_6);

 FUNC_5(FUNC_0(VAR_6->sc_ah), VAR_0, "Set HW RX filter: 0x%x\n",
  VAR_7);
}
