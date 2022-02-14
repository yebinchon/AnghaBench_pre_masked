
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct be_queue_info {scalar_t__ created; } ;
struct TYPE_2__ {struct be_queue_info cq; struct be_queue_info q; } ;
struct be_ctrl_info {TYPE_1__ mcc_obj; } ;
struct beiscsi_hba {struct be_ctrl_info ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct beiscsi_hba*,struct be_queue_info*) ;
 int FUNC_1 (struct be_ctrl_info*,struct be_queue_info*,int ) ;

__attribute__((used)) static void FUNC_2(struct beiscsi_hba *VAR_2)
{
 struct be_queue_info *VAR_3;
 struct be_ctrl_info *VAR_4 = &VAR_2->ctrl;

 VAR_3 = &VAR_2->ctrl.mcc_obj.q;
 if (VAR_3->created)
  FUNC_1(VAR_4, VAR_3, VAR_1);
 FUNC_0(VAR_2, VAR_3);

 VAR_3 = &VAR_2->ctrl.mcc_obj.cq;
 if (VAR_3->created)
  FUNC_1(VAR_4, VAR_3, VAR_0);
 FUNC_0(VAR_2, VAR_3);
}
