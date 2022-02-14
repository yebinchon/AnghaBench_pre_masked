
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hw {struct ath_softc* priv; } ;
struct TYPE_3__ {int enabled; int endless; } ;
struct ath_softc {int spectral_mode; TYPE_1__ spec_config; struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;
struct ath_common {int dummy; } ;
typedef enum spectral_mode { ____Placeholder_spectral_mode } spectral_mode ;
struct TYPE_4__ {int (* spectral_scan_config ) (struct ath_hw*,TYPE_1__*) ;int spectral_scan_trigger; } ;






 struct ath_common* FUNC_0 (struct ath_hw*) ;
 TYPE_2__* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_common*,char*) ;
 int FUNC_5 (struct ath_hw*,TYPE_1__*) ;

int FUNC_6(struct ieee80211_hw *VAR_0,
          enum spectral_mode VAR_1)
{
 struct ath_softc *VAR_2 = VAR_0->priv;
 struct ath_hw *VAR_3 = VAR_2->sc_ah;
 struct ath_common *VAR_4 = FUNC_0(VAR_3);

 if (!FUNC_1(VAR_3)->spectral_scan_trigger) {
  FUNC_4(VAR_4, "spectrum analyzer not implemented on this hardware\n");
  return -1;
 }

 switch (VAR_1) {
 case 129:
  VAR_2->spec_config.enabled = 0;
  break;
 case 131:



  VAR_2->spec_config.endless = 1;
  VAR_2->spec_config.enabled = 1;
  break;
 case 130:
 case 128:
  VAR_2->spec_config.endless = 0;
  VAR_2->spec_config.enabled = 1;
  break;
 default:
  return -1;
 }

 FUNC_3(VAR_2);
 FUNC_1(VAR_3)->spectral_scan_config(VAR_3, &VAR_2->spec_config);
 FUNC_2(VAR_2);

 VAR_2->spectral_mode = VAR_1;

 return 0;
}
