
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_core {int queue_thread; TYPE_1__* shost; int task_queue; scalar_t__ task_queue_size; int task_queue_flush; int task_queue_lock; } ;
struct sas_ha_struct {struct scsi_core core; } ;
struct TYPE_2__ {int host_no; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct sas_ha_struct*,char*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;

int FUNC_6(struct sas_ha_struct *VAR_1)
{
 struct scsi_core *VAR_2 = &VAR_1->core;

 FUNC_5(&VAR_2->task_queue_lock);
 FUNC_4(&VAR_2->task_queue_flush);
 VAR_2->task_queue_size = 0;
 FUNC_0(&VAR_2->task_queue);

 VAR_2->queue_thread = FUNC_3(VAR_0, VAR_1,
      "sas_queue_%d", VAR_2->shost->host_no);
 if (FUNC_1(VAR_2->queue_thread))
  return FUNC_2(VAR_2->queue_thread);
 return 0;
}
