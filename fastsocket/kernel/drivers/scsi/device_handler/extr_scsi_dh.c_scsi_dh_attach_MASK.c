
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device_handler {int dummy; } ;
struct scsi_device {int sdev_gendev; } ;
struct request_queue {int queue_lock; struct scsi_device* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct scsi_device_handler* FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct scsi_device*,struct scsi_device_handler*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;

int FUNC_6(struct request_queue *VAR_2, const char *VAR_3)
{
 unsigned long VAR_4;
 struct scsi_device *VAR_5;
 struct scsi_device_handler *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_1(VAR_3);
 if (!VAR_6)
  return -VAR_0;

 FUNC_4(VAR_2->queue_lock, VAR_4);
 VAR_5 = VAR_2->queuedata;
 if (!VAR_5 || !FUNC_0(&VAR_5->sdev_gendev))
  VAR_7 = -VAR_1;
 FUNC_5(VAR_2->queue_lock, VAR_4);

 if (!VAR_7) {
  VAR_7 = FUNC_3(VAR_5, VAR_6);
  FUNC_2(&VAR_5->sdev_gendev);
 }
 return VAR_7;
}
