
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_mci_profile {int num_a2dp; int num_sco; } ;
struct ath_btcoex {scalar_t__ stomp_audio; struct ath_mci_profile mci; } ;
struct ath_softc {struct ath_btcoex btcoex; struct ath_hw* sc_ah; } ;
struct TYPE_2__ {int avgbrssi; } ;
struct ath_hw {TYPE_1__ stats; } ;



__attribute__((used)) static void FUNC_0(struct ath_softc *VAR_0)
{
 struct ath_hw *VAR_1 = VAR_0->sc_ah;
 struct ath_btcoex *VAR_2 = &VAR_0->btcoex;
 struct ath_mci_profile *VAR_3 = &VAR_2->mci;

 if (!VAR_3->num_sco && !VAR_3->num_a2dp)
  return;

 if (VAR_1->stats.avgbrssi > 25) {
  VAR_2->stomp_audio = 0;
  return;
 }

 VAR_2->stomp_audio++;
}
