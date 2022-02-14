
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int trans; int * fw_id_to_mac_id; int phy_db; int fw; int mutex; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*,int ) ;
 int FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct iwl_mvm*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct iwl_mvm *VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_10(&VAR_2->mutex);

 VAR_3 = FUNC_8(VAR_2->trans);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_4(VAR_2, VAR_1);
 if (VAR_3) {
  FUNC_0(VAR_2, "Failed to start WoWLAN firmware: %d\n", VAR_3);
  goto error;
 }

 VAR_3 = FUNC_7(VAR_2, FUNC_2(VAR_2->fw));
 if (VAR_3)
  goto error;


 VAR_3 = FUNC_6(VAR_2->phy_db);
 if (VAR_3)
  goto error;

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  goto error;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_1(VAR_2->fw_id_to_mac_id[VAR_4], ((void*)0));


 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  goto error;

 return 0;
 error:
 FUNC_9(VAR_2->trans);
 return VAR_3;
}
