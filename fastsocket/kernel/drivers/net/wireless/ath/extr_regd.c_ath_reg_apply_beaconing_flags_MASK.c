
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {unsigned int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_reg_rule {int flags; } ;
struct ieee80211_channel {int flags; scalar_t__ beacon_found; int center_freq; } ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ieee80211_reg_rule const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 struct ieee80211_reg_rule* FUNC_2 (struct wiphy*,int ) ;

__attribute__((used)) static void
FUNC_3(struct wiphy *VAR_7,
         enum nl80211_reg_initiator VAR_8)
{
 enum ieee80211_band VAR_9;
 struct ieee80211_supported_band *VAR_10;
 const struct ieee80211_reg_rule *VAR_11;
 struct ieee80211_channel *VAR_12;
 unsigned int VAR_13;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {

  if (!VAR_7->bands[VAR_9])
   continue;

  VAR_10 = VAR_7->bands[VAR_9];

  for (VAR_13 = 0; VAR_13 < VAR_10->n_channels; VAR_13++) {

   VAR_12 = &VAR_10->channels[VAR_13];

   if (FUNC_1(VAR_12->center_freq) ||
       (VAR_12->flags & VAR_2))
    continue;

   if (VAR_8 == VAR_4) {
    VAR_11 = FUNC_2(VAR_7, VAR_12->center_freq);
    if (FUNC_0(VAR_11))
     continue;
    if (!(VAR_11->flags &
        VAR_5))
     VAR_12->flags &=
       ~VAR_0;
    if (!(VAR_11->flags &
        VAR_6))
     VAR_12->flags &=
       ~VAR_1;
   } else {
    if (VAR_12->beacon_found)
     VAR_12->flags &= ~(VAR_0 |
       VAR_1);
   }
  }
 }

}
