
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_cleanup_req {unsigned short chute; void* data_ring_id; void* hdr_ring_id; int hdr; } ;
struct be_ctrl_info {int mbox_lock; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct be_mcc_wrb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int ,int) ;
 int FUNC_3 (struct beiscsi_hba*) ;
 int FUNC_4 (struct be_mcc_wrb*,int,int,int ) ;
 int FUNC_5 (struct beiscsi_hba*,int ,int ,char*) ;
 void* FUNC_6 (int ) ;
 struct iscsi_cleanup_req* FUNC_7 (struct be_mcc_wrb*) ;
 int FUNC_8 (struct be_mcc_wrb*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct be_mcc_wrb* FUNC_11 (struct beiscsi_hba*) ;

int FUNC_12(struct beiscsi_hba *VAR_4, unsigned short VAR_5)
{
 struct be_ctrl_info *VAR_6 = &VAR_4->ctrl;
 struct be_mcc_wrb *VAR_7 = FUNC_11(VAR_4);
 struct iscsi_cleanup_req *VAR_8 = FUNC_7(VAR_7);
 int VAR_9 = 0;

 FUNC_9(&VAR_6->mbox_lock);
 FUNC_8(VAR_7, 0, sizeof(*VAR_7));

 FUNC_4(VAR_7, sizeof(*VAR_8), 1, 0);
 FUNC_2(&VAR_8->hdr, VAR_1,
      VAR_3, sizeof(*VAR_8));

 VAR_8->chute = VAR_5;
 VAR_8->hdr_ring_id = FUNC_6(FUNC_1(VAR_4));
 VAR_8->data_ring_id = FUNC_6(FUNC_0(VAR_4));

 VAR_9 = FUNC_3(VAR_4);
 if (VAR_9)
  FUNC_5(VAR_4, VAR_2, VAR_0,
       "BG_%d : mgmt_epfw_cleanup , FAILED\n");
 FUNC_10(&VAR_6->mbox_lock);
 return VAR_9;
}
