
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_nvm_data {struct ieee80211_supported_band* bands; } ;
struct iwl_cfg {int dummy; } ;
struct ieee80211_supported_band {size_t band; int ht_cap; int n_bitrates; int * bitrates; } ;
struct device {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (struct device*,struct iwl_cfg const*,struct iwl_nvm_data*,int const*,size_t) ;
 int FUNC_2 (struct iwl_cfg const*,struct iwl_nvm_data*,int *,size_t) ;
 scalar_t__ FUNC_3 (struct iwl_nvm_data*,struct ieee80211_supported_band*,int,size_t) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_7, const struct iwl_cfg *VAR_8,
       struct iwl_nvm_data *VAR_9,
       const u8 *VAR_10, size_t VAR_11)
{
 int VAR_12 = FUNC_1(VAR_7, VAR_8, VAR_9,
           VAR_10, VAR_11);
 int VAR_13 = 0;
 struct ieee80211_supported_band *VAR_14;

 VAR_14 = &VAR_9->bands[VAR_0];
 VAR_14->band = VAR_0;
 VAR_14->bitrates = &VAR_6[VAR_4];
 VAR_14->n_bitrates = VAR_2;
 VAR_13 += FUNC_3(VAR_9, VAR_14, VAR_12,
       VAR_0);
 FUNC_2(VAR_8, VAR_9, &VAR_14->ht_cap, VAR_0);

 VAR_14 = &VAR_9->bands[VAR_1];
 VAR_14->band = VAR_1;
 VAR_14->bitrates = &VAR_6[VAR_5];
 VAR_14->n_bitrates = VAR_3;
 VAR_13 += FUNC_3(VAR_9, VAR_14, VAR_12,
       VAR_1);
 FUNC_2(VAR_8, VAR_9, &VAR_14->ht_cap, VAR_1);

 if (VAR_12 != VAR_13)
  FUNC_0(VAR_7, "EEPROM: used only %d of %d channels\n",
       VAR_13, VAR_12);
}
