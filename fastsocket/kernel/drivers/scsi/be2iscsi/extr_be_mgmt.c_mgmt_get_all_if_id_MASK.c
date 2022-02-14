
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_ctrl_info {int mbox_lock; int mbox_mem; } ;
struct beiscsi_hba {int interface_handle; struct be_ctrl_info ctrl; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_cmd_get_all_if_id_req {int * if_hndl_list; int hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (struct be_ctrl_info*) ;
 int FUNC_2 (struct be_mcc_wrb*,int,int,int ) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int ,char*) ;
 struct be_cmd_get_all_if_id_req* FUNC_4 (struct be_mcc_wrb*) ;
 int FUNC_5 (struct be_mcc_wrb*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct be_mcc_wrb* FUNC_8 (int *) ;

unsigned int FUNC_9(struct beiscsi_hba *VAR_4)
{
 struct be_ctrl_info *VAR_5 = &VAR_4->ctrl;
 struct be_mcc_wrb *VAR_6 = FUNC_8(&VAR_5->mbox_mem);
 struct be_cmd_get_all_if_id_req *VAR_7 = FUNC_4(VAR_6);
 struct be_cmd_get_all_if_id_req *VAR_8 = VAR_7;
 int VAR_9 = 0;

 FUNC_5(VAR_6, 0, sizeof(*VAR_6));

 FUNC_6(&VAR_5->mbox_lock);

 FUNC_2(VAR_6, sizeof(*VAR_7), 1, 0);
 FUNC_0(&VAR_7->hdr, VAR_1,
      VAR_3,
      sizeof(*VAR_7));
 VAR_9 = FUNC_1(VAR_5);
 if (!VAR_9)
  VAR_4->interface_handle = VAR_8->if_hndl_list[0];
 else {
  FUNC_3(VAR_4, VAR_2, VAR_0,
       "BG_%d : Failed in mgmt_get_all_if_id\n");
 }
 FUNC_7(&VAR_5->mbox_lock);

 return VAR_9;
}
