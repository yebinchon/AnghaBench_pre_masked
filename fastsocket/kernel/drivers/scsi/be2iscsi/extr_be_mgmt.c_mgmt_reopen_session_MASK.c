
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_ctrl_info {int mbox_lock; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct be_mcc_wrb {unsigned int tag0; } ;
struct be_cmd_reopen_session_resp {int dummy; } ;
struct be_cmd_reopen_session_req {unsigned int reopen_type; unsigned int session_handle; int hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 int FUNC_4 (struct beiscsi_hba*,int ,int,char*) ;
 struct be_cmd_reopen_session_req* FUNC_5 (struct be_mcc_wrb*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct be_mcc_wrb* FUNC_8 (struct beiscsi_hba*) ;

unsigned int FUNC_9(struct beiscsi_hba *VAR_5,
      unsigned int VAR_6,
      unsigned int VAR_7)
{
 struct be_ctrl_info *VAR_8 = &VAR_5->ctrl;
 struct be_mcc_wrb *VAR_9;
 struct be_cmd_reopen_session_req *VAR_10;
 unsigned int VAR_11 = 0;

 FUNC_4(VAR_5, VAR_3,
      VAR_0 | VAR_1,
      "BG_%d : In bescsi_get_boot_target\n");

 FUNC_6(&VAR_8->mbox_lock);
 VAR_11 = FUNC_0(VAR_5);
 if (!VAR_11) {
  FUNC_7(&VAR_8->mbox_lock);
  return VAR_11;
 }

 VAR_9 = FUNC_8(VAR_5);
 VAR_10 = FUNC_5(VAR_9);
 VAR_9->tag0 |= VAR_11;
 FUNC_3(VAR_9, sizeof(*VAR_10), 1, 0);
 FUNC_1(&VAR_10->hdr, VAR_2,
      VAR_4,
      sizeof(struct be_cmd_reopen_session_resp));


 VAR_10->reopen_type = VAR_6;
 VAR_10->session_handle = VAR_7;

 FUNC_2(VAR_5);
 FUNC_7(&VAR_8->mbox_lock);
 return VAR_11;
}
