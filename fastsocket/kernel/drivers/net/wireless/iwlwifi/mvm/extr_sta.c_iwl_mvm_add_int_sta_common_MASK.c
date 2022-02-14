
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct iwl_mvm_int_sta {int tfd_queue_msk; int sta_id; } ;
struct iwl_mvm_add_sta_cmd {int addr; void* tfd_queue_msk; void* mac_id_n_color; int sta_id; } ;
struct iwl_mvm {int mutex; } ;
typedef int cmd ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int FUNC_2 (struct iwl_mvm*,char*,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct iwl_mvm*,int ,int,struct iwl_mvm_add_sta_cmd*,int*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int const*,int ) ;
 int FUNC_7 (struct iwl_mvm_add_sta_cmd*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct iwl_mvm *VAR_3,
          struct iwl_mvm_int_sta *VAR_4,
          const u8 *VAR_5,
          u16 VAR_6, u16 VAR_7)
{
 struct iwl_mvm_add_sta_cmd VAR_8;
 int VAR_9;
 u32 VAR_10;

 FUNC_5(&VAR_3->mutex);

 FUNC_7(&VAR_8, 0, sizeof(struct iwl_mvm_add_sta_cmd));
 VAR_8.sta_id = VAR_4->sta_id;
 VAR_8.mac_id_n_color = FUNC_3(FUNC_0(VAR_6,
            VAR_7));

 VAR_8.tfd_queue_msk = FUNC_3(VAR_4->tfd_queue_msk);

 if (VAR_5)
  FUNC_6(VAR_8.addr, VAR_5, VAR_2);

 VAR_9 = FUNC_4(VAR_3, VAR_0, sizeof(VAR_8),
       &VAR_8, &VAR_10);
 if (VAR_9)
  return VAR_9;

 switch (VAR_10) {
 case 128:
  FUNC_1(VAR_3, "Internal station added.\n");
  return 0;
 default:
  VAR_9 = -VAR_1;
  FUNC_2(VAR_3, "Add internal station failed, status=0x%x\n",
   VAR_10);
  break;
 }
 return VAR_9;
}
