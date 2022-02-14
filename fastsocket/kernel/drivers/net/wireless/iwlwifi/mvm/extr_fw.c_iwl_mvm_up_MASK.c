
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {int trans; int * fw_id_to_mac_id; int phy_db; int fw; int init_ucode_run; int mutex; } ;
struct TYPE_2__ {scalar_t__ init_dbg; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,int ) ;
 int FUNC_6 (struct iwl_mvm*,int) ;
 int FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct iwl_mvm*) ;
 int FUNC_9 (struct iwl_mvm*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct iwl_mvm*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_14 (int *) ;

int FUNC_15(struct iwl_mvm *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_14(&VAR_3->mutex);

 VAR_4 = FUNC_12(VAR_3->trans);
 if (VAR_4)
  return VAR_4;


 if (!VAR_3->init_ucode_run) {
  VAR_4 = FUNC_6(VAR_3, 0);
  if (VAR_4 && !VAR_2.init_dbg) {
   FUNC_1(VAR_3, "Failed to run INIT ucode: %d\n", VAR_4);
   goto error;
  }
 }

 if (VAR_2.init_dbg)
  return 0;

 VAR_4 = FUNC_5(VAR_3, VAR_1);
 if (VAR_4) {
  FUNC_1(VAR_3, "Failed to start RT ucode: %d\n", VAR_4);
  goto error;
 }

 VAR_4 = FUNC_11(VAR_3, FUNC_3(VAR_3->fw));
 if (VAR_4)
  goto error;

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4)
  goto error;

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4)
  goto error;


 VAR_4 = FUNC_10(VAR_3->phy_db);
 if (VAR_4)
  goto error;

 VAR_4 = FUNC_9(VAR_3);
 if (VAR_4)
  goto error;


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_2(VAR_3->fw_id_to_mac_id[VAR_5], ((void*)0));


 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  goto error;

 FUNC_0(VAR_3, "RT uCode started.\n");

 return 0;
 error:
 FUNC_13(VAR_3->trans);
 return VAR_4;
}
