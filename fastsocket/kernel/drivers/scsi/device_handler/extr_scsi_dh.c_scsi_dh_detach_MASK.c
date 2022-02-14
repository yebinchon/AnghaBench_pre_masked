
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device_handler {int dummy; } ;
struct scsi_device {int sdev_gendev; TYPE_1__* scsi_dh_data; } ;
struct request_queue {int queue_lock; struct scsi_device* queuedata; } ;
struct TYPE_2__ {struct scsi_device_handler* scsi_dh; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct scsi_device*,struct scsi_device_handler*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

void FUNC_5(struct request_queue *VAR_0)
{
 unsigned long VAR_1;
 struct scsi_device *VAR_2;
 struct scsi_device_handler *VAR_3 = ((void*)0);

 FUNC_3(VAR_0->queue_lock, VAR_1);
 VAR_2 = VAR_0->queuedata;
 if (!VAR_2 || !FUNC_0(&VAR_2->sdev_gendev))
  VAR_2 = ((void*)0);
 FUNC_4(VAR_0->queue_lock, VAR_1);

 if (!VAR_2)
  return;

 if (VAR_2->scsi_dh_data) {
  VAR_3 = VAR_2->scsi_dh_data->scsi_dh;
  FUNC_2(VAR_2, VAR_3);
 }
 FUNC_1(&VAR_2->sdev_gendev);
}
