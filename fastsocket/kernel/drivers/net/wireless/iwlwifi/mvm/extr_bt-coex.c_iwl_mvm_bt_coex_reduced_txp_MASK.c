
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iwl_mvm_sta {int bt_reduced_txpower; } ;
struct iwl_mvm {int mutex; int * fw_id_to_mac_id; } ;
struct iwl_bt_coex_cmd {size_t bt_reduced_tx_power; int valid_bit_msk; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
typedef int cmd ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_mvm*,char*,char*,size_t) ;
 size_t VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_mvm*,int ,int ,int,struct iwl_bt_coex_cmd*) ;
 int FUNC_3 (int *) ;
 struct ieee80211_sta* FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_5, u8 VAR_6,
           bool VAR_7)
{
 struct iwl_bt_coex_cmd VAR_8 = {
  .valid_bit_msk = FUNC_1(VAR_2),
  .bt_reduced_tx_power = VAR_6,
 };
 struct ieee80211_sta *VAR_9;
 struct iwl_mvm_sta *VAR_10;


 if (VAR_6 == VAR_4)
  return 0;

 VAR_9 = FUNC_4(VAR_5->fw_id_to_mac_id[VAR_6],
     FUNC_3(&VAR_5->mutex));
 VAR_10 = (void *)VAR_9->drv_priv;


 if (VAR_10->bt_reduced_txpower == VAR_7)
  return 0;

 if (VAR_7)
  VAR_8.bt_reduced_tx_power |= VAR_1;

 FUNC_0(VAR_5, "%sable reduced Tx Power for sta %d\n",
         VAR_7 ? "en" : "dis", VAR_6);

 VAR_10->bt_reduced_txpower = VAR_7;


 return FUNC_2(VAR_5, VAR_0, VAR_3,
        sizeof(VAR_8), &VAR_8);
}
