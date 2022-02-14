
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl8k_ampdu_stream {int tid; TYPE_1__* sta; } ;
struct ieee80211_hw {int wiphy; } ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (struct mwl8k_ampdu_stream*,int ,int) ;
 int FUNC_1 (int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_hw *VAR_0, struct mwl8k_ampdu_stream *VAR_1)
{
 FUNC_1(VAR_0->wiphy, "Remove stream for %pM %d\n", VAR_1->sta->addr,
      VAR_1->tid);
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
}
