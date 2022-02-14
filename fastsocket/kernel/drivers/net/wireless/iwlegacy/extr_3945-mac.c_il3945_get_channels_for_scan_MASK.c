
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct il_priv {int ucode_ver; TYPE_1__* scan_request; } ;
struct il_channel_info {int dummy; } ;
struct TYPE_4__ {int dsp_atten; int tx_gain; } ;
struct il3945_scan_channel {int channel; int type; TYPE_2__ tpc; void* active_dwell; void* passive_dwell; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_channel {int band; int hw_value; int flags; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_3__ {int n_channels; struct ieee80211_channel** channels; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct il_priv*,int,scalar_t__) ;
 struct il_channel_info* FUNC_5 (struct il_priv*,int,int) ;
 struct ieee80211_supported_band* FUNC_6 (struct il_priv*,int) ;
 scalar_t__ FUNC_7 (struct il_priv*,int,struct ieee80211_vif*) ;
 scalar_t__ FUNC_8 (struct il_channel_info const*) ;
 int FUNC_9 (struct il_channel_info const*) ;

__attribute__((used)) static int
FUNC_10(struct il_priv *VAR_2, enum ieee80211_band VAR_3,
        u8 VAR_4, u8 VAR_5,
        struct il3945_scan_channel *VAR_6,
        struct ieee80211_vif *VAR_7)
{
 struct ieee80211_channel *VAR_8;
 const struct ieee80211_supported_band *VAR_9;
 const struct il_channel_info *VAR_10;
 u16 VAR_11 = 0;
 u16 VAR_12 = 0;
 int VAR_13, VAR_14;

 VAR_9 = FUNC_6(VAR_2, VAR_3);
 if (!VAR_9)
  return 0;

 VAR_12 = FUNC_4(VAR_2, VAR_3, VAR_5);
 VAR_11 = FUNC_7(VAR_2, VAR_3, VAR_7);

 if (VAR_11 <= VAR_12)
  VAR_11 = VAR_12 + 1;

 for (VAR_14 = 0, VAR_13 = 0; VAR_14 < VAR_2->scan_request->n_channels; VAR_14++) {
  VAR_8 = VAR_2->scan_request->channels[VAR_14];

  if (VAR_8->band != VAR_3)
   continue;

  VAR_6->channel = VAR_8->hw_value;

  VAR_10 = FUNC_5(VAR_2, VAR_3, VAR_6->channel);
  if (!FUNC_9(VAR_10)) {
   FUNC_0("Channel %d is INVALID for this band.\n",
          VAR_6->channel);
   continue;
  }

  VAR_6->active_dwell = FUNC_3(VAR_12);
  VAR_6->passive_dwell = FUNC_3(VAR_11);



  if (!VAR_4 || FUNC_8(VAR_10) ||
      (VAR_8->flags & VAR_1)) {
   VAR_6->type = 0;
   if (FUNC_2(VAR_2->ucode_ver) == 1)
    VAR_6->active_dwell =
        FUNC_3(VAR_11 - 1);
  } else {
   VAR_6->type = 1;
  }





  if (FUNC_2(VAR_2->ucode_ver) >= 2) {
   if (VAR_5)
    VAR_6->type |= FUNC_1(VAR_5);
  } else {


   if ((VAR_6->type & 1) && VAR_5)
    VAR_6->type |= FUNC_1(VAR_5);
  }


  VAR_6->tpc.dsp_atten = 110;



  if (VAR_3 == VAR_0)
   VAR_6->tpc.tx_gain = ((1 << 5) | (3 << 3)) | 3;
  else {
   VAR_6->tpc.tx_gain = ((1 << 5) | (5 << 3));




  }

  FUNC_0("Scanning %d [%s %d]\n", VAR_6->channel,
         (VAR_6->type & 1) ? "ACTIVE" : "PASSIVE",
         (VAR_6->type & 1) ? VAR_12 : VAR_11);

  VAR_6++;
  VAR_13++;
 }

 FUNC_0("total channels to scan %d\n", VAR_13);
 return VAR_13;
}
