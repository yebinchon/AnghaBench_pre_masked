
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_channel {int center_freq; } ;
struct ath5k_hw {TYPE_1__* curchan; } ;
struct TYPE_2__ {int center_freq; } ;


 int FUNC_0 (struct ath5k_hw*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ath5k_hw*,struct ieee80211_channel*,int) ;

int
FUNC_2(struct ath5k_hw *VAR_1, struct ieee80211_channel *VAR_2)
{
 FUNC_0(VAR_1, VAR_0,
    "channel set, resetting (%u -> %u MHz)\n",
    VAR_1->curchan->center_freq, VAR_2->center_freq);







 return FUNC_1(VAR_1, VAR_2, 1);
}
