
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct iwl_nvm_data {struct ieee80211_channel* channels; } ;
struct iwl_eeprom_channel {int flags; int max_power_avg; } ;
struct ieee80211_channel {int band; scalar_t__ hw_value; int flags; } ;
struct device {int dummy; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct device*,char*,scalar_t__,char*,int ,int ,int ,int ,int ,int,int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_2(struct device *VAR_9,
       struct iwl_nvm_data *VAR_10, int VAR_11,
       enum ieee80211_band VAR_12, u16 VAR_13,
       const struct iwl_eeprom_channel *VAR_14,
       u8 VAR_15)
{
 struct ieee80211_channel *VAR_16 = ((void*)0);
 int VAR_17;

 for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++) {
  if (VAR_10->channels[VAR_17].band != VAR_12)
   continue;
  if (VAR_10->channels[VAR_17].hw_value != VAR_13)
   continue;
  VAR_16 = &VAR_10->channels[VAR_17];
  break;
 }

 if (!VAR_16)
  return;

 FUNC_1(VAR_9,
    "HT40 Ch. %d [%sGHz] %s%s%s%s%s(0x%02x %ddBm): Ad-Hoc %ssupported\n",
    VAR_13,
    VAR_12 == VAR_6 ? "5.2" : "2.4",
    FUNC_0(VAR_5),
    FUNC_0(VAR_0),
    FUNC_0(VAR_7),
    FUNC_0(VAR_8),
    FUNC_0(VAR_1),
    VAR_14->flags,
    VAR_14->max_power_avg,
    ((VAR_14->flags & VAR_2) &&
     !(VAR_14->flags & VAR_3)) ? ""
              : "not ");

 if (VAR_14->flags & VAR_4)
  VAR_16->flags &= ~VAR_15;
}
