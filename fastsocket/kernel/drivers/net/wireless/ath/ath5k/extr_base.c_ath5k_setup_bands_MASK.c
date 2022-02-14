
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_supported_band {size_t band; int n_bitrates; int n_channels; struct ieee80211_supported_band* channels; TYPE_3__* bitrates; } ;
struct ieee80211_rate {int dummy; } ;
struct ieee80211_hw {TYPE_2__* wiphy; struct ath5k_hw* priv; } ;
struct TYPE_4__ {int cap_mode; } ;
struct ath5k_hw {scalar_t__ ah_version; struct ieee80211_supported_band* channels; TYPE_3__** rates; struct ieee80211_supported_band* sbands; TYPE_1__ ah_capabilities; } ;
struct TYPE_6__ {int hw_value; int hw_value_short; } ;
struct TYPE_5__ {struct ieee80211_supported_band** bands; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ieee80211_supported_band*) ;
 int FUNC_1 (int) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct ath5k_hw*) ;
 int * VAR_7 ;
 void* FUNC_3 (struct ath5k_hw*,struct ieee80211_supported_band*,int ,int) ;
 int FUNC_4 (struct ath5k_hw*,struct ieee80211_supported_band*) ;
 int FUNC_5 (TYPE_3__*,int *,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211_hw *VAR_8)
{
 struct ath5k_hw *VAR_9 = VAR_8->priv;
 struct ieee80211_supported_band *VAR_10;
 int VAR_11, VAR_12 = 0;
 int VAR_13;

 FUNC_1(FUNC_0(VAR_9->sbands) < VAR_6);
 VAR_11 = FUNC_0(VAR_9->channels);


 VAR_10 = &VAR_9->sbands[VAR_4];
 VAR_10->band = VAR_4;
 VAR_10->bitrates = &VAR_9->rates[VAR_4][0];

 if (FUNC_6(VAR_3, VAR_9->ah_capabilities.cap_mode)) {

  FUNC_5(VAR_10->bitrates, &VAR_7[0],
         sizeof(struct ieee80211_rate) * 12);
  VAR_10->n_bitrates = 12;

  VAR_10->channels = VAR_9->channels;
  VAR_10->n_channels = FUNC_3(VAR_9, VAR_10->channels,
     VAR_3, VAR_11);

  VAR_8->wiphy->bands[VAR_4] = VAR_10;
  VAR_12 = VAR_10->n_channels;
  VAR_11 -= VAR_12;
 } else if (FUNC_6(VAR_2, VAR_9->ah_capabilities.cap_mode)) {

  FUNC_5(VAR_10->bitrates, &VAR_7[0],
         sizeof(struct ieee80211_rate) * 4);
  VAR_10->n_bitrates = 4;





  if (VAR_9->ah_version == VAR_0) {
   for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
    VAR_10->bitrates[VAR_13].hw_value =
     VAR_10->bitrates[VAR_13].hw_value & 0xF;
    VAR_10->bitrates[VAR_13].hw_value_short =
     VAR_10->bitrates[VAR_13].hw_value_short & 0xF;
   }
  }

  VAR_10->channels = VAR_9->channels;
  VAR_10->n_channels = FUNC_3(VAR_9, VAR_10->channels,
     VAR_2, VAR_11);

  VAR_8->wiphy->bands[VAR_4] = VAR_10;
  VAR_12 = VAR_10->n_channels;
  VAR_11 -= VAR_12;
 }
 FUNC_4(VAR_9, VAR_10);


 if (FUNC_6(VAR_1, VAR_9->ah_capabilities.cap_mode)) {
  VAR_10 = &VAR_9->sbands[VAR_5];
  VAR_10->band = VAR_5;
  VAR_10->bitrates = &VAR_9->rates[VAR_5][0];

  FUNC_5(VAR_10->bitrates, &VAR_7[4],
         sizeof(struct ieee80211_rate) * 8);
  VAR_10->n_bitrates = 8;

  VAR_10->channels = &VAR_9->channels[VAR_12];
  VAR_10->n_channels = FUNC_3(VAR_9, VAR_10->channels,
     VAR_1, VAR_11);

  VAR_8->wiphy->bands[VAR_5] = VAR_10;
 }
 FUNC_4(VAR_9, VAR_10);

 FUNC_2(VAR_9);

 return 0;
}
