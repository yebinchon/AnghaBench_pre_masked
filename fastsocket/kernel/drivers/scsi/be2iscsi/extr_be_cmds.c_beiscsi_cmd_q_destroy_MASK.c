
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct beiscsi_hba {int dummy; } ;
struct be_queue_info {int id; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_ctrl_info {int mbox_lock; int pdev; int mbox_mem; } ;
struct be_cmd_req_q_destroy {int id; int hdr; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;






 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct be_ctrl_info*) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 int FUNC_4 (struct beiscsi_hba*,int ,int ,char*,int) ;
 int FUNC_5 (int ) ;
 struct be_cmd_req_q_destroy* FUNC_6 (struct be_mcc_wrb*) ;
 int FUNC_7 (struct be_mcc_wrb*,int ,int) ;
 struct beiscsi_hba* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct be_mcc_wrb* FUNC_11 (int *) ;

int FUNC_12(struct be_ctrl_info *VAR_11, struct be_queue_info *VAR_12,
     int VAR_13)
{
 struct be_mcc_wrb *VAR_14 = FUNC_11(&VAR_11->mbox_mem);
 struct be_cmd_req_q_destroy *VAR_15 = FUNC_6(VAR_14);
 struct beiscsi_hba *VAR_16 = FUNC_8(VAR_11->pdev);
 u8 VAR_17 = 0, VAR_18 = 0;
 int VAR_19;

 FUNC_4(VAR_16, VAR_4, VAR_0,
      "BC_%d : In beiscsi_cmd_q_destroy "
      "queue_type : %d\n", VAR_13);

 FUNC_9(&VAR_11->mbox_lock);
 FUNC_7(VAR_14, 0, sizeof(*VAR_14));
 FUNC_3(VAR_14, sizeof(*VAR_15), 1, 0);

 switch (VAR_13) {
 case 131:
  VAR_17 = VAR_1;
  VAR_18 = VAR_6;
  break;
 case 133:
  VAR_17 = VAR_1;
  VAR_18 = VAR_5;
  break;
 case 130:
  VAR_17 = VAR_1;
  VAR_18 = VAR_10;
  break;
 case 128:
  VAR_17 = VAR_2;
  VAR_18 = VAR_9;
  break;
 case 132:
  VAR_17 = VAR_2;
  VAR_18 = VAR_8;
  break;
 case 129:
  VAR_17 = VAR_2;
  VAR_18 = VAR_7;
  break;
 default:
  FUNC_10(&VAR_11->mbox_lock);
  FUNC_0();
  return -VAR_3;
 }
 FUNC_1(&VAR_15->hdr, VAR_17, VAR_18, sizeof(*VAR_15));
 if (VAR_13 != 129)
  VAR_15->id = FUNC_5(VAR_12->id);

 VAR_19 = FUNC_2(VAR_11);

 FUNC_10(&VAR_11->mbox_lock);
 return VAR_19;
}
