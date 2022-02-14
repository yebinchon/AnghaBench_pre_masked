
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_cmnd {int device; } ;
struct iscsi_task {scalar_t__ state; TYPE_3__* sc; struct beiscsi_io_task* dd_data; } ;
struct iscsi_session {scalar_t__ state; int lock; struct iscsi_conn* leadconn; } ;
struct iscsi_conn {TYPE_1__* session; struct beiscsi_conn* dd_data; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct invalidate_commands_params_in {int dummy; } ;
struct invalidate_command_table {unsigned int cid; int icd; } ;
struct beiscsi_io_task {TYPE_4__* psgl_handle; } ;
struct TYPE_10__ {int pdev; } ;
struct beiscsi_hba {TYPE_5__ ctrl; struct invalidate_command_table* inv_tbl; } ;
struct beiscsi_conn {unsigned int beiscsi_conn_cid; struct beiscsi_hba* phba; } ;
struct be_dma_mem {int size; int dma; struct invalidate_command_table* va; } ;
struct TYPE_9__ {int sgl_index; } ;
struct TYPE_8__ {TYPE_2__* device; } ;
struct TYPE_7__ {scalar_t__ lun; } ;
struct TYPE_6__ {unsigned int cmds_max; struct iscsi_task** cmds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_1 (struct beiscsi_hba*,unsigned int,int *,struct invalidate_command_table*) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct invalidate_command_table*,int,int) ;
 unsigned int FUNC_4 (struct beiscsi_hba*,struct invalidate_command_table*,unsigned int,unsigned int,struct be_dma_mem*) ;
 struct invalidate_command_table* FUNC_5 (int ,int,int *) ;
 int FUNC_6 (int ,int,struct invalidate_command_table*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct iscsi_cls_session* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct scsi_cmnd *VAR_7)
{
 struct iscsi_task *VAR_8;
 struct beiscsi_io_task *VAR_9;
 struct iscsi_conn *VAR_10;
 struct beiscsi_conn *VAR_11;
 struct beiscsi_hba *VAR_12;
 struct iscsi_session *VAR_13;
 struct iscsi_cls_session *VAR_14;
 struct invalidate_command_table *VAR_15;
 struct be_dma_mem VAR_16;
 unsigned int VAR_17, VAR_18, VAR_19, VAR_20;


 VAR_14 = FUNC_10(FUNC_7(VAR_7->device));
 VAR_13 = VAR_14->dd_data;
 FUNC_8(&VAR_13->lock);
 if (!VAR_13->leadconn || VAR_13->state != VAR_3) {
  FUNC_9(&VAR_13->lock);
  return VAR_2;
 }
 VAR_10 = VAR_13->leadconn;
 VAR_11 = VAR_10->dd_data;
 VAR_12 = VAR_11->phba;
 VAR_17 = VAR_11->beiscsi_conn_cid;
 VAR_15 = VAR_12->inv_tbl;
 FUNC_3(VAR_15, 0x0, sizeof(*VAR_15) * VAR_0);
 VAR_20 = 0;
 for (VAR_19 = 0; VAR_19 < VAR_10->session->cmds_max; VAR_19++) {
  VAR_8 = VAR_10->session->cmds[VAR_19];
  VAR_9 = VAR_8->dd_data;
  if (!VAR_8->sc || VAR_8->state == VAR_4)
   continue;

  if (VAR_8->sc->device->lun != VAR_8->sc->device->lun)
   continue;

  VAR_15->cid = VAR_17;
  VAR_15->icd = VAR_9->psgl_handle->sgl_index;
  VAR_20++;
  VAR_15++;
 }
 FUNC_9(&VAR_13->lock);
 VAR_15 = VAR_12->inv_tbl;

 VAR_16.va = FUNC_5(VAR_12->ctrl.pdev,
    sizeof(struct invalidate_commands_params_in),
    &VAR_16.dma);
 if (VAR_16.va == ((void*)0)) {
  FUNC_0(VAR_12, VAR_5, VAR_1,
       "BM_%d : Failed to allocate memory for"
       "mgmt_invalidate_icds\n");
  return VAR_2;
 }
 VAR_16.size = sizeof(struct invalidate_commands_params_in);
 FUNC_3(VAR_16.va, 0, VAR_16.size);
 VAR_18 = FUNC_4(VAR_12, VAR_15, VAR_20,
       VAR_17, &VAR_16);
 if (!VAR_18) {
  FUNC_0(VAR_12, VAR_6, VAR_1,
       "BM_%d : mgmt_invalidate_icds could not be"
       " submitted\n");
  FUNC_6(VAR_12->ctrl.pdev, VAR_16.size,
        VAR_16.va, VAR_16.dma);
  return VAR_2;
 }

 FUNC_1(VAR_12, VAR_18, ((void*)0), VAR_16.va);
 FUNC_6(VAR_12->ctrl.pdev, VAR_16.size,
       VAR_16.va, VAR_16.dma);
 return FUNC_2(VAR_7);
}
