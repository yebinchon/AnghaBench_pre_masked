
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iwl_mvm_rm_sta_cmd {size_t sta_id; } ;
struct iwl_mvm {int mutex; int * fw_id_to_mac_id; } ;
struct ieee80211_sta {int dummy; } ;
typedef int rm_sta_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_mvm*,int ,int ,int,struct iwl_mvm_rm_sta_cmd*) ;
 int FUNC_2 (int *) ;
 struct ieee80211_sta* FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_3, u8 VAR_4)
{
 struct ieee80211_sta *VAR_5;
 struct iwl_mvm_rm_sta_cmd VAR_6 = {
  .sta_id = VAR_4,
 };
 int VAR_7;

 VAR_5 = FUNC_3(VAR_3->fw_id_to_mac_id[VAR_4],
     FUNC_2(&VAR_3->mutex));


 if (!VAR_5) {
  FUNC_0(VAR_3, "Invalid station id\n");
  return -VAR_1;
 }

 VAR_7 = FUNC_1(VAR_3, VAR_2, VAR_0,
       sizeof(VAR_6), &VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_3, "Failed to remove station. Id=%d\n", VAR_4);
  return VAR_7;
 }

 return 0;
}
