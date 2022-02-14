
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int dummy; } ;
struct wiphy {struct ieee80211_supported_band** bands; } ;
struct regulatory_request {int dummy; } ;
struct ieee80211_supported_band {int n_channels; struct ieee80211_channel* channels; } ;
struct ieee80211_hw {struct wl1271* priv; } ;
struct ieee80211_channel {int flags; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ieee80211_hw* FUNC_0 (struct wiphy*) ;
 int FUNC_1 (struct wl1271*) ;

__attribute__((used)) static void FUNC_2(struct wiphy *VAR_5,
         struct regulatory_request *VAR_6)
{
 struct ieee80211_supported_band *VAR_7;
 struct ieee80211_channel *VAR_8;
 int VAR_9;
 struct ieee80211_hw *VAR_10 = FUNC_0(VAR_5);
 struct wl1271 *VAR_11 = VAR_10->priv;

 VAR_7 = VAR_5->bands[VAR_0];
 for (VAR_9 = 0; VAR_9 < VAR_7->n_channels; VAR_9++) {
  VAR_8 = &VAR_7->channels[VAR_9];
  if (VAR_8->flags & VAR_1)
   continue;

  if (VAR_8->flags & VAR_4)
   VAR_8->flags |= VAR_2 |
         VAR_3;

 }

 FUNC_1(VAR_11);
}
