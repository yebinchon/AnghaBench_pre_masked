
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_beacon_config {int enable_beacon; } ;
struct ath_softc {int sc_flags; struct ath_beacon_config cur_beacon_conf; struct ath_hw* sc_ah; } ;
struct ath_hw {scalar_t__ opmode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5(struct ath_softc *VAR_5)
{
 struct ath_hw *VAR_6 = VAR_5->sc_ah;
 struct ath_beacon_config *VAR_7 = &VAR_5->cur_beacon_conf;





 if (VAR_6->opmode == VAR_0) {
  if (!VAR_7->enable_beacon)
   goto stop_ani;
 } else if (VAR_6->opmode == VAR_1) {
  if (!VAR_7->enable_beacon) {




   if (!FUNC_4(VAR_4, &VAR_5->sc_flags))
    goto stop_ani;
  }
 } else if (VAR_6->opmode == VAR_2) {
  if (!FUNC_4(VAR_4, &VAR_5->sc_flags))
   goto stop_ani;
 }

 if (!FUNC_4(VAR_3, &VAR_5->sc_flags)) {
  FUNC_3(VAR_3, &VAR_5->sc_flags);
  FUNC_0(VAR_5);
 }

 return;

stop_ani:
 FUNC_2(VAR_3, &VAR_5->sc_flags);
 FUNC_1(VAR_5);
}
