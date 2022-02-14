
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {struct ieee80211_channel* chan; } ;
struct TYPE_3__ {TYPE_2__ chandef; } ;
struct ieee80211_hw {TYPE_1__ conf; } ;
struct ieee80211_channel {size_t hw_value; } ;
struct ath_hw {struct ath9k_channel* channels; } ;
struct ath9k_channel {int dummy; } ;


 int FUNC_0 (struct ath9k_channel*,struct ieee80211_channel*,int ) ;
 int FUNC_1 (TYPE_2__*) ;

struct ath9k_channel *FUNC_2(struct ieee80211_hw *VAR_0,
            struct ath_hw *VAR_1)
{
 struct ieee80211_channel *VAR_2 = VAR_0->conf.chandef.chan;
 struct ath9k_channel *VAR_3;
 u8 VAR_4;

 VAR_4 = VAR_2->hw_value;
 VAR_3 = &VAR_1->channels[VAR_4];
 FUNC_0(VAR_3, VAR_2,
      FUNC_1(&VAR_0->conf.chandef));

 return VAR_3;
}
