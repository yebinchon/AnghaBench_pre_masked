
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int extpa_gain; } ;
struct TYPE_10__ {TYPE_4__ ghz5; } ;
struct ssb_sprom {TYPE_5__ fem; } ;
struct TYPE_8__ {int rev; TYPE_2__* n; } ;
struct b43_wldev {TYPE_3__ phy; int wl; TYPE_1__* dev; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_7__ {scalar_t__ ipa5g_on; scalar_t__ ipa2g_on; } ;
struct TYPE_6__ {struct ssb_sprom* bus_sprom; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int const* FUNC_1 (struct b43_wldev*) ;
 int const* VAR_2 ;
 int const* VAR_3 ;
 int const* VAR_4 ;
 int const* VAR_5 ;
 int const* VAR_6 ;

const u32 *FUNC_2(struct b43_wldev *VAR_7)
{
 enum ieee80211_band VAR_8 = FUNC_0(VAR_7->wl);
 struct ssb_sprom *VAR_9 = VAR_7->dev->bus_sprom;

 if (VAR_7->phy.rev < 3)
  return VAR_2;


 if ((VAR_7->phy.n->ipa2g_on && VAR_8 == VAR_0) ||
     (VAR_7->phy.n->ipa5g_on && VAR_8 == VAR_1)) {
  return FUNC_1(VAR_7);
 } else if (FUNC_0(VAR_7->wl) == VAR_1) {
  if (VAR_7->phy.rev == 3)
   return VAR_3;
  if (VAR_7->phy.rev == 4)
   return VAR_9->fem.ghz5.extpa_gain == 3 ?
    VAR_5 :
    VAR_5;
  else
   return VAR_6;
 } else {
  if (VAR_7->phy.rev >= 5 && VAR_9->fem.ghz5.extpa_gain == 3)
   return VAR_4;
  else
   return VAR_4;
 }
}
