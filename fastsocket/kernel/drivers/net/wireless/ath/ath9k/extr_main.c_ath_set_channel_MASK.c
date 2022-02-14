
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int dummy; } ;
struct ath_softc {int sc_flags; } ;
struct ath9k_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath_softc*,struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct ath_softc *VAR_2, struct ieee80211_hw *VAR_3,
      struct ath9k_channel *VAR_4)
{
 int VAR_5;

 if (FUNC_1(VAR_1, &VAR_2->sc_flags))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2, VAR_4);

 return VAR_5;
}
