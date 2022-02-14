
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_sta {int mac_id_n_color; int sta_id; } ;
struct iwl_mvm_add_sta_cmd {int mac_id_n_color; int station_flags_msk; int sta_id; int add_modify; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_mvm*,int ,int ,int,struct iwl_mvm_add_sta_cmd*) ;

void FUNC_3(struct iwl_mvm *VAR_4,
    struct ieee80211_sta *VAR_5)
{
 struct iwl_mvm_sta *VAR_6 = (void *)VAR_5->drv_priv;
 struct iwl_mvm_add_sta_cmd VAR_7 = {
  .add_modify = VAR_3,
  .sta_id = VAR_6->sta_id,
  .station_flags_msk = FUNC_1(VAR_2),
  .mac_id_n_color = FUNC_1(VAR_6->mac_id_n_color),
 };
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, VAR_0, VAR_1, sizeof(VAR_7), &VAR_7);
 if (VAR_8)
  FUNC_0(VAR_4, "Failed to send ADD_STA command (%d)\n", VAR_8);
}
