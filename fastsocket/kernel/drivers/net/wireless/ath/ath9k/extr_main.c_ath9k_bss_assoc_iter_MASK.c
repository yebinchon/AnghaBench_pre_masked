
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_bss_conf {scalar_t__ assoc; } ;
struct ieee80211_vif {struct ieee80211_bss_conf bss_conf; } ;
struct ath_softc {int sc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,struct ieee80211_vif*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, u8 *VAR_2, struct ieee80211_vif *VAR_3)
{
 struct ath_softc *VAR_4 = VAR_1;
 struct ieee80211_bss_conf *VAR_5 = &VAR_3->bss_conf;

 if (FUNC_1(VAR_0, &VAR_4->sc_flags))
  return;

 if (VAR_5->assoc)
  FUNC_0(VAR_4, VAR_3);
}
