
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ptr; } ;
struct scsi_cmnd {int device; TYPE_1__ SCp; } ;
struct iscsi_task {struct iscsi_conn* conn; struct beiscsi_io_task* dd_data; int sc; } ;
struct iscsi_session {int lock; } ;
struct iscsi_conn {struct beiscsi_conn* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct invalidate_commands_params_in {int dummy; } ;
struct invalidate_command_table {unsigned int cid; int icd; } ;
struct beiscsi_io_task {TYPE_2__* psgl_handle; int scsi_cmnd; } ;
struct TYPE_6__ {int pdev; } ;
struct beiscsi_hba {TYPE_3__ ctrl; struct invalidate_command_table* inv_tbl; } ;
struct beiscsi_conn {unsigned int beiscsi_conn_cid; struct beiscsi_hba* phba; } ;
struct be_dma_mem {int size; int dma; int * va; } ;
struct TYPE_5__ {int sgl_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_1 (struct beiscsi_hba*,unsigned int,int *,int *) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct invalidate_command_table*,int,int) ;
 unsigned int FUNC_4 (struct beiscsi_hba*,struct invalidate_command_table*,unsigned int,unsigned int,struct be_dma_mem*) ;
 int * FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int ,int,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct iscsi_cls_session* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct scsi_cmnd *VAR_5)
{
 struct iscsi_cls_session *VAR_6;
 struct iscsi_task *VAR_7 = (struct iscsi_task *)VAR_5->SCp.ptr;
 struct beiscsi_io_task *VAR_8;
 struct iscsi_conn *VAR_9;
 struct beiscsi_conn *VAR_10;
 struct beiscsi_hba *VAR_11;
 struct iscsi_session *VAR_12;
 struct invalidate_command_table *VAR_13;
 struct be_dma_mem VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17;

 VAR_6 = FUNC_10(FUNC_7(VAR_5->device));
 VAR_12 = VAR_6->dd_data;

 FUNC_8(&VAR_12->lock);
 if (!VAR_7 || !VAR_7->sc) {

  FUNC_9(&VAR_12->lock);
  return VAR_4;
 }

 VAR_8 = VAR_7->dd_data;
 if (!VAR_8->scsi_cmnd) {

  FUNC_9(&VAR_12->lock);
  return VAR_4;
 }
 FUNC_9(&VAR_12->lock);
 VAR_9 = VAR_7->conn;
 VAR_10 = VAR_9->dd_data;
 VAR_11 = VAR_10->phba;


 VAR_15 = VAR_10->beiscsi_conn_cid;
 VAR_13 = VAR_11->inv_tbl;
 FUNC_3(VAR_13, 0x0, sizeof(*VAR_13));
 VAR_13->cid = VAR_15;
 VAR_13->icd = VAR_8->psgl_handle->sgl_index;
 VAR_17 = 1;
 VAR_14.va = FUNC_5(VAR_11->ctrl.pdev,
    sizeof(struct invalidate_commands_params_in),
    &VAR_14.dma);
 if (VAR_14.va == ((void*)0)) {
  FUNC_0(VAR_11, VAR_2, VAR_0,
       "BM_%d : Failed to allocate memory for"
       "mgmt_invalidate_icds\n");
  return VAR_1;
 }
 VAR_14.size = sizeof(struct invalidate_commands_params_in);

 VAR_16 = FUNC_4(VAR_11, VAR_13, VAR_17,
       VAR_15, &VAR_14);
 if (!VAR_16) {
  FUNC_0(VAR_11, VAR_3, VAR_0,
       "BM_%d : mgmt_invalidate_icds could not be"
       "submitted\n");
  FUNC_6(VAR_11->ctrl.pdev, VAR_14.size,
        VAR_14.va, VAR_14.dma);

  return VAR_1;
 }

 FUNC_1(VAR_11, VAR_16, ((void*)0), VAR_14.va);
 FUNC_6(VAR_11->ctrl.pdev, VAR_14.size,
       VAR_14.va, VAR_14.dma);
 return FUNC_2(VAR_5);
}
