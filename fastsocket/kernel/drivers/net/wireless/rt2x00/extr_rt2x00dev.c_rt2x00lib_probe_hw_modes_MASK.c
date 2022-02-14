
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rt2x00_dev {TYPE_4__* bands; struct ieee80211_hw* hw; } ;
struct ieee80211_rate {int dummy; } ;
struct ieee80211_hw {TYPE_3__* wiphy; } ;
struct ieee80211_channel {int dummy; } ;
struct hw_mode_spec {int supported_rates; unsigned int num_channels; int supported_bands; int ht; TYPE_2__* channels_info; TYPE_1__* channels; } ;
struct TYPE_8__ {int n_channels; unsigned int n_bitrates; int ht_cap; struct ieee80211_rate* bitrates; struct ieee80211_channel* channels; } ;
struct TYPE_7__ {TYPE_4__** bands; } ;
struct TYPE_6__ {int max_power; } ;
struct TYPE_5__ {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (struct ieee80211_channel*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct rt2x00_dev*,char*) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct ieee80211_channel*,int ,int ,unsigned int) ;
 int FUNC_6 (struct ieee80211_rate*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_7(struct rt2x00_dev *VAR_8,
        struct hw_mode_spec *VAR_9)
{
 struct ieee80211_hw *VAR_10 = VAR_8->hw;
 struct ieee80211_channel *VAR_11;
 struct ieee80211_rate *VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;

 VAR_13 = 0;
 if (VAR_9->supported_rates & VAR_6)
  VAR_13 += 4;
 if (VAR_9->supported_rates & VAR_7)
  VAR_13 += 8;

 VAR_11 = FUNC_0(VAR_9->num_channels, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_13, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  goto exit_free_channels;




 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
  FUNC_6(&VAR_12[VAR_14], VAR_14, FUNC_4(VAR_14));




 for (VAR_14 = 0; VAR_14 < VAR_9->num_channels; VAR_14++) {
  FUNC_5(&VAR_11[VAR_14],
      VAR_9->channels[VAR_14].channel,
      VAR_9->channels_info[VAR_14].max_power, VAR_14);
 }






 if (VAR_9->supported_bands & VAR_4) {
  VAR_8->bands[VAR_2].n_channels = 14;
  VAR_8->bands[VAR_2].n_bitrates = VAR_13;
  VAR_8->bands[VAR_2].channels = VAR_11;
  VAR_8->bands[VAR_2].bitrates = VAR_12;
  VAR_10->wiphy->bands[VAR_2] =
      &VAR_8->bands[VAR_2];
  FUNC_2(&VAR_8->bands[VAR_2].ht_cap,
         &VAR_9->ht, sizeof(VAR_9->ht));
 }






 if (VAR_9->supported_bands & VAR_5) {
  VAR_8->bands[VAR_3].n_channels =
      VAR_9->num_channels - 14;
  VAR_8->bands[VAR_3].n_bitrates =
      VAR_13 - 4;
  VAR_8->bands[VAR_3].channels = &VAR_11[14];
  VAR_8->bands[VAR_3].bitrates = &VAR_12[4];
  VAR_10->wiphy->bands[VAR_3] =
      &VAR_8->bands[VAR_3];
  FUNC_2(&VAR_8->bands[VAR_3].ht_cap,
         &VAR_9->ht, sizeof(VAR_9->ht));
 }

 return 0;

 exit_free_channels:
 FUNC_1(VAR_11);
 FUNC_3(VAR_8, "Allocation ieee80211 modes failed\n");
 return -VAR_0;
}
