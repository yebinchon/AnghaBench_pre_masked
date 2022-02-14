
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct iwl_mvm_sta {int sta_id; int mac_id_n_color; } ;
struct iwl_mvm_add_sta_cmd {int modify_mask; void* remove_immediate_ba_tid; int add_immediate_ba_ssn; void* add_immediate_ba_tid; int add_modify; int sta_id; int mac_id_n_color; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
typedef int cmd ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,char*,char*) ;
 int FUNC_1 (struct iwl_mvm*,char*,char*,int) ;
 int FUNC_2 (struct iwl_mvm*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iwl_mvm*,int ,int,struct iwl_mvm_add_sta_cmd*,int*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct iwl_mvm *VAR_6, struct ieee80211_sta *VAR_7,
         int VAR_8, u16 VAR_9, bool VAR_10)
{
 struct iwl_mvm_sta *VAR_11 = (void *)VAR_7->drv_priv;
 struct iwl_mvm_add_sta_cmd VAR_12 = {};
 int VAR_13;
 u32 VAR_14;

 FUNC_6(&VAR_6->mutex);

 VAR_12.mac_id_n_color = FUNC_4(VAR_11->mac_id_n_color);
 VAR_12.sta_id = VAR_11->sta_id;
 VAR_12.add_modify = VAR_3;
 if (VAR_10) {
  VAR_12.add_immediate_ba_tid = (u8) VAR_8;
  VAR_12.add_immediate_ba_ssn = FUNC_3(VAR_9);
 } else {
  VAR_12.remove_immediate_ba_tid = (u8) VAR_8;
 }
 VAR_12.modify_mask = VAR_10 ? VAR_4 :
      VAR_5;

 VAR_14 = 128;
 VAR_13 = FUNC_5(VAR_6, VAR_0, sizeof(VAR_12),
       &VAR_12, &VAR_14);
 if (VAR_13)
  return VAR_13;

 switch (VAR_14) {
 case 128:
  FUNC_0(VAR_6, "RX BA Session %sed in fw\n",
          VAR_10 ? "start" : "stopp");
  break;
 case 129:
  FUNC_2(VAR_6, "RX BA Session refused by fw\n");
  VAR_13 = -VAR_2;
  break;
 default:
  VAR_13 = -VAR_1;
  FUNC_1(VAR_6, "RX BA Session failed %sing, status 0x%x\n",
   VAR_10 ? "start" : "stopp", VAR_14);
  break;
 }

 return VAR_13;
}
