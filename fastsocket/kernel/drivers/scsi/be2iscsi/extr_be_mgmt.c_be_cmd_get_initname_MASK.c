
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_ctrl_info {int mbox_lock; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct be_mcc_wrb {unsigned int tag0; } ;
struct be_cmd_hba_name {int hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 struct be_cmd_hba_name* FUNC_4 (struct be_mcc_wrb*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct be_mcc_wrb* FUNC_7 (struct beiscsi_hba*) ;

unsigned int FUNC_8(struct beiscsi_hba *VAR_2)
{
 unsigned int VAR_3 = 0;
 struct be_mcc_wrb *VAR_4;
 struct be_cmd_hba_name *VAR_5;
 struct be_ctrl_info *VAR_6 = &VAR_2->ctrl;

 FUNC_5(&VAR_6->mbox_lock);
 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3) {
  FUNC_6(&VAR_6->mbox_lock);
  return VAR_3;
 }

 VAR_4 = FUNC_7(VAR_2);
 VAR_5 = FUNC_4(VAR_4);
 VAR_4->tag0 |= VAR_3;
 FUNC_3(VAR_4, sizeof(*VAR_5), 1, 0);
 FUNC_1(&VAR_5->hdr, VAR_0,
   VAR_1,
   sizeof(*VAR_5));

 FUNC_2(VAR_2);
 FUNC_6(&VAR_6->mbox_lock);
 return VAR_3;
}
