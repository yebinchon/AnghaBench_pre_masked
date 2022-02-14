
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_supported_band {unsigned int n_bitrates; TYPE_5__* bitrates; } ;
struct ieee80211_rx_status {int rate_idx; int flag; } ;
struct TYPE_7__ {TYPE_1__* chan; } ;
struct TYPE_8__ {TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_4__* wiphy; TYPE_3__ conf; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_10__ {int hw_value; int hw_value_short; } ;
struct TYPE_9__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_6__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct ieee80211_hw *VAR_6,
          struct ieee80211_rx_status *VAR_7,
          u8 VAR_8, u8 VAR_9)
{
 struct ieee80211_supported_band *VAR_10;
 enum ieee80211_band VAR_11;
 unsigned int VAR_12 = 0;

 if (VAR_8 & 0x80) {

  VAR_7->flag |= VAR_3;
  if (VAR_9 & VAR_0)
   VAR_7->flag |= VAR_2;
  if (VAR_9 & VAR_1)
   VAR_7->flag |= VAR_5;
  VAR_7->rate_idx = VAR_8 & 0x7f;
  return;
 }

 VAR_11 = VAR_6->conf.chandef.chan->band;
 VAR_10 = VAR_6->wiphy->bands[VAR_11];

 for (VAR_12 = 0; VAR_12 < VAR_10->n_bitrates; VAR_12++) {
  if (VAR_10->bitrates[VAR_12].hw_value == VAR_8) {
   VAR_7->rate_idx = VAR_12;
   return;
  }
  if (VAR_10->bitrates[VAR_12].hw_value_short == VAR_8) {
   VAR_7->rate_idx = VAR_12;
   VAR_7->flag |= VAR_4;
   return;
  }
 }

}
