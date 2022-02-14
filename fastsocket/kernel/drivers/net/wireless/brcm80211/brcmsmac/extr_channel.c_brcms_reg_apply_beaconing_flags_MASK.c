
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {struct ieee80211_supported_band** bands; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_reg_rule {int flags; } ;
struct ieee80211_channel {int flags; scalar_t__ beacon_found; int center_freq; } ;
typedef enum nl80211_reg_initiator { ____Placeholder_nl80211_reg_initiator } nl80211_reg_initiator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ieee80211_reg_rule const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ieee80211_reg_rule* FUNC_1 (struct wiphy*,int ) ;

__attribute__((used)) static void
FUNC_2(struct wiphy *VAR_8,
    enum nl80211_reg_initiator VAR_9)
{
 struct ieee80211_supported_band *VAR_10;
 struct ieee80211_channel *VAR_11;
 const struct ieee80211_reg_rule *VAR_12;
 int VAR_13, VAR_14;

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  VAR_10 = VAR_8->bands[VAR_13];
  if (!VAR_10)
   continue;

  for (VAR_14 = 0; VAR_14 < VAR_10->n_channels; VAR_14++) {
   VAR_11 = &VAR_10->channels[VAR_14];

   if (VAR_11->flags &
       (VAR_0 | VAR_3))
    continue;

   if (VAR_9 == VAR_5) {
    VAR_12 = FUNC_1(VAR_8, VAR_11->center_freq);
    if (FUNC_0(VAR_12))
     continue;

    if (!(VAR_12->flags & VAR_6))
     VAR_11->flags &= ~VAR_1;
    if (!(VAR_12->flags & VAR_7))
     VAR_11->flags &=
      ~VAR_2;
   } else if (VAR_11->beacon_found) {
    VAR_11->flags &= ~(VAR_1 |
            VAR_2);
   }
  }
 }
}
