
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_tx_path_flush_cmd {int flush_ctl; int queues_ctl; } ;
struct iwl_mvm {int dummy; } ;
typedef int flush_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_mvm*,int ,int ,int,struct iwl_tx_path_flush_cmd*) ;

int FUNC_4(struct iwl_mvm *VAR_4, u32 VAR_5, bool VAR_6)
{
 int VAR_7;
 struct iwl_tx_path_flush_cmd VAR_8 = {
  .queues_ctl = FUNC_2(VAR_5),
  .flush_ctl = FUNC_1(VAR_2),
 };

 u32 VAR_9 = VAR_6 ? VAR_1 : VAR_0;

 VAR_7 = FUNC_3(VAR_4, VAR_3, VAR_9,
       sizeof(VAR_8), &VAR_8);
 if (VAR_7)
  FUNC_0(VAR_4, "Failed to send flush command (%d)\n", VAR_7);
 return VAR_7;
}
