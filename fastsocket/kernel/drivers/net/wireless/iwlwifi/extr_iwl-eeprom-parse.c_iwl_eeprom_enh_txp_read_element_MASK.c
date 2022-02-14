
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_nvm_data {struct ieee80211_channel* channels; } ;
struct iwl_eeprom_enhanced_txpwr {int flags; scalar_t__ channel; } ;
struct ieee80211_channel {scalar_t__ hw_value; int band; scalar_t__ max_power; } ;
typedef scalar_t__ s8 ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0(struct iwl_nvm_data *VAR_4,
    struct iwl_eeprom_enhanced_txpwr *VAR_5,
    int VAR_6, s8 VAR_7)
{
 int VAR_8;
 enum ieee80211_band VAR_9;

 VAR_9 = VAR_5->flags & VAR_3 ?
  VAR_1 : VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  struct ieee80211_channel *VAR_10 = &VAR_4->channels[VAR_8];


  if (VAR_5->channel != 0 && VAR_10->hw_value != VAR_5->channel)
   continue;


  if (VAR_9 != VAR_10->band)
   continue;

  if (VAR_10->max_power < VAR_7 &&
      !(VAR_5->flags & VAR_2))
   VAR_10->max_power = VAR_7;
 }
}
