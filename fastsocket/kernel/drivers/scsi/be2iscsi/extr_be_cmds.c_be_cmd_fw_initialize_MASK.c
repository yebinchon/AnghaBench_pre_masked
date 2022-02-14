
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct beiscsi_hba {int dummy; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_ctrl_info {int mbox_lock; int pdev; int mbox_mem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct be_mcc_wrb*,int) ;
 int FUNC_1 (struct be_ctrl_info*) ;
 int FUNC_2 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_3 (struct be_mcc_wrb*,int ,int) ;
 struct beiscsi_hba* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct be_mcc_wrb* FUNC_7 (int *) ;

int FUNC_8(struct be_ctrl_info *VAR_2)
{
 struct be_mcc_wrb *VAR_3 = FUNC_7(&VAR_2->mbox_mem);
 struct beiscsi_hba *VAR_4 = FUNC_4(VAR_2->pdev);
 int VAR_5;
 u8 *VAR_6;

 FUNC_5(&VAR_2->mbox_lock);
 FUNC_3(VAR_3, 0, sizeof(*VAR_3));

 VAR_6 = (u8 *) VAR_3;
 *VAR_6++ = 0xFF;
 *VAR_6++ = 0x12;
 *VAR_6++ = 0x34;
 *VAR_6++ = 0xFF;
 *VAR_6++ = 0xFF;
 *VAR_6++ = 0x56;
 *VAR_6++ = 0x78;
 *VAR_6++ = 0xFF;
 FUNC_0(VAR_3, sizeof(*VAR_3));

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5)
  FUNC_2(VAR_4, VAR_1, VAR_0,
       "BC_%d : be_cmd_fw_initialize Failed\n");

 FUNC_6(&VAR_2->mbox_lock);
 return VAR_5;
}
