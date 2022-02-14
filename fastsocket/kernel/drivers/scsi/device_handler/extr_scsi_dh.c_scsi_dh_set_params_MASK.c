
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device_handler {int (* set_params ) (struct scsi_device*,char const*) ;} ;
struct scsi_device {int sdev_gendev; TYPE_1__* scsi_dh_data; } ;
struct request_queue {int queue_lock; struct scsi_device* queuedata; } ;
struct TYPE_2__ {struct scsi_device_handler* scsi_dh; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (struct scsi_device*,char const*) ;

int FUNC_5(struct request_queue *VAR_1, const char *VAR_2)
{
 int VAR_3 = -VAR_0;
 unsigned long VAR_4;
 struct scsi_device *VAR_5;
 struct scsi_device_handler *VAR_6 = ((void*)0);

 FUNC_2(VAR_1->queue_lock, VAR_4);
 VAR_5 = VAR_1->queuedata;
 if (VAR_5 && VAR_5->scsi_dh_data)
  VAR_6 = VAR_5->scsi_dh_data->scsi_dh;
 if (VAR_6 && VAR_6->set_params && FUNC_0(&VAR_5->sdev_gendev))
  VAR_3 = 0;
 FUNC_3(VAR_1->queue_lock, VAR_4);

 if (VAR_3)
  return VAR_3;
 VAR_3 = VAR_6->set_params(VAR_5, VAR_2);
 FUNC_1(&VAR_5->sdev_gendev);
 return VAR_3;
}
