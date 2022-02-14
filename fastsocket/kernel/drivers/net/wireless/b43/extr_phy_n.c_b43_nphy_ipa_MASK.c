
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* n; } ;
struct b43_wldev {TYPE_2__ phy; int wl; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_3__ {scalar_t__ ipa5g_on; scalar_t__ ipa2g_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct b43_wldev *VAR_2)
{
 enum ieee80211_band VAR_3 = FUNC_0(VAR_2->wl);
 return ((VAR_2->phy.n->ipa2g_on && VAR_3 == VAR_0) ||
  (VAR_2->phy.n->ipa5g_on && VAR_3 == VAR_1));
}
