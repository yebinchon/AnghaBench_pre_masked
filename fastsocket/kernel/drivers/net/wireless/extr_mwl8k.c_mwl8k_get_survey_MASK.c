
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct survey_info {int noise; int filled; int channel; } ;
struct mwl8k_priv {int noise; } ;
struct TYPE_2__ {int chan; } ;
struct ieee80211_conf {TYPE_1__ chandef; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ieee80211_hw *VAR_2, int VAR_3,
    struct survey_info *VAR_4)
{
 struct mwl8k_priv *VAR_5 = VAR_2->priv;
 struct ieee80211_conf *VAR_6 = &VAR_2->conf;

 if (VAR_3 != 0)
  return -VAR_0;

 VAR_4->channel = VAR_6->chandef.chan;
 VAR_4->filled = VAR_1;
 VAR_4->noise = VAR_5->noise;

 return 0;
}
