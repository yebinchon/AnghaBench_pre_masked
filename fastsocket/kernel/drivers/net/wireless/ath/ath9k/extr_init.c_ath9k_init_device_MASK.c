
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ieee80211_hw {int wiphy; } ;
struct TYPE_2__ {int default_trigger; } ;
struct ath_softc {struct ieee80211_hw* hw; TYPE_1__ led_cdev; struct ath_hw* sc_ah; } ;
struct ath_regulatory {int alpha2; } ;
struct ath_hw {int dummy; } ;
struct ath_common {struct ath_regulatory regulatory; } ;
struct ath_bus_ops {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (int ,struct ath_softc*,struct ath_bus_ops const*) ;
 int FUNC_6 (struct ath_softc*) ;
 int VAR_3 ;
 int FUNC_7 (struct ath_softc*,struct ieee80211_hw*) ;
 int VAR_4 ;
 int FUNC_8 (struct ath_common*,char*) ;
 int FUNC_9 (struct ath_softc*) ;
 int FUNC_10 (struct ath_regulatory*) ;
 int FUNC_11 (struct ath_regulatory*,int ,int ) ;
 int FUNC_12 (struct ath_softc*) ;
 int FUNC_13 (struct ath_softc*,int ) ;
 int FUNC_14 (struct ath_softc*) ;
 int FUNC_15 (struct ath_softc*,int ) ;
 int FUNC_16 (struct ieee80211_hw*,int ,int ,int ) ;
 int FUNC_17 (struct ieee80211_hw*) ;
 int FUNC_18 (struct ieee80211_hw*) ;
 int FUNC_19 (int ,int ) ;

int FUNC_20(u16 VAR_5, struct ath_softc *VAR_6,
      const struct ath_bus_ops *VAR_7)
{
 struct ieee80211_hw *VAR_8 = VAR_6->hw;
 struct ath_common *VAR_9;
 struct ath_hw *VAR_10;
 int VAR_11 = 0;
 struct ath_regulatory *VAR_12;


 VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_7);
 if (VAR_11)
  return VAR_11;

 VAR_10 = VAR_6->sc_ah;
 VAR_9 = FUNC_3(VAR_10);
 FUNC_7(VAR_6, VAR_8);


 VAR_11 = FUNC_11(&VAR_9->regulatory, VAR_6->hw->wiphy,
         VAR_3);
 if (VAR_11)
  goto deinit;

 VAR_12 = &VAR_9->regulatory;


 VAR_11 = FUNC_15(VAR_6, VAR_1);
 if (VAR_11 != 0)
  goto deinit;


 VAR_11 = FUNC_13(VAR_6, VAR_0);
 if (VAR_11 != 0)
  goto deinit;

 FUNC_6(VAR_6);
 VAR_11 = FUNC_17(VAR_8);
 if (VAR_11)
  goto rx_cleanup;

 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11) {
  FUNC_8(VAR_9, "Unable to create debugfs files\n");
  goto unregister;
 }


 if (!FUNC_10(VAR_12)) {
  VAR_11 = FUNC_19(VAR_8->wiphy, VAR_12->alpha2);
  if (VAR_11)
   goto debug_cleanup;
 }

 FUNC_9(VAR_6);
 FUNC_14(VAR_6);

 return 0;

debug_cleanup:
 FUNC_1(VAR_6);
unregister:
 FUNC_18(VAR_8);
rx_cleanup:
 FUNC_12(VAR_6);
deinit:
 FUNC_2(VAR_6);
 return VAR_11;
}
