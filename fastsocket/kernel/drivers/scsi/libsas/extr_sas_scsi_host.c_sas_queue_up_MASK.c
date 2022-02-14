
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_core {scalar_t__ task_queue_size; int queue_thread; int task_queue_lock; int task_queue; } ;
struct sas_task {int list; TYPE_2__* dev; } ;
struct sas_ha_struct {scalar_t__ lldd_queue_size; struct scsi_core core; } ;
struct TYPE_4__ {TYPE_1__* port; } ;
struct TYPE_3__ {struct sas_ha_struct* ha; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct sas_task *VAR_2)
{
 struct sas_ha_struct *VAR_3 = VAR_2->dev->port->ha;
 struct scsi_core *VAR_4 = &VAR_3->core;
 unsigned long VAR_5;
 FUNC_0(VAR_1);

 FUNC_2(&VAR_4->task_queue_lock, VAR_5);
 if (VAR_3->lldd_queue_size < VAR_4->task_queue_size + 1) {
  FUNC_3(&VAR_4->task_queue_lock, VAR_5);
  return -VAR_0;
 }
 FUNC_1(&VAR_2->list, &VAR_4->task_queue);
 VAR_4->task_queue_size += 1;
 FUNC_3(&VAR_4->task_queue_lock, VAR_5);
 FUNC_4(VAR_4->queue_thread);

 return 0;
}
