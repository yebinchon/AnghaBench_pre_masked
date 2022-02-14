
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ieee80211_channel {scalar_t__ center_freq; scalar_t__ band; } ;
struct TYPE_3__ {scalar_t__ range_2ghz_min; scalar_t__ range_2ghz_max; scalar_t__ range_5ghz_min; scalar_t__ range_5ghz_max; } ;
struct TYPE_4__ {TYPE_1__ cap_range; } ;
struct ath5k_hw {TYPE_2__ ah_capabilities; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

bool
FUNC_0(struct ath5k_hw *VAR_2, struct ieee80211_channel *VAR_3)
{
 u16 VAR_4 = VAR_3->center_freq;


 if (VAR_3->band == VAR_0) {
  if ((VAR_4 >= VAR_2->ah_capabilities.cap_range.range_2ghz_min) &&
      (VAR_4 <= VAR_2->ah_capabilities.cap_range.range_2ghz_max))
   return 1;
 } else if (VAR_3->band == VAR_1)
  if ((VAR_4 >= VAR_2->ah_capabilities.cap_range.range_5ghz_min) &&
      (VAR_4 <= VAR_2->ah_capabilities.cap_range.range_5ghz_max))
   return 1;

 return 0;
}
