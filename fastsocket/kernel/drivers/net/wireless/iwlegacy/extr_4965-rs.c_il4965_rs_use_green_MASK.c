
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int non_gf_sta_present; } ;
struct il_priv {TYPE_2__ ht; } ;
struct TYPE_3__ {int cap; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; } ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct il_priv *VAR_1, struct ieee80211_sta *VAR_2)
{
 return (VAR_2->ht_cap.cap & VAR_0) &&
        !VAR_1->ht.non_gf_sta_present;
}
