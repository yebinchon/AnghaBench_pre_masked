
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {void* dbgfs_drv; void* dbgfs_dir; struct iwl_trans* trans; int dev; int list; int request_firmware_complete; struct iwl_cfg const* cfg; } ;
struct iwl_drv {void* dbgfs_drv; void* dbgfs_dir; struct iwl_drv* trans; int dev; int list; int request_firmware_complete; struct iwl_cfg const* cfg; } ;
struct iwl_cfg {int dummy; } ;


 int VAR_0 ;
 struct iwl_trans* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwl_trans*,char*) ;
 void* FUNC_3 (char*,void*) ;
 int FUNC_4 (void*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 void* VAR_2 ;
 int FUNC_7 (struct iwl_trans*,int) ;
 int FUNC_8 (struct iwl_trans*) ;
 struct iwl_trans* FUNC_9 (int,int ) ;

struct iwl_drv *FUNC_10(struct iwl_trans *VAR_3,
         const struct iwl_cfg *VAR_4)
{
 struct iwl_drv *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_9(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->trans = VAR_3;
 VAR_5->dev = VAR_3->dev;
 VAR_5->cfg = VAR_4;

 FUNC_6(&VAR_5->request_firmware_complete);
 FUNC_1(&VAR_5->list);
 VAR_6 = FUNC_7(VAR_5, 1);
 if (VAR_6) {
  FUNC_2(VAR_3, "Couldn't request the fw\n");
  goto err_fw;
 }

 return VAR_5;

err_fw:





 FUNC_8(VAR_5);

 return FUNC_0(VAR_6);
}
