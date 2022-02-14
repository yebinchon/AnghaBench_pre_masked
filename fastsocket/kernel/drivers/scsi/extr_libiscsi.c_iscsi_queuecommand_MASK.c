
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * ptr; } ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;int result; int * cmnd; TYPE_3__* device; TYPE_1__ SCp; } ;
struct iscsi_task {int running; } ;
struct iscsi_session {int state; int lock; int queued_cmdsn; int cmdsn; TYPE_2__* tt; struct iscsi_conn* leadconn; } ;
struct iscsi_host {int workq; } ;
struct iscsi_conn {int cmdqueue; int suspend_tx; } ;
struct iscsi_cls_session {struct iscsi_session* dd_data; } ;
struct Scsi_Host {int * host_lock; } ;
struct TYPE_10__ {int length; int resid; } ;
struct TYPE_9__ {int length; int resid; } ;
struct TYPE_8__ {struct Scsi_Host* host; } ;
struct TYPE_7__ {scalar_t__ (* xmit_task ) (struct iscsi_task*) ;} ;


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
 int FUNC_0 (struct iscsi_session*,char*,int ,int) ;


 int VAR_15 ;



 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct iscsi_task* FUNC_1 (struct iscsi_conn*,struct scsi_cmnd*) ;
 scalar_t__ FUNC_2 (struct iscsi_conn*) ;
 int FUNC_3 (struct iscsi_task*,int ) ;
 int FUNC_4 (struct iscsi_conn*) ;
 int FUNC_5 (struct iscsi_task*) ;
 int FUNC_6 (struct iscsi_cls_session*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 TYPE_5__* FUNC_10 (struct scsi_cmnd*) ;
 TYPE_4__* FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_cmnd*,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 struct iscsi_host* FUNC_14 (struct Scsi_Host*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 struct iscsi_cls_session* FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (struct iscsi_task*) ;
 scalar_t__ FUNC_19 (int ,int *) ;

int FUNC_20(struct scsi_cmnd *VAR_19, void (*VAR_20)(struct scsi_cmnd *))
{
 struct iscsi_cls_session *VAR_21;
 struct Scsi_Host *VAR_22;
 struct iscsi_host *VAR_23;
 int VAR_24 = 0;
 struct iscsi_session *VAR_25;
 struct iscsi_conn *VAR_26;
 struct iscsi_task *VAR_27 = ((void*)0);

 VAR_19->scsi_done = VAR_20;
 VAR_19->result = 0;
 VAR_19->SCp.ptr = ((void*)0);

 VAR_22 = VAR_19->device->host;
 VAR_23 = FUNC_14(VAR_22);
 FUNC_16(VAR_22->host_lock);

 VAR_21 = FUNC_17(FUNC_13(VAR_19->device));
 VAR_25 = VAR_21->dd_data;
 FUNC_15(&VAR_25->lock);

 VAR_24 = FUNC_6(VAR_21);
 if (VAR_24) {
  VAR_19->result = VAR_24;
  goto fault;
 }

 if (VAR_25->state != VAR_15) {






  switch (VAR_25->state) {
  case 132:
  case 131:
   VAR_24 = VAR_9;
   VAR_19->result = VAR_1 << 16;
   break;
  case 130:
   VAR_24 = VAR_10;
   VAR_19->result = VAR_1 << 16;
   break;
  case 129:
   VAR_24 = VAR_12;
   VAR_19->result = VAR_4 << 16;
   break;
  case 128:
   VAR_24 = VAR_13;
   VAR_19->result = VAR_2 << 16;
   break;
  default:
   VAR_24 = VAR_8;
   VAR_19->result = VAR_2 << 16;
  }
  goto fault;
 }

 VAR_26 = VAR_25->leadconn;
 if (!VAR_26) {
  VAR_24 = VAR_8;
  VAR_19->result = VAR_2 << 16;
  goto fault;
 }

 if (FUNC_19(VAR_16, &VAR_26->suspend_tx)) {
  VAR_24 = VAR_9;
  VAR_19->result = VAR_3;
  goto fault;
 }

 if (FUNC_2(VAR_26)) {
  VAR_24 = VAR_14;
  goto reject;
 }

 VAR_27 = FUNC_1(VAR_26, VAR_19);
 if (!VAR_27) {
  VAR_24 = VAR_7;
  goto reject;
 }

 if (!VAR_23->workq) {
  VAR_24 = FUNC_5(VAR_27);
  if (VAR_24) {
   if (VAR_24 == -VAR_6 || VAR_24 == -VAR_5) {
    VAR_24 = VAR_7;
    goto prepd_reject;
   } else {
    VAR_19->result = VAR_0 << 16;
    goto prepd_fault;
   }
  }
  if (VAR_25->tt->xmit_task(VAR_27)) {
   VAR_25->cmdsn--;
   VAR_24 = VAR_11;
   goto prepd_reject;
  }
 } else {
  FUNC_7(&VAR_27->running, &VAR_26->cmdqueue);
  FUNC_4(VAR_26);
 }

 VAR_25->queued_cmdsn++;
 FUNC_16(&VAR_25->lock);
 FUNC_15(VAR_22->host_lock);
 return 0;

prepd_reject:
 VAR_19->scsi_done = ((void*)0);
 FUNC_3(VAR_27, VAR_17);
reject:
 FUNC_16(&VAR_25->lock);
 FUNC_0(VAR_25, "cmd 0x%x rejected (%d)\n",
     VAR_19->cmnd[0], VAR_24);
 FUNC_15(VAR_22->host_lock);
 return VAR_18;

prepd_fault:
 VAR_19->scsi_done = ((void*)0);
 FUNC_3(VAR_27, VAR_17);
fault:
 FUNC_16(&VAR_25->lock);
 FUNC_0(VAR_25, "iscsi: cmd 0x%x is not queued (%d)\n",
     VAR_19->cmnd[0], VAR_24);
 if (!FUNC_8(VAR_19))
  FUNC_12(VAR_19, FUNC_9(VAR_19));
 else {
  FUNC_11(VAR_19)->resid = FUNC_11(VAR_19)->length;
  FUNC_10(VAR_19)->resid = FUNC_10(VAR_19)->length;
 }
 VAR_20(VAR_19);
 FUNC_15(VAR_22->host_lock);
 return 0;
}
