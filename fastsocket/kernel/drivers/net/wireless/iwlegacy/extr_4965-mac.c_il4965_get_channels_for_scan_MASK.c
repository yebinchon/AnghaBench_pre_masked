
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct il_scan_channel {int type; int dsp_atten; int tx_gain; void* passive_dwell; void* active_dwell; void* channel; } ;
struct il_priv {TYPE_1__* scan_request; } ;
struct il_channel_info {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_channel {int band; scalar_t__ hw_value; int flags; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_2__ {int n_channels; struct ieee80211_channel** channels; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct il_priv*,int,scalar_t__) ;
 struct il_channel_info* FUNC_4 (struct il_priv*,int,scalar_t__) ;
 struct ieee80211_supported_band* FUNC_5 (struct il_priv*,int) ;
 scalar_t__ FUNC_6 (struct il_priv*,int,struct ieee80211_vif*) ;
 scalar_t__ FUNC_7 (struct il_channel_info const*) ;
 int FUNC_8 (struct il_channel_info const*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct il_priv *VAR_4, struct ieee80211_vif *VAR_5,
        enum ieee80211_band VAR_6, u8 VAR_7,
        u8 VAR_8, struct il_scan_channel *VAR_9)
{
 struct ieee80211_channel *VAR_10;
 const struct ieee80211_supported_band *VAR_11;
 const struct il_channel_info *VAR_12;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;
 int VAR_15, VAR_16;
 u16 VAR_17;

 VAR_11 = FUNC_5(VAR_4, VAR_6);
 if (!VAR_11)
  return 0;

 VAR_14 = FUNC_3(VAR_4, VAR_6, VAR_8);
 VAR_13 = FUNC_6(VAR_4, VAR_6, VAR_5);

 if (VAR_13 <= VAR_14)
  VAR_13 = VAR_14 + 1;

 for (VAR_16 = 0, VAR_15 = 0; VAR_16 < VAR_4->scan_request->n_channels; VAR_16++) {
  VAR_10 = VAR_4->scan_request->channels[VAR_16];

  if (VAR_10->band != VAR_6)
   continue;

  VAR_17 = VAR_10->hw_value;
  VAR_9->channel = FUNC_2(VAR_17);

  VAR_12 = FUNC_4(VAR_4, VAR_6, VAR_17);
  if (!FUNC_8(VAR_12)) {
   FUNC_0("Channel %d is INVALID for this band.\n",
          VAR_17);
   continue;
  }

  if (!VAR_7 || FUNC_7(VAR_12) ||
      (VAR_10->flags & VAR_1))
   VAR_9->type = VAR_3;
  else
   VAR_9->type = VAR_2;

  if (VAR_8)
   VAR_9->type |= FUNC_1(VAR_8);

  VAR_9->active_dwell = FUNC_2(VAR_14);
  VAR_9->passive_dwell = FUNC_2(VAR_13);


  VAR_9->dsp_atten = 110;





  if (VAR_6 == VAR_0)
   VAR_9->tx_gain = ((1 << 5) | (3 << 3)) | 3;
  else
   VAR_9->tx_gain = ((1 << 5) | (5 << 3));

  FUNC_0("Scanning ch=%d prob=0x%X [%s %d]\n", VAR_17,
         FUNC_9(VAR_9->type),
         (VAR_9->
   type & VAR_2) ? "ACTIVE" : "PASSIVE",
         (VAR_9->
   type & VAR_2) ? VAR_14 :
         VAR_13);

  VAR_9++;
  VAR_15++;
 }

 FUNC_0("total channels to scan %d\n", VAR_15);
 return VAR_15;
}
