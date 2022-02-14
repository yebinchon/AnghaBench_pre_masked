
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct srb {int dummy; } ;
struct scsi_qla_host {TYPE_2__* host; int srb_mempool; int dpc_flags; int flags; } ;
struct scsi_cmnd {int result; TYPE_1__* device; } ;
struct iscsi_cls_session {int dummy; } ;
struct ddb_entry {struct iscsi_cls_session* sess; } ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {struct ddb_entry* hostdata; int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct iscsi_cls_session*) ;
 int FUNC_1 (struct srb*,int ) ;
 struct srb* FUNC_2 (struct scsi_qla_host*,struct ddb_entry*,struct scsi_cmnd*,void (*) (struct scsi_cmnd*)) ;
 int FUNC_3 (struct scsi_qla_host*,struct srb*) ;
 int FUNC_4 (struct scsi_qla_host*,struct srb*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 struct scsi_qla_host* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct scsi_cmnd *VAR_16,
    void (*VAR_17)(struct scsi_cmnd *))
{
 struct scsi_qla_host *VAR_18 = FUNC_8(VAR_16->device->host);
 struct ddb_entry *VAR_19 = VAR_16->device->hostdata;
 struct iscsi_cls_session *VAR_20 = VAR_19->sess;
 struct srb *VAR_21;
 int VAR_22;

 if (FUNC_7(VAR_0, &VAR_18->flags)) {
  if (FUNC_7(VAR_4, &VAR_18->flags))
   VAR_16->result = VAR_6 << 16;
  else
   VAR_16->result = VAR_7 << 16;
  goto qc_fail_command;
 }

 if (!VAR_20) {
  VAR_16->result = VAR_5 << 16;
  goto qc_fail_command;
 }

 VAR_22 = FUNC_0(VAR_20);
 if (VAR_22) {
  VAR_16->result = VAR_22;
  goto qc_fail_command;
 }

 if (FUNC_7(VAR_13, &VAR_18->dpc_flags) ||
     FUNC_7(VAR_10, &VAR_18->dpc_flags) ||
     FUNC_7(VAR_11, &VAR_18->dpc_flags) ||
     FUNC_7(VAR_9, &VAR_18->dpc_flags) ||
     FUNC_7(VAR_8, &VAR_18->dpc_flags) ||
     !FUNC_7(VAR_3, &VAR_18->flags) ||
     !FUNC_7(VAR_1, &VAR_18->flags) ||
     FUNC_7(VAR_2, &VAR_18->flags) ||
     FUNC_7(VAR_12, &VAR_18->dpc_flags))
  goto qc_host_busy;

 FUNC_6(VAR_18->host->host_lock);

 VAR_21 = FUNC_2(VAR_18, VAR_19, VAR_16, VAR_17);
 if (!VAR_21)
  goto qc_host_busy_lock;

 VAR_22 = FUNC_3(VAR_18, VAR_21);
 if (VAR_22 != VAR_14)
  goto qc_host_busy_free_sp;

 FUNC_5(VAR_18->host->host_lock);
 return 0;

qc_host_busy_free_sp:
 FUNC_4(VAR_18, VAR_21);
 FUNC_1(VAR_21, VAR_18->srb_mempool);

qc_host_busy_lock:
 FUNC_5(VAR_18->host->host_lock);

qc_host_busy:
 return VAR_15;

qc_fail_command:
 VAR_17(VAR_16);

 return 0;
}
