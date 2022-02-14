
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ assoc_id; int filter_flags; } ;
struct il_priv {TYPE_1__ staging; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct il_priv*) ;

__attribute__((used)) static inline void
FUNC_1(struct il_priv *VAR_1, struct ieee80211_vif *VAR_2)
{





 VAR_1->staging.filter_flags &= ~VAR_0;
 VAR_1->staging.assoc_id = 0;
 FUNC_0(VAR_1);
}
