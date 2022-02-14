
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct il_priv {int dummy; } ;
struct il_eeprom_channel {int flags; int max_power_avg; } ;
struct il_channel_info {int ht40_flags; int ht40_extension_channel; int ht40_max_power_avg; struct il_eeprom_channel ht40_eeprom; int channel; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,char*,int ,int ,int ,int ,int ,int,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct il_priv*,int,int ) ;
 scalar_t__ FUNC_3 (struct il_channel_info*) ;
 int FUNC_4 (struct il_channel_info*) ;

__attribute__((used)) static int
FUNC_5(struct il_priv *VAR_8, enum ieee80211_band VAR_9, u16 VAR_10,
        const struct il_eeprom_channel *VAR_11,
        u8 VAR_12)
{
 struct il_channel_info *VAR_13;

 VAR_13 =
     (struct il_channel_info *)FUNC_2(VAR_8, VAR_9, VAR_10);

 if (!FUNC_4(VAR_13))
  return -1;

 FUNC_1("HT40 Ch. %d [%sGHz] %s%s%s%s%s(0x%02x %ddBm):"
   " Ad-Hoc %ssupported\n", VAR_13->channel,
   FUNC_3(VAR_13) ? "5.2" : "2.4",
   FUNC_0(VAR_5), FUNC_0(VAR_0),
   FUNC_0(VAR_6), FUNC_0(VAR_7),
   FUNC_0(VAR_1), VAR_11->flags,
   VAR_11->max_power_avg,
   ((VAR_11->flags & VAR_2) &&
    !(VAR_11->flags & VAR_3)) ? "" : "not ");

 VAR_13->ht40_eeprom = *VAR_11;
 VAR_13->ht40_max_power_avg = VAR_11->max_power_avg;
 VAR_13->ht40_flags = VAR_11->flags;
 if (VAR_11->flags & VAR_4)
  VAR_13->ht40_extension_channel &=
      ~VAR_12;

 return 0;
}
