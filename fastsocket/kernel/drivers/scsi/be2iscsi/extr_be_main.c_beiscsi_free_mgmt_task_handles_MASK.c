
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct iscsi_wrb {int dummy; } ;
struct iscsi_task {struct beiscsi_io_task* dd_data; } ;
struct hwi_wrb_context {int dummy; } ;
struct hwi_controller {struct hwi_wrb_context* wrb_context; } ;
struct beiscsi_io_task {int mtask_data_count; scalar_t__ mtask_addr; int * psgl_handle; TYPE_1__* pwrb_handle; } ;
struct beiscsi_hba {int pcidev; int mgmt_sgl_lock; struct hwi_controller* phwi_ctrlr; } ;
struct beiscsi_conn {int beiscsi_conn_cid; struct beiscsi_hba* phba; } ;
struct TYPE_2__ {int pwrb; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct beiscsi_hba*,int *) ;
 int FUNC_2 (struct beiscsi_hba*,struct hwi_wrb_context*,TYPE_1__*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,scalar_t__,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct beiscsi_conn *VAR_1,
    struct iscsi_task *VAR_2)
{
 struct beiscsi_io_task *VAR_3;
 struct beiscsi_hba *VAR_4 = VAR_1->phba;
 struct hwi_wrb_context *VAR_5;
 struct hwi_controller *VAR_6;
 uint16_t VAR_7 = FUNC_0(
    VAR_1->beiscsi_conn_cid);

 VAR_6 = VAR_4->phwi_ctrlr;
 VAR_5 = &VAR_6->wrb_context[VAR_7];

 VAR_3 = VAR_2->dd_data;

 if (VAR_3->pwrb_handle) {
  FUNC_3(VAR_3->pwrb_handle->pwrb, 0,
         sizeof(struct iscsi_wrb));
  FUNC_2(VAR_4, VAR_5,
    VAR_3->pwrb_handle);
  VAR_3->pwrb_handle = ((void*)0);
 }

 if (VAR_3->psgl_handle) {
  FUNC_5(&VAR_4->mgmt_sgl_lock);
  FUNC_1(VAR_4,
         VAR_3->psgl_handle);
  VAR_3->psgl_handle = ((void*)0);
  FUNC_6(&VAR_4->mgmt_sgl_lock);
 }

 if (VAR_3->mtask_addr)
  FUNC_4(VAR_4->pcidev,
     VAR_3->mtask_addr,
     VAR_3->mtask_data_count,
     VAR_0);
}
