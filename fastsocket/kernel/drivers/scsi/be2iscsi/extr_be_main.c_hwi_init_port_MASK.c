
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phys_addr {int dummy; } ;
struct hwi_controller {struct hwi_context_memory* phwi_ctxt; } ;
struct hwi_context_memory {int cur_eqd; scalar_t__ min_eqd; scalar_t__ max_eqd; } ;
struct be_ctrl_info {int dummy; } ;
struct TYPE_2__ {int asyncpdus_per_ctrl; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; struct hwi_controller* phwi_ctrlr; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct be_ctrl_info*) ;
 int FUNC_1 (struct beiscsi_hba*,struct hwi_context_memory*) ;
 int FUNC_2 (struct beiscsi_hba*,struct hwi_context_memory*) ;
 int FUNC_3 (struct beiscsi_hba*,struct hwi_context_memory*,struct hwi_controller*,unsigned int) ;
 int FUNC_4 (struct beiscsi_hba*,struct hwi_context_memory*,struct hwi_controller*,unsigned int) ;
 int FUNC_5 (struct beiscsi_hba*,struct hwi_context_memory*) ;
 int FUNC_6 (struct beiscsi_hba*,struct hwi_context_memory*,struct hwi_controller*) ;
 int FUNC_7 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_8 (struct beiscsi_hba*) ;
 int FUNC_9 (struct beiscsi_hba*) ;
 int FUNC_10 (struct be_ctrl_info*,struct beiscsi_hba*) ;

__attribute__((used)) static int FUNC_11(struct beiscsi_hba *VAR_3)
{
 struct hwi_controller *VAR_4;
 struct hwi_context_memory *VAR_5;
 unsigned int VAR_6;
 struct be_ctrl_info *VAR_7 = &VAR_3->ctrl;
 int VAR_8;

 VAR_6 =
  VAR_3->params.asyncpdus_per_ctrl * sizeof(struct phys_addr);
 VAR_4 = VAR_3->phwi_ctrlr;
 VAR_5 = VAR_4->phwi_ctxt;
 VAR_5->max_eqd = 0;
 VAR_5->min_eqd = 0;
 VAR_5->cur_eqd = 64;
 FUNC_0(&VAR_3->ctrl);

 VAR_8 = FUNC_5(VAR_3, VAR_5);
 if (VAR_8 != 0) {
  FUNC_7(VAR_3, VAR_1, VAR_0,
       "BM_%d : EQ not created\n");
  goto error;
 }

 VAR_8 = FUNC_1(VAR_3, VAR_5);
 if (VAR_8 != 0)
  goto error;

 VAR_8 = FUNC_10(VAR_7, VAR_3);
 if (VAR_8 != 0) {
  FUNC_7(VAR_3, VAR_1, VAR_0,
       "BM_%d : Unsupported fw version\n");
  goto error;
 }

 VAR_8 = FUNC_2(VAR_3, VAR_5);
 if (VAR_8 != 0) {
  FUNC_7(VAR_3, VAR_1, VAR_0,
       "BM_%d : CQ not created\n");
  goto error;
 }

 VAR_8 = FUNC_4(VAR_3, VAR_5, VAR_4,
     VAR_6);
 if (VAR_8 != 0) {
  FUNC_7(VAR_3, VAR_1, VAR_0,
       "BM_%d : Default Header not created\n");
  goto error;
 }

 VAR_8 = FUNC_3(VAR_3, VAR_5,
      VAR_4, VAR_6);
 if (VAR_8 != 0) {
  FUNC_7(VAR_3, VAR_1, VAR_0,
       "BM_%d : Default Data not created\n");
  goto error;
 }

 VAR_8 = FUNC_8(VAR_3);
 if (VAR_8 != 0) {
  FUNC_7(VAR_3, VAR_1, VAR_0,
       "BM_%d : Post SGL Pages Failed\n");
  goto error;
 }

 VAR_8 = FUNC_6(VAR_3, VAR_5, VAR_4);
 if (VAR_8 != 0) {
  FUNC_7(VAR_3, VAR_1, VAR_0,
       "BM_%d : WRB Rings not created\n");
  goto error;
 }

 FUNC_7(VAR_3, VAR_2, VAR_0,
      "BM_%d : hwi_init_port success\n");
 return 0;

error:
 FUNC_7(VAR_3, VAR_1, VAR_0,
      "BM_%d : hwi_init_port failed");
 FUNC_9(VAR_3);
 return VAR_8;
}
