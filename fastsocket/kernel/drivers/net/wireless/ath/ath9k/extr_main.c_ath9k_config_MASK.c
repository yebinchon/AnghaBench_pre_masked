
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct survey_info {int dummy; } ;
struct TYPE_6__ {struct ieee80211_channel* chan; } ;
struct ieee80211_conf {int flags; int power_level; scalar_t__ radar_enabled; TYPE_3__ chandef; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct ath_softc* priv; } ;
struct ieee80211_channel {int hw_value; int center_freq; } ;
struct TYPE_4__ {int txpowlimit; } ;
struct ath_softc {int ps_idle; scalar_t__ spectral_mode; int mutex; int curtxpow; TYPE_1__ config; scalar_t__ scanning; struct ath_hw* sc_ah; TYPE_2__* survey; TYPE_2__* cur_survey; int sc_pm_lock; } ;
struct ath_hw {int chip_fullsleep; int is_monitoring; int * channels; int * curchan; } ;
struct ath_common {int cc_lock; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;
struct TYPE_5__ {int filled; } ;


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
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *,struct ieee80211_channel*,int) ;
 int FUNC_1 (struct ath_hw*,int ,int,int *) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (struct ath_hw*) ;
 int FUNC_7 (struct ath_hw*,int) ;
 int FUNC_8 (struct ath_softc*) ;
 int FUNC_9 (struct ath_softc*) ;
 int FUNC_10 (struct ieee80211_hw*) ;
 int FUNC_11 (struct ath_softc*) ;
 int FUNC_12 (struct ath_softc*) ;
 int FUNC_13 (struct ath_softc*) ;
 int FUNC_14 (struct ath_common*,int ,char*,...) ;
 int FUNC_15 (struct ath_common*,char*) ;
 scalar_t__ FUNC_16 (struct ath_softc*,struct ieee80211_hw*,int *) ;
 int FUNC_17 (struct ath_softc*,int) ;
 int FUNC_18 (struct ath_softc*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_2__*,int ,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *,unsigned long) ;
 int FUNC_24 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_25(struct ieee80211_hw *VAR_16, u32 VAR_17)
{
 struct ath_softc *VAR_18 = VAR_16->priv;
 struct ath_hw *VAR_19 = VAR_18->sc_ah;
 struct ath_common *VAR_20 = FUNC_4(VAR_19);
 struct ieee80211_conf *VAR_21 = &VAR_16->conf;
 bool VAR_22 = 0;

 FUNC_9(VAR_18);
 FUNC_21(&VAR_18->mutex);

 if (VAR_17 & VAR_6) {
  VAR_18->ps_idle = !!(VAR_21->flags & VAR_10);
  if (VAR_18->ps_idle) {
   FUNC_13(VAR_18);
   FUNC_12(VAR_18);
  } else {
   FUNC_11(VAR_18);




   VAR_22 = VAR_19->chip_fullsleep;
  }
 }







 if (VAR_17 & VAR_9) {
  unsigned long VAR_23;
  FUNC_23(&VAR_18->sc_pm_lock, VAR_23);
  if (VAR_21->flags & VAR_13)
   FUNC_3(VAR_18);
  else
   FUNC_2(VAR_18);
  FUNC_24(&VAR_18->sc_pm_lock, VAR_23);
 }

 if (VAR_17 & VAR_7) {
  if (VAR_21->flags & VAR_11) {
   FUNC_14(VAR_20, VAR_2, "Monitor mode is enabled\n");
   VAR_18->sc_ah->is_monitoring = 1;
  } else {
   FUNC_14(VAR_20, VAR_2, "Monitor mode is disabled\n");
   VAR_18->sc_ah->is_monitoring = 0;
  }
 }

 if ((VAR_17 & VAR_5) || VAR_22) {
  struct ieee80211_channel *VAR_24 = VAR_16->conf.chandef.chan;
  enum nl80211_channel_type VAR_25 =
   FUNC_19(&VAR_21->chandef);
  int VAR_26 = VAR_24->hw_value;
  int VAR_27 = -1;
  unsigned long VAR_28;

  if (VAR_19->curchan)
   VAR_27 = VAR_19->curchan - &VAR_19->channels[0];

  FUNC_14(VAR_20, VAR_2, "Set channel: %d MHz type: %d\n",
   VAR_24->center_freq, VAR_25);


  FUNC_23(&VAR_20->cc_lock, VAR_28);
  FUNC_18(VAR_18);
  FUNC_24(&VAR_20->cc_lock, VAR_28);

  FUNC_0(&VAR_18->sc_ah->channels[VAR_26],
       VAR_24, VAR_25);







  if (!(VAR_16->conf.flags & VAR_12) &&
      VAR_18->cur_survey != &VAR_18->survey[VAR_26]) {

   if (VAR_18->cur_survey)
    VAR_18->cur_survey->filled &= ~VAR_15;

   VAR_18->cur_survey = &VAR_18->survey[VAR_26];

   FUNC_20(VAR_18->cur_survey, 0, sizeof(struct survey_info));
   VAR_18->cur_survey->filled |= VAR_15;
  } else if (!(VAR_18->survey[VAR_26].filled & VAR_15)) {
   FUNC_20(&VAR_18->survey[VAR_26], 0, sizeof(struct survey_info));
  }

  if (FUNC_16(VAR_18, VAR_16, &VAR_18->sc_ah->channels[VAR_26]) < 0) {
   FUNC_15(VAR_20, "Unable to set channel\n");
   FUNC_22(&VAR_18->mutex);
   FUNC_8(VAR_18);
   return -VAR_4;
  }






  if (VAR_27 >= 0)
   FUNC_17(VAR_18, VAR_27);





  if (VAR_16->conf.radar_enabled) {
   u32 VAR_29;


   FUNC_6(VAR_19);
   VAR_29 = FUNC_5(VAR_19);
   VAR_29 |= VAR_1 |
        VAR_0;
   FUNC_7(VAR_19, VAR_29);
   FUNC_14(VAR_20, VAR_3, "DFS enabled at freq %d\n",
    VAR_24->center_freq);
  } else {

   if (VAR_18->scanning &&
       VAR_18->spectral_mode == VAR_14)
    FUNC_10(VAR_16);
  }
 }

 if (VAR_17 & VAR_8) {
  FUNC_14(VAR_20, VAR_2, "Set power: %d\n", VAR_21->power_level);
  VAR_18->config.txpowlimit = 2 * VAR_21->power_level;
  FUNC_1(VAR_19, VAR_18->curtxpow,
           VAR_18->config.txpowlimit, &VAR_18->curtxpow);
 }

 FUNC_22(&VAR_18->mutex);
 FUNC_8(VAR_18);

 return 0;
}
