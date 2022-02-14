
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct survey_info {struct ieee80211_channel* channel; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_hw {TYPE_1__* wiphy; struct ath_softc* priv; } ;
struct ieee80211_channel {int hw_value; } ;
struct ath_softc {int * survey; int sc_ah; } ;
struct ath_common {int cc_lock; } ;
struct TYPE_2__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct ath_common* FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct survey_info*,int *,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_3, int VAR_4,
        struct survey_info *VAR_5)
{
 struct ath_softc *VAR_6 = VAR_3->priv;
 struct ath_common *VAR_7 = FUNC_0(VAR_6->sc_ah);
 struct ieee80211_supported_band *VAR_8;
 struct ieee80211_channel *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 FUNC_3(&VAR_7->cc_lock, VAR_10);
 if (VAR_4 == 0)
  FUNC_1(VAR_6);

 VAR_8 = VAR_3->wiphy->bands[VAR_1];
 if (VAR_8 && VAR_4 >= VAR_8->n_channels) {
  VAR_4 -= VAR_8->n_channels;
  VAR_8 = ((void*)0);
 }

 if (!VAR_8)
  VAR_8 = VAR_3->wiphy->bands[VAR_2];

 if (!VAR_8 || VAR_4 >= VAR_8->n_channels) {
  FUNC_4(&VAR_7->cc_lock, VAR_10);
  return -VAR_0;
 }

 VAR_9 = &VAR_8->channels[VAR_4];
 VAR_11 = VAR_9->hw_value;
 FUNC_2(VAR_5, &VAR_6->survey[VAR_11], sizeof(*VAR_5));
 VAR_5->channel = VAR_9;
 FUNC_4(&VAR_7->cc_lock, VAR_10);

 return 0;
}
