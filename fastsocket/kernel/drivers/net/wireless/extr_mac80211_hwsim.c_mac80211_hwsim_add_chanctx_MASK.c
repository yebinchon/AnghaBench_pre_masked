
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hw {int wiphy; } ;
struct TYPE_4__ {int center_freq2; int center_freq1; int width; TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_2__ def; } ;
struct TYPE_3__ {int center_freq; } ;


 int FUNC_0 (struct ieee80211_chanctx_conf*) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ieee80211_hw *VAR_0,
          struct ieee80211_chanctx_conf *VAR_1)
{
 FUNC_0(VAR_1);
 FUNC_1(VAR_0->wiphy,
      "add channel context control: %d MHz/width: %d/cfreqs:%d/%d MHz\n",
      VAR_1->def.chan->center_freq, VAR_1->def.width,
      VAR_1->def.center_freq1, VAR_1->def.center_freq2);
 return 0;
}
