
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_6__ {int rx_highest; scalar_t__* rx_mask; } ;
struct TYPE_7__ {TYPE_1__ mcs; } ;
struct ieee80211_supported_band {TYPE_2__ ht_cap; } ;
struct ieee80211_hw {TYPE_5__* wiphy; struct brcms_info* priv; } ;
struct brcms_info {TYPE_3__* pub; struct brcms_c_info* wlc; } ;
struct brcms_c_info {TYPE_4__** bandstate; } ;
struct TYPE_10__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_9__ {struct ieee80211_supported_band band; } ;
struct TYPE_8__ {int _nbands; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct ieee80211_supported_band VAR_7 ;
 struct ieee80211_supported_band VAR_8 ;
 scalar_t__ FUNC_0 (struct brcms_c_info*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_9)
{
 struct brcms_info *VAR_10 = VAR_9->priv;
 struct brcms_c_info *VAR_11 = VAR_10->wlc;
 struct ieee80211_supported_band *VAR_12;
 int VAR_13 = 0;
 u16 VAR_14;

 VAR_9->wiphy->bands[VAR_3] = ((void*)0);
 VAR_9->wiphy->bands[VAR_4] = ((void*)0);

 VAR_14 = FUNC_0(VAR_10->wlc, 0);
 if (VAR_14 == VAR_6 || VAR_14 == VAR_5) {
  VAR_12 = &VAR_11->bandstate[VAR_0]->band;
  *VAR_12 = VAR_7;
  if (VAR_14 == VAR_5) {

   VAR_12->ht_cap.mcs.rx_mask[1] = 0;
   VAR_12->ht_cap.mcs.rx_highest = FUNC_1(72);
  }
  VAR_9->wiphy->bands[VAR_3] = VAR_12;
 } else {
  return -VAR_2;
 }


 if (VAR_10->pub->_nbands > 1) {
  VAR_13++;
  if (VAR_14 == VAR_6 || VAR_14 == VAR_5) {
   VAR_12 = &VAR_11->bandstate[VAR_1]->band;
   *VAR_12 = VAR_8;
   VAR_9->wiphy->bands[VAR_4] = VAR_12;
  } else {
   return -VAR_2;
  }
 }
 return 0;
}
