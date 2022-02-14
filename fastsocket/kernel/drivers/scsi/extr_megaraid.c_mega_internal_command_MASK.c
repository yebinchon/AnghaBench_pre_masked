
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct scsi_device {int host; } ;
struct TYPE_13__ {int idx; int * pthru; int raw_mbox; TYPE_4__* cmd; int state; } ;
typedef TYPE_1__ scb_t ;
struct TYPE_14__ {scalar_t__ cmd; int status; int subopcode; int opcode; } ;
typedef TYPE_2__ megacmd_t ;
typedef int mega_passthru ;
struct TYPE_15__ {int int_mtx; int int_waitq; int host; TYPE_1__* int_cdb; TYPE_1__ int_scb; } ;
typedef TYPE_3__ adapter_t ;
struct TYPE_16__ {int result; TYPE_1__* cmnd; void* host_scribble; struct scsi_device* device; } ;
typedef TYPE_4__ Scsi_Cmnd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct scsi_device*) ;
 struct scsi_device* FUNC_1 (int,int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ,TYPE_2__*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,scalar_t__,int ,int ,int) ;
 TYPE_4__* FUNC_8 (int ) ;
 int FUNC_9 (int ,TYPE_4__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(adapter_t *VAR_8, megacmd_t *VAR_9, mega_passthru *VAR_10)
{
 Scsi_Cmnd *VAR_11;
 struct scsi_device *VAR_12;
 scb_t *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_8(VAR_2);
 if (!VAR_11)
  return -VAR_1;






 FUNC_5(&VAR_8->int_mtx);

 VAR_13 = &VAR_8->int_scb;
 FUNC_4(VAR_13, 0, sizeof(scb_t));

 VAR_12 = FUNC_1(sizeof(struct scsi_device), VAR_2);
 VAR_11->device = VAR_12;

 FUNC_4(VAR_8->int_cdb, 0, sizeof(VAR_8->int_cdb));
 VAR_11->cmnd = VAR_8->int_cdb;
 VAR_11->device->host = VAR_8->host;
 VAR_11->host_scribble = (void *)VAR_13;
 VAR_11->cmnd[0] = VAR_3;

 VAR_13->state |= VAR_5;
 VAR_13->cmd = VAR_11;

 FUNC_3(VAR_13->raw_mbox, VAR_9, sizeof(megacmd_t));




 if( VAR_9->cmd == VAR_4 ) {

  VAR_13->pthru = VAR_10;
 }

 VAR_13->idx = VAR_0;

 FUNC_2(VAR_11, VAR_6);

 FUNC_10(&VAR_8->int_waitq);

 VAR_14 = VAR_11->result;
 VAR_9->status = VAR_11->result;
 FUNC_0(VAR_12);





 if( VAR_11->result && VAR_7 ) {
  FUNC_7("megaraid: cmd [%x, %x, %x] status:[%x]\n",
   VAR_9->cmd, VAR_9->opcode, VAR_9->subopcode, VAR_11->result);
 }

 FUNC_6(&VAR_8->int_mtx);

 FUNC_9(VAR_2, VAR_11);

 return VAR_14;
}
