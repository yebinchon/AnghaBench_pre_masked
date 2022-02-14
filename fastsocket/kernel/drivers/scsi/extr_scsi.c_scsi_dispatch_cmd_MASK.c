
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int result; int* cmnd; scalar_t__ cmd_len; TYPE_2__* device; } ;
struct Scsi_Host {scalar_t__ max_cmd_len; scalar_t__ shost_state; int host_lock; TYPE_1__* hostt; } ;
struct TYPE_4__ {scalar_t__ sdev_state; scalar_t__ scsi_level; int lun; struct Scsi_Host* host; int iorequest_cnt; } ;
struct TYPE_3__ {int (* queuecommand ) (struct scsi_cmnd*,int (*) (struct scsi_cmnd*)) ;int lockless; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct Scsi_Host*,struct scsi_cmnd*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*,int) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (struct scsi_cmnd*,int (*) (struct scsi_cmnd*)) ;
 int FUNC_11 (struct scsi_cmnd*,int) ;
 int FUNC_12 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(struct scsi_cmnd *VAR_9)
{
 struct Scsi_Host *VAR_10 = VAR_9->device->host;
 unsigned long VAR_11 = 0;
 int VAR_12 = 0;

 FUNC_1(&VAR_9->device->iorequest_cnt);


 if (FUNC_13(VAR_9->device->sdev_state == VAR_7)) {



  VAR_9->result = VAR_1 << 16;
  FUNC_5(VAR_9);

  goto out;
 }


 if (FUNC_13(FUNC_4(VAR_9->device))) {
  FUNC_7(VAR_9, VAR_3);

  FUNC_0(3, FUNC_2("queuecommand : device blocked \n"));





  goto out;
 }




 if (VAR_9->device->scsi_level <= VAR_2 &&
     VAR_9->device->scsi_level != VAR_6) {
  VAR_9->cmnd[1] = (VAR_9->cmnd[1] & 0x1f) |
          (VAR_9->device->lun << 5 & 0xe0);
 }

 FUNC_6(VAR_9);





 if (VAR_9->cmd_len > VAR_9->device->host->max_cmd_len) {
  FUNC_0(3,
   FUNC_2("queuecommand : command too long. "
          "cdb_size=%d host->max_cmd_len=%d\n",
          VAR_9->cmd_len, VAR_9->device->host->max_cmd_len));
  VAR_9->result = (VAR_0 << 16);

  FUNC_5(VAR_9);
  goto out;
 }

 if (!VAR_10->hostt->lockless) {
  FUNC_8(VAR_10->host_lock, VAR_11);






  FUNC_3(VAR_10, VAR_9);
 }

 if (FUNC_13(VAR_10->shost_state == VAR_8)) {
  VAR_9->result = (VAR_1 << 16);
  FUNC_5(VAR_9);
 } else {
  FUNC_12(VAR_9);
  VAR_12 = VAR_10->hostt->queuecommand(VAR_9, FUNC_5);
 }

 if (!VAR_10->hostt->lockless)
  FUNC_9(VAR_10->host_lock, VAR_11);

 if (VAR_12) {
  FUNC_11(VAR_9, VAR_12);
  if (VAR_12 != VAR_3 &&
      VAR_12 != VAR_5)
   VAR_12 = VAR_4;

  FUNC_7(VAR_9, VAR_12);

  FUNC_0(3,
      FUNC_2("queuecommand : request rejected\n"));
 }

 out:
 FUNC_0(3, FUNC_2("leaving scsi_dispatch_cmnd()\n"));
 return VAR_12;
}
