
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int request; TYPE_1__* device; } ;
struct TYPE_4__ {int data; int (* function ) (int ) ;} ;
struct sas_task_slow {TYPE_2__ timer; } ;
struct sas_task {int dev; struct sas_task_slow* slow_task; struct scsi_cmnd* uldd_task; } ;
struct request_queue {int queue_lock; } ;
struct TYPE_3__ {struct request_queue* request_queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sas_task*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct sas_task *VAR_0)
{
 struct scsi_cmnd *VAR_1 = VAR_0->uldd_task;


 if (!VAR_1) {
  struct sas_task_slow *VAR_2 = VAR_0->slow_task;

  if (!VAR_2)
   return;
  if (!FUNC_1(&VAR_2->timer))
   return;
  VAR_2->timer.function(VAR_2->timer.data);
  return;
 }

 if (FUNC_2(VAR_0->dev)) {
  FUNC_3(VAR_0);
 } else {
  struct request_queue *VAR_3 = VAR_1->device->request_queue;
  unsigned long VAR_4;

  FUNC_4(VAR_3->queue_lock, VAR_4);
  FUNC_0(VAR_1->request);
  FUNC_5(VAR_3->queue_lock, VAR_4);
 }
}
