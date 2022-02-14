
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_task {struct ata_queued_cmd* uldd_task; } ;
struct request_queue {int queue_lock; } ;
struct completion {int dummy; } ;
struct ata_queued_cmd {struct completion* private_data; int err_mask; int flags; TYPE_1__* scsicmd; } ;
struct TYPE_4__ {struct request_queue* request_queue; } ;
struct TYPE_3__ {int request; TYPE_2__* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct completion*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

void FUNC_4(struct sas_task *VAR_3)
{
 struct ata_queued_cmd *VAR_4 = VAR_3->uldd_task;
 struct completion *VAR_5;


 if (VAR_4->scsicmd) {
  struct request_queue *VAR_6 = VAR_4->scsicmd->device->request_queue;
  unsigned long VAR_7;

  FUNC_2(VAR_6->queue_lock, VAR_7);
  FUNC_0(VAR_4->scsicmd->request);
  FUNC_3(VAR_6->queue_lock, VAR_7);
  return;
 }


 VAR_4->flags &= ~VAR_1;
 VAR_4->flags |= VAR_2;
 VAR_4->err_mask |= VAR_0;
 VAR_5 = VAR_4->private_data;
 FUNC_1(VAR_5);
}
