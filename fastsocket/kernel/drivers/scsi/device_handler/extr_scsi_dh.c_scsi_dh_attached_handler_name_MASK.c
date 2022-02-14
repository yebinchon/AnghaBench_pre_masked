
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int sdev_gendev; TYPE_2__* scsi_dh_data; } ;
struct request_queue {int queue_lock; struct scsi_device* queuedata; } ;
typedef int gfp_t ;
struct TYPE_4__ {TYPE_1__* scsi_dh; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

const char *FUNC_5(struct request_queue *VAR_0, gfp_t VAR_1)
{
 unsigned long VAR_2;
 struct scsi_device *VAR_3;
 const char *VAR_4 = ((void*)0);

 FUNC_3(VAR_0->queue_lock, VAR_2);
 VAR_3 = VAR_0->queuedata;
 if (!VAR_3 || !FUNC_0(&VAR_3->sdev_gendev))
  VAR_3 = ((void*)0);
 FUNC_4(VAR_0->queue_lock, VAR_2);

 if (!VAR_3)
  return ((void*)0);

 if (VAR_3->scsi_dh_data)
  VAR_4 = FUNC_1(VAR_3->scsi_dh_data->scsi_dh->name, VAR_1);

 FUNC_2(&VAR_3->sdev_gendev);
 return VAR_4;
}
