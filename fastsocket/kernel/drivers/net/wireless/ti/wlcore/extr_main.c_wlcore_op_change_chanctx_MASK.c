
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_2__ def; } ;
struct TYPE_3__ {int center_freq; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_1,
         struct ieee80211_chanctx_conf *VAR_2,
         u32 VAR_3)
{
 FUNC_2(VAR_0,
       "mac80211 change chanctx %d (type %d) changed 0x%x",
       FUNC_1(VAR_2->def.chan->center_freq),
       FUNC_0(&VAR_2->def), VAR_3);
}
