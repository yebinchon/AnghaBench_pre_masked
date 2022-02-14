
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct survey_info {scalar_t__ filled; int channel; } ;
struct TYPE_2__ {int chan; } ;
struct ieee80211_conf {TYPE_1__ chandef; } ;
struct ieee80211_hw {struct ieee80211_conf conf; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ieee80211_hw *VAR_1, int VAR_2,
    struct survey_info *VAR_3)
{
 struct ieee80211_conf *VAR_4 = &VAR_1->conf;

 if (VAR_2 != 0)
  return -VAR_0;

 VAR_3->channel = VAR_4->chandef.chan;
 VAR_3->filled = 0;
 return 0;
}
