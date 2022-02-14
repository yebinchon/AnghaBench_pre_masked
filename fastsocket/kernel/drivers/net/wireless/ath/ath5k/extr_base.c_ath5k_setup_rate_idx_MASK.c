
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ieee80211_supported_band {size_t band; size_t n_bitrates; TYPE_1__* bitrates; } ;
struct ath5k_hw {int** rate_idx; } ;
struct TYPE_2__ {size_t hw_value; int hw_value_short; } ;


 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct ath5k_hw *VAR_1, struct ieee80211_supported_band *VAR_2)
{
 u8 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_1->rate_idx[VAR_2->band][VAR_3] = -1;

 for (VAR_3 = 0; VAR_3 < VAR_2->n_bitrates; VAR_3++) {
  VAR_1->rate_idx[VAR_2->band][VAR_2->bitrates[VAR_3].hw_value] = VAR_3;
  if (VAR_2->bitrates[VAR_3].hw_value_short)
   VAR_1->rate_idx[VAR_2->band][VAR_2->bitrates[VAR_3].hw_value_short] = VAR_3;
 }
}
