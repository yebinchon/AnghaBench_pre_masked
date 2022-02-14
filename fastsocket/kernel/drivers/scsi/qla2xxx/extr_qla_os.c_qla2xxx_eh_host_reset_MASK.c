
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct qla_hw_data {TYPE_2__* isp_ops; scalar_t__ wq; int pdev; } ;
struct TYPE_15__ {int host_no; int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_14__ {scalar_t__ (* abort_isp ) (TYPE_3__*) ;} ;
struct TYPE_13__ {unsigned int id; unsigned int lun; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_3__*,int,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (int ,int *) ;
 TYPE_3__* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_13(struct scsi_cmnd *VAR_8)
{
 scsi_qla_host_t *VAR_9 = FUNC_11(VAR_8->device->host);
 struct qla_hw_data *VAR_10 = VAR_9->hw;
 int VAR_11 = VAR_1;
 unsigned int VAR_12, VAR_13;
 scsi_qla_host_t *VAR_14 = FUNC_3(VAR_10->pdev);

 VAR_12 = VAR_8->device->id;
 VAR_13 = VAR_8->device->lun;

 FUNC_4(VAR_6, VAR_9, 0x8018,
     "ADAPTER RESET ISSUED nexus=%ld:%d:%d.\n", VAR_9->host_no, VAR_12, VAR_13);

 if (FUNC_8(VAR_9) != VAR_3)
  goto eh_host_reset_lock;

 if (VAR_9 != VAR_14) {
  if (FUNC_6(VAR_9))
   goto eh_host_reset_lock;
 } else {
  if (FUNC_0(VAR_9->hw)) {
   if (!FUNC_9(VAR_9)) {

    VAR_11 = VAR_4;
    goto eh_host_reset_lock;
   }

  }
  if (VAR_10->wq)
   FUNC_2(VAR_10->wq);

  FUNC_10(VAR_0, &VAR_14->dpc_flags);
  if (VAR_10->isp_ops->abort_isp(VAR_14)) {
   FUNC_1(VAR_0, &VAR_14->dpc_flags);

   FUNC_10(VAR_2, &VAR_14->dpc_flags);

   if (FUNC_7(VAR_14)
    != VAR_3) {
    FUNC_4(VAR_7, VAR_9, 0x802a,
        "wait for hba online failed.\n");
    goto eh_host_reset_lock;
   }
  }
  FUNC_1(VAR_0, &VAR_14->dpc_flags);
 }


 if (FUNC_5(VAR_9, 0, 0, VAR_5) ==
  VAR_3)
  VAR_11 = VAR_4;

eh_host_reset_lock:
 FUNC_4(VAR_6, VAR_9, 0x8017,
     "ADAPTER RESET %s nexus=%ld:%d:%d.\n",
     (VAR_11 == VAR_1) ? "FAILED" : "SUCCEEDED", VAR_9->host_no, VAR_12, VAR_13);

 return VAR_11;
}
