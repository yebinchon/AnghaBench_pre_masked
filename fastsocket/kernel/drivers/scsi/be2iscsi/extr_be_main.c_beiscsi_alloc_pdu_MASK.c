
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct sgl_handle {scalar_t__ sgl_index; } ;
struct iscsi_task {int hdr_max; scalar_t__ sc; struct iscsi_hdr* hdr; scalar_t__ itt; struct iscsi_conn* conn; struct beiscsi_io_task* dd_data; } ;
struct iscsi_hdr {int dummy; } ;
struct iscsi_conn {struct beiscsi_conn* dd_data; } ;
struct hwi_wrb_context {int dummy; } ;
struct hwi_controller {struct hwi_wrb_context* wrb_context; } ;
struct beiscsi_session {int bhs_pool; } ;
struct TYPE_8__ {int address; } ;
struct TYPE_9__ {TYPE_1__ a64; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct beiscsi_io_task {TYPE_5__* cmd_bhs; TYPE_3__ bhs_pa; TYPE_7__* pwrb_handle; struct sgl_handle* psgl_handle; int * scsi_cmnd; struct beiscsi_conn* conn; void* libiscsi_itt; } ;
struct beiscsi_hba {struct hwi_controller* phwi_ctrlr; int mgmt_sgl_lock; int io_sgl_lock; } ;
struct beiscsi_conn {int login_in_progress; int beiscsi_conn_cid; TYPE_7__* plogin_wrb_handle; struct sgl_handle* plogin_sgl_handle; struct iscsi_task* task; struct beiscsi_session* beiscsi_sess; struct beiscsi_hba* phba; } ;
struct be_cmd_bhs {int dummy; } ;
typedef void* itt_t ;
typedef int dma_addr_t ;
struct TYPE_13__ {struct iscsi_task* pio_handle; scalar_t__ wrb_index; } ;
struct TYPE_11__ {void* itt; } ;
struct TYPE_12__ {TYPE_4__ iscsi_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sgl_handle* FUNC_1 (struct beiscsi_hba*) ;
 struct sgl_handle* FUNC_2 (struct beiscsi_hba*) ;
 void* FUNC_3 (struct beiscsi_hba*,int ) ;
 int FUNC_4 (struct beiscsi_hba*,int ,int,char*,int ) ;
 scalar_t__ FUNC_5 (unsigned int) ;
 int FUNC_6 (struct beiscsi_hba*,struct sgl_handle*) ;
 int FUNC_7 (struct beiscsi_hba*,struct sgl_handle*) ;
 int FUNC_8 (struct beiscsi_hba*,struct hwi_wrb_context*,TYPE_7__*) ;
 TYPE_5__* FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ,TYPE_5__*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct iscsi_task *VAR_7, uint8_t VAR_8)
{
 struct beiscsi_io_task *VAR_9 = VAR_7->dd_data;
 struct iscsi_conn *VAR_10 = VAR_7->conn;
 struct beiscsi_conn *VAR_11 = VAR_10->dd_data;
 struct beiscsi_hba *VAR_12 = VAR_11->phba;
 struct hwi_wrb_context *VAR_13;
 struct hwi_controller *VAR_14;
 itt_t VAR_15;
 uint16_t VAR_16 = 0;
 struct beiscsi_session *VAR_17 = VAR_11->beiscsi_sess;
 dma_addr_t VAR_18;

 VAR_9->cmd_bhs = FUNC_9(VAR_17->bhs_pool,
       VAR_3, &VAR_18);
 if (!VAR_9->cmd_bhs)
  return -VAR_2;
 VAR_9->bhs_pa.u.a64.address = VAR_18;
 VAR_9->libiscsi_itt = (itt_t)VAR_7->itt;
 VAR_9->conn = VAR_11;

 VAR_7->hdr = (struct iscsi_hdr *)&VAR_9->cmd_bhs->iscsi_hdr;
 VAR_7->hdr_max = sizeof(struct be_cmd_bhs);
 VAR_9->psgl_handle = ((void*)0);
 VAR_9->pwrb_handle = ((void*)0);

 if (VAR_7->sc) {
  FUNC_11(&VAR_12->io_sgl_lock);
  VAR_9->psgl_handle = FUNC_1(VAR_12);
  FUNC_12(&VAR_12->io_sgl_lock);
  if (!VAR_9->psgl_handle) {
   FUNC_4(VAR_12, VAR_6,
        VAR_1 | VAR_0,
        "BM_%d : Alloc of IO_SGL_ICD Failed"
        "for the CID : %d\n",
        VAR_11->beiscsi_conn_cid);
   goto free_hndls;
  }
  VAR_9->pwrb_handle = FUNC_3(VAR_12,
     VAR_11->beiscsi_conn_cid);
  if (!VAR_9->pwrb_handle) {
   FUNC_4(VAR_12, VAR_6,
        VAR_1 | VAR_0,
        "BM_%d : Alloc of WRB_HANDLE Failed"
        "for the CID : %d\n",
        VAR_11->beiscsi_conn_cid);
   goto free_io_hndls;
  }
 } else {
  VAR_9->scsi_cmnd = ((void*)0);
  if ((VAR_8 & VAR_4) == VAR_5) {
   VAR_11->task = VAR_7;
   if (!VAR_11->login_in_progress) {
    FUNC_11(&VAR_12->mgmt_sgl_lock);
    VAR_9->psgl_handle = (struct sgl_handle *)
      FUNC_2(VAR_12);
    FUNC_12(&VAR_12->mgmt_sgl_lock);
    if (!VAR_9->psgl_handle) {
     FUNC_4(VAR_12, VAR_6,
          VAR_1 |
          VAR_0,
          "BM_%d : Alloc of MGMT_SGL_ICD Failed"
          "for the CID : %d\n",
          VAR_11->
          beiscsi_conn_cid);
     goto free_hndls;
    }

    VAR_11->login_in_progress = 1;
    VAR_11->plogin_sgl_handle =
       VAR_9->psgl_handle;
    VAR_9->pwrb_handle =
     FUNC_3(VAR_12,
     VAR_11->beiscsi_conn_cid);
    if (!VAR_9->pwrb_handle) {
     FUNC_4(VAR_12, VAR_6,
          VAR_1 |
          VAR_0,
          "BM_%d : Alloc of WRB_HANDLE Failed"
          "for the CID : %d\n",
          VAR_11->
          beiscsi_conn_cid);
     goto free_mgmt_hndls;
    }
    VAR_11->plogin_wrb_handle =
       VAR_9->pwrb_handle;

   } else {
    VAR_9->psgl_handle =
      VAR_11->plogin_sgl_handle;
    VAR_9->pwrb_handle =
      VAR_11->plogin_wrb_handle;
   }
  } else {
   FUNC_11(&VAR_12->mgmt_sgl_lock);
   VAR_9->psgl_handle = FUNC_2(VAR_12);
   FUNC_12(&VAR_12->mgmt_sgl_lock);
   if (!VAR_9->psgl_handle) {
    FUNC_4(VAR_12, VAR_6,
         VAR_1 |
         VAR_0,
         "BM_%d : Alloc of MGMT_SGL_ICD Failed"
         "for the CID : %d\n",
         VAR_11->
         beiscsi_conn_cid);
    goto free_hndls;
   }
   VAR_9->pwrb_handle =
     FUNC_3(VAR_12,
     VAR_11->beiscsi_conn_cid);
   if (!VAR_9->pwrb_handle) {
    FUNC_4(VAR_12, VAR_6,
         VAR_1 | VAR_0,
         "BM_%d : Alloc of WRB_HANDLE Failed"
         "for the CID : %d\n",
         VAR_11->beiscsi_conn_cid);
    goto free_mgmt_hndls;
   }

  }
 }
 VAR_15 = (itt_t) FUNC_5(((unsigned int)VAR_9->pwrb_handle->
     wrb_index << 16) | (unsigned int)
    (VAR_9->psgl_handle->sgl_index));
 VAR_9->pwrb_handle->pio_handle = VAR_7;

 VAR_9->cmd_bhs->iscsi_hdr.itt = VAR_15;
 return 0;

free_io_hndls:
 FUNC_11(&VAR_12->io_sgl_lock);
 FUNC_6(VAR_12, VAR_9->psgl_handle);
 FUNC_12(&VAR_12->io_sgl_lock);
 goto free_hndls;
free_mgmt_hndls:
 FUNC_11(&VAR_12->mgmt_sgl_lock);
 FUNC_7(VAR_12, VAR_9->psgl_handle);
 VAR_9->psgl_handle = ((void*)0);
 FUNC_12(&VAR_12->mgmt_sgl_lock);
free_hndls:
 VAR_14 = VAR_12->phwi_ctrlr;
 VAR_16 = FUNC_0(
 VAR_11->beiscsi_conn_cid);
 VAR_13 = &VAR_14->wrb_context[VAR_16];
 if (VAR_9->pwrb_handle)
  FUNC_8(VAR_12, VAR_13, VAR_9->pwrb_handle);
 VAR_9->pwrb_handle = ((void*)0);
 FUNC_10(VAR_17->bhs_pool, VAR_9->cmd_bhs,
        VAR_9->bhs_pa.u.a64.address);
 VAR_9->cmd_bhs = ((void*)0);
 return -VAR_2;
}
