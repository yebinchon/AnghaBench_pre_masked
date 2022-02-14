
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int device_busy; } ;
struct scsi_cmnd {int dummy; } ;
struct request_queue {struct scsi_device* queuedata; } ;
struct request {int errors; int cmd_flags; struct scsi_cmnd* special; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request_queue*) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;

int FUNC_3(struct request_queue *VAR_2, struct request *VAR_3, int VAR_4)
{
 struct scsi_device *VAR_5 = VAR_2->queuedata;

 switch (VAR_4) {
 case 128:
  VAR_3->errors = VAR_0 << 16;

  if (VAR_3->special) {
   struct scsi_cmnd *VAR_6 = VAR_3->special;
   FUNC_2(VAR_6);
   FUNC_1(VAR_6);
   VAR_3->special = ((void*)0);
  }
  break;
 case 129:





  if (VAR_5->device_busy == 0)
   FUNC_0(VAR_2);
  break;
 default:
  VAR_3->cmd_flags |= VAR_1;
 }

 return VAR_4;
}
