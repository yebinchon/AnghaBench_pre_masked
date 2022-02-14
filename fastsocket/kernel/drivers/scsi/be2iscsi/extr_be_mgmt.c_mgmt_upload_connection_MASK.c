
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_upload_params_in {unsigned short id; unsigned char upload_type; int hdr; } ;
struct be_ctrl_info {int mbox_lock; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;
struct be_mcc_wrb {unsigned int tag0; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct beiscsi_hba*) ;
 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct beiscsi_hba*) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 struct tcp_upload_params_in* FUNC_4 (struct be_mcc_wrb*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct be_mcc_wrb* FUNC_7 (struct beiscsi_hba*) ;

unsigned int FUNC_8(struct beiscsi_hba *VAR_2,
    unsigned short VAR_3, unsigned int VAR_4)
{
 struct be_ctrl_info *VAR_5 = &VAR_2->ctrl;
 struct be_mcc_wrb *VAR_6;
 struct tcp_upload_params_in *VAR_7;
 unsigned int VAR_8 = 0;

 FUNC_5(&VAR_5->mbox_lock);
 VAR_8 = FUNC_0(VAR_2);
 if (!VAR_8) {
  FUNC_6(&VAR_5->mbox_lock);
  return VAR_8;
 }
 VAR_6 = FUNC_7(VAR_2);
 VAR_7 = FUNC_4(VAR_6);
 VAR_6->tag0 |= VAR_8;

 FUNC_3(VAR_6, sizeof(*VAR_7), 1, 0);
 FUNC_1(&VAR_7->hdr, VAR_0,
      VAR_1, sizeof(*VAR_7));
 VAR_7->id = (unsigned short)VAR_3;
 VAR_7->upload_type = (unsigned char)VAR_4;
 FUNC_2(VAR_2);
 FUNC_6(&VAR_5->mbox_lock);
 return VAR_8;
}
