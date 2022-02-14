
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_notification_wait {int dummy; } ;
struct iwl_mvm_alive_data {int scd_base_addr; int valid; } ;
struct iwl_mvm {int cur_ucode; int ucode_loaded; int* queue_to_mac80211; scalar_t__ transport_queue_stop; int * queue_stop_count; int trans; int notif_wait; } ;
struct fw_img {int dummy; } ;
typedef enum iwl_ucode_type { ____Placeholder_iwl_ucode_type } iwl_ucode_type ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int FUNC_2 (int *,int ) ;
 int VAR_8 ;
 struct fw_img* FUNC_3 (struct iwl_mvm*,int) ;
 int FUNC_4 (int *,struct iwl_notification_wait*,int const*,int ,int ,struct iwl_mvm_alive_data*) ;
 int FUNC_5 (int *,struct iwl_notification_wait*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,struct fw_img const*,int) ;
 int FUNC_8 (int *,struct iwl_notification_wait*,int ) ;

__attribute__((used)) static int FUNC_9(struct iwl_mvm *VAR_9,
      enum iwl_ucode_type VAR_10)
{
 struct iwl_notification_wait VAR_11;
 struct iwl_mvm_alive_data VAR_12;
 const struct fw_img *VAR_13;
 int VAR_14, VAR_15;
 enum iwl_ucode_type VAR_16 = VAR_9->cur_ucode;
 static const u8 VAR_17[] = { 128 };

 VAR_9->cur_ucode = VAR_10;
 VAR_13 = FUNC_3(VAR_9, VAR_10);

 VAR_9->ucode_loaded = 0;

 if (!VAR_13)
  return -VAR_0;

 FUNC_4(&VAR_9->notif_wait, &VAR_11,
       VAR_17, FUNC_0(VAR_17),
       VAR_8, &VAR_12);

 VAR_14 = FUNC_7(VAR_9->trans, VAR_13, VAR_10 == VAR_6);
 if (VAR_14) {
  VAR_9->cur_ucode = VAR_16;
  FUNC_5(&VAR_9->notif_wait, &VAR_11);
  return VAR_14;
 }





 VAR_14 = FUNC_8(&VAR_9->notif_wait, &VAR_11,
        VAR_7);
 if (VAR_14) {
  VAR_9->cur_ucode = VAR_16;
  return VAR_14;
 }

 if (!VAR_12.valid) {
  FUNC_1(VAR_9, "Loaded ucode is not valid!\n");
  VAR_9->cur_ucode = VAR_16;
  return -VAR_1;
 }

 FUNC_6(VAR_9->trans, VAR_12.scd_base_addr);
 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
  if (VAR_15 < VAR_5 && VAR_15 != VAR_4)
   VAR_9->queue_to_mac80211[VAR_15] = VAR_15;
  else
   VAR_9->queue_to_mac80211[VAR_15] = VAR_2;
  FUNC_2(&VAR_9->queue_stop_count[VAR_15], 0);
 }

 VAR_9->transport_queue_stop = 0;

 VAR_9->ucode_loaded = 1;

 return 0;
}
