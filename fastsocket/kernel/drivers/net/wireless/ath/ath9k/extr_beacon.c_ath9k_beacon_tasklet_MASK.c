
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int enable_beacon; } ;
struct ieee80211_vif {TYPE_2__ bss_conf; } ;
struct TYPE_6__ {int bmisscnt; scalar_t__ updateslot; int slotupdate; int beaconq; int slottime; struct ieee80211_vif** bslot; } ;
struct ath_softc {int nbcnvifs; TYPE_3__ beacon; int hw; int hw_check_work; int sc_flags; struct ath_hw* sc_ah; } ;
struct TYPE_4__ {int hw_caps; } ;
struct ath_hw {int slottime; TYPE_1__ caps; } ;
struct ath_common {int dummy; } ;
struct ath_buf {int bf_daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct ath_softc*) ;
 struct ath_buf* FUNC_1 (int ,struct ieee80211_vif*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*) ;
 struct ath_common* FUNC_4 (struct ath_hw*) ;
 int FUNC_5 (struct ath_hw*) ;
 scalar_t__ FUNC_6 (struct ath_hw*,int ) ;
 int FUNC_7 (struct ath_hw*,int ,int ) ;
 int FUNC_8 (struct ath_hw*,int ) ;
 int FUNC_9 (struct ath_hw*,int ) ;
 int FUNC_10 (struct ath_softc*,int ) ;
 int FUNC_11 (struct ath_softc*) ;
 int FUNC_12 (struct ath_common*,int ,char*,...) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;

void FUNC_15(unsigned long VAR_10)
{
 struct ath_softc *VAR_11 = (struct ath_softc *)VAR_10;
 struct ath_hw *VAR_12 = VAR_11->sc_ah;
 struct ath_common *VAR_13 = FUNC_4(VAR_12);
 struct ath_buf *VAR_14 = ((void*)0);
 struct ieee80211_vif *VAR_15;
 bool VAR_16 = !!(VAR_12->caps.hw_caps & VAR_0);
 int VAR_17;

 if (FUNC_14(VAR_8, &VAR_11->sc_flags)) {
  FUNC_12(VAR_13, VAR_6,
   "reset work is pending, skip beaconing now\n");
  return;
 }
 if (FUNC_6(VAR_12, VAR_11->beacon.beaconq) != 0) {
  VAR_11->beacon.bmisscnt++;

  if (!FUNC_3(VAR_12))
   FUNC_13(VAR_11->hw, &VAR_11->hw_check_work);

  if (VAR_11->beacon.bmisscnt < VAR_3 * VAR_11->nbcnvifs) {
   FUNC_12(VAR_13, VAR_2,
    "missed %u consecutive beacons\n",
    VAR_11->beacon.bmisscnt);
   FUNC_8(VAR_12, VAR_11->beacon.beaconq);
   if (VAR_11->beacon.bmisscnt > 3)
    FUNC_2(VAR_12);
  } else if (VAR_11->beacon.bmisscnt >= VAR_3) {
   FUNC_12(VAR_13, VAR_2, "beacon is officially stuck\n");
   VAR_11->beacon.bmisscnt = 0;
   FUNC_10(VAR_11, VAR_7);
  }

  return;
 }

 VAR_17 = FUNC_0(VAR_11);
 VAR_15 = VAR_11->beacon.bslot[VAR_17];

 if (!VAR_15 || !VAR_15->bss_conf.enable_beacon)
  return;

 VAR_14 = FUNC_1(VAR_11->hw, VAR_15);

 if (VAR_11->beacon.bmisscnt != 0) {
  FUNC_12(VAR_13, VAR_2, "resume beacon xmit after %u misses\n",
   VAR_11->beacon.bmisscnt);
  VAR_11->beacon.bmisscnt = 0;
 }
 if (VAR_11->beacon.updateslot == VAR_9) {
  VAR_11->beacon.updateslot = VAR_4;
  VAR_11->beacon.slotupdate = VAR_17;
 } else if (VAR_11->beacon.updateslot == VAR_4 &&
     VAR_11->beacon.slotupdate == VAR_17) {
  VAR_12->slottime = VAR_11->beacon.slottime;
  FUNC_5(VAR_12);
  VAR_11->beacon.updateslot = VAR_5;
 }

 if (VAR_14) {
  FUNC_11(VAR_11);

  FUNC_12(VAR_13, VAR_1,
   "Transmitting beacon for slot: %d\n", VAR_17);


  FUNC_7(VAR_12, VAR_11->beacon.beaconq, VAR_14->bf_daddr);

  if (!VAR_16)
   FUNC_9(VAR_12, VAR_11->beacon.beaconq);
 }
}
