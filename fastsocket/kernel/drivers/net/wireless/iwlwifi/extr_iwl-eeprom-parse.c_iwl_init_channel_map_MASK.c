
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct iwl_nvm_data {int max_tx_pwr_half_dbm; struct ieee80211_channel* channels; } ;
struct iwl_eeprom_channel {int flags; int max_power_avg; } ;
struct iwl_cfg {TYPE_1__* eeprom_params; } ;
struct ieee80211_channel {int max_power; scalar_t__ hw_value; int flags; void* band; int center_freq; } ;
struct device {int dummy; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_2__ {scalar_t__* regulatory_bands; scalar_t__ enhanced_txpower; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct device*,char*,scalar_t__,...) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (scalar_t__,void*) ;
 int FUNC_3 (struct device*,struct iwl_nvm_data*,scalar_t__ const*,size_t,int) ;
 int FUNC_4 (struct iwl_cfg const*,scalar_t__ const*,size_t,int,int*,struct iwl_eeprom_channel const**,scalar_t__ const**) ;
 int FUNC_5 (struct device*,struct iwl_nvm_data*,int,int,scalar_t__ const,struct iwl_eeprom_channel const*,int ) ;
 int FUNC_6 (int ,int,int) ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_7(struct device *VAR_20, const struct iwl_cfg *VAR_21,
    struct iwl_nvm_data *VAR_22,
    const u8 *VAR_23, size_t VAR_24)
{
 int VAR_25, VAR_26;
 const struct iwl_eeprom_channel *VAR_27;
 const u8 *VAR_28;
 int VAR_29;
 int VAR_30 = 0;




 for (VAR_25 = 1; VAR_25 <= 5; VAR_25++) {
  struct ieee80211_channel *VAR_31;

  FUNC_4(VAR_21, VAR_23, VAR_24, VAR_25,
     &VAR_29, &VAR_27,
     &VAR_28);


  for (VAR_26 = 0; VAR_26 < VAR_29; VAR_26++) {
   const struct iwl_eeprom_channel *VAR_32;

   VAR_32 = &VAR_27[VAR_26];

   if (!(VAR_32->flags & VAR_5)) {
    FUNC_1(VAR_20,
       "Ch. %d Flags %x [%sGHz] - No traffic\n",
       VAR_28[VAR_26],
       VAR_27[VAR_26].flags,
       (VAR_25 != 1) ? "5.2" : "2.4");
    continue;
   }

   VAR_31 = &VAR_22->channels[VAR_30];
   VAR_30++;

   VAR_31->hw_value = VAR_28[VAR_26];
   VAR_31->band = (VAR_25 == 1) ? VAR_8
          : VAR_9;
   VAR_31->center_freq =
    FUNC_2(
     VAR_31->hw_value, VAR_31->band);


   VAR_31->flags = VAR_10;

   if (!(VAR_32->flags & VAR_3))
    VAR_31->flags |= VAR_13;

   if (!(VAR_32->flags & VAR_2))
    VAR_31->flags |= VAR_14;

   if (VAR_32->flags & VAR_4)
    VAR_31->flags |= VAR_15;


   VAR_31->max_power =
    VAR_27[VAR_26].max_power_avg;
   FUNC_1(VAR_20,
      "Ch. %d [%sGHz] %s%s%s%s%s%s(0x%02x %ddBm): Ad-Hoc %ssupported\n",
      VAR_31->hw_value,
      (VAR_25 != 1) ? "5.2" : "2.4",
      FUNC_0(VAR_17),
      FUNC_0(VAR_7),
      FUNC_0(VAR_0),
      FUNC_0(VAR_16),
      FUNC_0(VAR_18),
      FUNC_0(VAR_1),
      VAR_27[VAR_26].flags,
      VAR_27[VAR_26].max_power_avg,
      ((VAR_27[VAR_26].flags &
       VAR_3) &&
       !(VAR_27[VAR_26].flags &
       VAR_4))
      ? "" : "not ");
  }
 }

 if (VAR_21->eeprom_params->enhanced_txpower) {






  FUNC_3(VAR_20, VAR_22, VAR_23, VAR_24,
         VAR_30);
 } else {

  int VAR_33;

  VAR_22->max_tx_pwr_half_dbm = -128;

  for (VAR_33 = 0; VAR_33 < VAR_30; VAR_33++)
   VAR_22->max_tx_pwr_half_dbm =
    FUNC_6(VAR_19, VAR_22->max_tx_pwr_half_dbm,
          VAR_22->channels[VAR_33].max_power * 2);
 }


 if (VAR_21->eeprom_params->regulatory_bands[5] ==
    VAR_6 &&
     VAR_21->eeprom_params->regulatory_bands[6] ==
    VAR_6)
  return VAR_30;


 for (VAR_25 = 6; VAR_25 <= 7; VAR_25++) {
  enum ieee80211_band VAR_34;

  FUNC_4(VAR_21, VAR_23, VAR_24, VAR_25,
     &VAR_29, &VAR_27,
     &VAR_28);


  VAR_34 = (VAR_25 == 6) ? VAR_8
           : VAR_9;


  for (VAR_26 = 0; VAR_26 < VAR_29; VAR_26++) {

   FUNC_5(VAR_20, VAR_22, VAR_30, VAR_34,
            VAR_28[VAR_26],
            &VAR_27[VAR_26],
            VAR_12);


   FUNC_5(VAR_20, VAR_22, VAR_30, VAR_34,
            VAR_28[VAR_26] + 4,
            &VAR_27[VAR_26],
            VAR_11);
  }
 }

 return VAR_30;
}
