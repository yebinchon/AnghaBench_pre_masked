
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_channel {size_t hw_value; } ;
struct ath_softc {struct ieee80211_supported_band* sbands; struct ath_hw* sc_ah; } ;
struct ath_hw {int * curchan; int * channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ieee80211_channel*,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ath_softc *VAR_2, int VAR_3)
{
 struct ieee80211_supported_band *VAR_4;
 struct ieee80211_channel *VAR_5;
 struct ath_hw *VAR_6 = VAR_2->sc_ah;
 int VAR_7;

 VAR_4 = &VAR_2->sbands[VAR_3];
 for (VAR_7 = 0; VAR_7 < VAR_4->n_channels; VAR_7++) {
  VAR_5 = &VAR_4->channels[VAR_7];
  VAR_6->curchan = &VAR_6->channels[VAR_5->hw_value];
  FUNC_0(VAR_6->curchan, VAR_5, VAR_1);
  FUNC_1(VAR_6, VAR_0, 1);
 }
}
