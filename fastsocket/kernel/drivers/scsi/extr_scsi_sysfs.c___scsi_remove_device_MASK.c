
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct scsi_device {TYPE_2__* host; int requeue_work; int request_queue; struct device sdev_dev; scalar_t__ is_visible; struct device sdev_gendev; } ;
struct TYPE_4__ {TYPE_1__* hostt; } ;
struct TYPE_3__ {int (* slave_destroy ) (struct scsi_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 scalar_t__ FUNC_6 (struct scsi_device*,int ) ;
 int FUNC_7 (struct scsi_device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;

void FUNC_10(struct scsi_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->sdev_gendev;

 if (VAR_2->is_visible) {
  if (FUNC_6(VAR_2, VAR_0) != 0)
   return;

  FUNC_1(VAR_2->request_queue);
  FUNC_4(&VAR_2->sdev_dev);
  FUNC_9(VAR_3);
  FUNC_3(VAR_3);
 } else
  FUNC_5(&VAR_2->sdev_dev);






 FUNC_6(VAR_2, VAR_1);
 FUNC_0(VAR_2->request_queue);
 FUNC_2(&VAR_2->requeue_work);

 if (VAR_2->host->hostt->slave_destroy)
  VAR_2->host->hostt->slave_destroy(VAR_2);
 FUNC_8(VAR_3);

 FUNC_5(VAR_3);
}
