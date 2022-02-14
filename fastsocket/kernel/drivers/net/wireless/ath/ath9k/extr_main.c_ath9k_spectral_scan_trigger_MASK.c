
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int spectral_mode; struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;
struct TYPE_2__ {int (* spectral_scan_trigger ) (struct ath_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 TYPE_1__* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_softc*) ;
 int FUNC_6 (struct ieee80211_hw*,int ) ;
 int FUNC_7 (struct ath_common*,char*) ;
 int FUNC_8 (struct ath_hw*) ;

void FUNC_9(struct ieee80211_hw *VAR_2)
{
 struct ath_softc *VAR_3 = VAR_2->priv;
 struct ath_hw *VAR_4 = VAR_3->sc_ah;
 struct ath_common *VAR_5 = FUNC_0(VAR_4);
 u32 VAR_6;

 if (!FUNC_2(VAR_4)->spectral_scan_trigger) {
  FUNC_7(VAR_5, "spectrum analyzer not implemented on this hardware\n");
  return;
 }

 FUNC_5(VAR_3);
 VAR_6 = FUNC_1(VAR_4);
 FUNC_3(VAR_4, VAR_6 |
     VAR_1 |
     VAR_0);






 FUNC_6(VAR_2, VAR_3->spectral_mode);
 FUNC_2(VAR_4)->spectral_scan_trigger(VAR_4);
 FUNC_4(VAR_3);
}
