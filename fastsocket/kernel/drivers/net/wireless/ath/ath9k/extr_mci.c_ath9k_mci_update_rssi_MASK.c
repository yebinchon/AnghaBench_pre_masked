
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ath_btcoex {int rssi_count; } ;
struct ath_softc {struct ath_hw* sc_ah; struct ath_btcoex btcoex; } ;
struct TYPE_4__ {int avgbrssi; } ;
struct ath9k_hw_mci {int config; } ;
struct TYPE_3__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_2__ stats; TYPE_1__ btcoex_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_softc*,int,int) ;
 int FUNC_1 (struct ath_softc*) ;

void FUNC_2(struct ath_softc *VAR_2)
{
 struct ath_hw *VAR_3 = VAR_2->sc_ah;
 struct ath_btcoex *VAR_4 = &VAR_2->btcoex;
 struct ath9k_hw_mci *VAR_5 = &VAR_2->sc_ah->btcoex_hw.mci;

 FUNC_1(VAR_2);

 if (!(VAR_5->config & VAR_1))
  return;

 if (VAR_3->stats.avgbrssi >= 40) {
  if (VAR_4->rssi_count < 0)
   VAR_4->rssi_count = 0;
  if (++VAR_4->rssi_count >= VAR_0) {
   VAR_4->rssi_count = 0;
   FUNC_0(VAR_2, 0, 1);
  }
 } else {
  if (VAR_4->rssi_count > 0)
   VAR_4->rssi_count = 0;
  if (--VAR_4->rssi_count <= -VAR_0) {
   VAR_4->rssi_count = 0;
   FUNC_0(VAR_2, 0, 0);
  }
 }
}
