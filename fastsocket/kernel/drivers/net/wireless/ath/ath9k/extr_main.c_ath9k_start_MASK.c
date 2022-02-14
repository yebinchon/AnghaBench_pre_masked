
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct ieee80211_channel* chan; } ;
struct TYPE_5__ {TYPE_1__ chandef; } ;
struct ieee80211_hw {TYPE_2__ conf; struct ath_softc* priv; } ;
struct ieee80211_channel {int center_freq; } ;
struct ath_softc {int mutex; int sc_pcu_lock; struct ath_hw* sc_ah; int sc_flags; } ;
struct TYPE_6__ {int hw_caps; } ;
struct ath_hw {int reset_power_on; int imask; int is_monitoring; scalar_t__ led_pin; TYPE_3__ caps; int caldata; int intr_ref_cnt; } ;
struct ath_common {int dummy; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct ath9k_channel* FUNC_0 (struct ieee80211_hw*,struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*,scalar_t__,int ) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*,int) ;
 int FUNC_5 (struct ath_hw*,struct ath9k_channel*,int ,int) ;
 int FUNC_6 (struct ath_hw*,scalar_t__,int ) ;
 int FUNC_7 (struct ath_softc*) ;
 int FUNC_8 (struct ath_softc*) ;
 int FUNC_9 (struct ath_softc*,int) ;
 int FUNC_10 (struct ath_common*,int ,char*,int ) ;
 int FUNC_11 (struct ath_common*,char*,int,int ) ;
 int FUNC_12 (struct ath_softc*) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct ieee80211_hw *VAR_16)
{
 struct ath_softc *VAR_17 = VAR_16->priv;
 struct ath_hw *VAR_18 = VAR_17->sc_ah;
 struct ath_common *VAR_19 = FUNC_3(VAR_18);
 struct ieee80211_channel *VAR_20 = VAR_16->conf.chandef.chan;
 struct ath9k_channel *VAR_21;
 int VAR_22;

 FUNC_10(VAR_19, VAR_14,
  "Starting driver with initial channel: %d MHz\n",
  VAR_20->center_freq);

 FUNC_8(VAR_17);
 FUNC_15(&VAR_17->mutex);

 VAR_21 = FUNC_0(VAR_16, VAR_18);


 FUNC_4(VAR_18, 0);
 FUNC_17(&VAR_17->sc_pcu_lock);

 FUNC_13(&VAR_18->intr_ref_cnt, -1);

 VAR_22 = FUNC_5(VAR_18, VAR_21, VAR_18->caldata, 0);
 if (VAR_22) {
  FUNC_11(VAR_19,
   "Unable to reset hardware; reset status %d (freq %u MHz)\n",
   VAR_22, VAR_20->center_freq);
  VAR_18->reset_power_on = 0;
 }


 VAR_18->imask = VAR_13 | VAR_9 |
      VAR_12 | VAR_5 |
      VAR_6;

 if (VAR_18->caps.hw_caps & VAR_1)
  VAR_18->imask |= VAR_10 |
        VAR_11 |
        VAR_3;
 else
  VAR_18->imask |= VAR_8;

 VAR_18->imask |= VAR_7;

 if (VAR_18->caps.hw_caps & VAR_2)
  VAR_18->imask |= VAR_4;

 FUNC_12(VAR_17);

 FUNC_14(VAR_15, &VAR_17->sc_flags);
 VAR_17->sc_ah->is_monitoring = 0;

 if (!FUNC_9(VAR_17, 0))
  VAR_18->reset_power_on = 0;

 if (VAR_18->led_pin >= 0) {
  FUNC_2(VAR_18, VAR_18->led_pin,
        VAR_0);
  FUNC_6(VAR_18, VAR_18->led_pin, 0);
 }





 FUNC_1(VAR_17->sc_ah);

 FUNC_18(&VAR_17->sc_pcu_lock);

 FUNC_16(&VAR_17->mutex);

 FUNC_7(VAR_17);

 return 0;
}
