
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_invalidate_connection_params_in {unsigned short cid; unsigned short save_cfg; int cleanup_type; int session_handle; int hdr; } ;
struct be_ctrl_info {int mbox_lock; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct beiscsi_endpoint {int fw_handle; } ;
struct be_mcc_wrb {unsigned int tag0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 struct iscsi_invalidate_connection_params_in* FUNC_4 (struct be_mcc_wrb*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct be_mcc_wrb* FUNC_7 (struct beiscsi_hba*) ;

unsigned int FUNC_8(struct beiscsi_hba *VAR_4,
      struct beiscsi_endpoint *VAR_5,
      unsigned short VAR_6,
      unsigned short VAR_7,
      unsigned short VAR_8)
{
 struct be_ctrl_info *VAR_9 = &VAR_4->ctrl;
 struct be_mcc_wrb *VAR_10;
 struct iscsi_invalidate_connection_params_in *VAR_11;
 unsigned int VAR_12 = 0;

 FUNC_5(&VAR_9->mbox_lock);
 VAR_12 = FUNC_0(VAR_4);
 if (!VAR_12) {
  FUNC_6(&VAR_9->mbox_lock);
  return VAR_12;
 }
 VAR_10 = FUNC_7(VAR_4);
 VAR_10->tag0 |= VAR_12;
 VAR_11 = FUNC_4(VAR_10);

 FUNC_3(VAR_10, sizeof(*VAR_11), 1, 0);
 FUNC_1(&VAR_11->hdr, VAR_2,
      VAR_3,
      sizeof(*VAR_11));
 VAR_11->session_handle = VAR_5->fw_handle;
 VAR_11->cid = VAR_6;
 if (VAR_7)
  VAR_11->cleanup_type = VAR_1;
 else
  VAR_11->cleanup_type = VAR_0;
 VAR_11->save_cfg = VAR_8;
 FUNC_2(VAR_4);
 FUNC_6(&VAR_9->mbox_lock);
 return VAR_12;
}
