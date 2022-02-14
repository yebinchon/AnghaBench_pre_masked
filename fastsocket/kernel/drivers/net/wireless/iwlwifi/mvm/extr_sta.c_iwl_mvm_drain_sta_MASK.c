
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm_sta {int sta_id; int mac_id_n_color; } ;
struct iwl_mvm_add_sta_cmd {void* station_flags_msk; void* station_flags; int add_modify; int sta_id; void* mac_id_n_color; } ;
struct iwl_mvm {int mutex; } ;
typedef int cmd ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct iwl_mvm*,char*,int ) ;
 int FUNC_1 (struct iwl_mvm*,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_mvm*,int ,int,struct iwl_mvm_add_sta_cmd*,int*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct iwl_mvm *VAR_4, struct iwl_mvm_sta *VAR_5,
        bool VAR_6)
{
 struct iwl_mvm_add_sta_cmd VAR_7 = {};
 int VAR_8;
 u32 VAR_9;

 FUNC_4(&VAR_4->mutex);

 VAR_7.mac_id_n_color = FUNC_2(VAR_5->mac_id_n_color);
 VAR_7.sta_id = VAR_5->sta_id;
 VAR_7.add_modify = VAR_3;
 VAR_7.station_flags = VAR_6 ? FUNC_2(VAR_2) : 0;
 VAR_7.station_flags_msk = FUNC_2(VAR_2);

 VAR_9 = 128;
 VAR_8 = FUNC_3(VAR_4, VAR_0, sizeof(VAR_7),
       &VAR_7, &VAR_9);
 if (VAR_8)
  return VAR_8;

 switch (VAR_9) {
 case 128:
  FUNC_0(VAR_4, "Frames for staid %d will drained in fw\n",
          VAR_5->sta_id);
  break;
 default:
  VAR_8 = -VAR_1;
  FUNC_1(VAR_4, "Couldn't drain frames for staid %d\n",
   VAR_5->sta_id);
  break;
 }

 return VAR_8;
}
