
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {int queue_lock; } ;
struct ata_queued_cmd {TYPE_2__* scsicmd; int flags; struct ata_port* ap; } ;
struct ata_port {TYPE_3__* ops; } ;
struct TYPE_6__ {int error_handler; } ;
struct TYPE_5__ {int request; TYPE_1__* device; } ;
struct TYPE_4__ {struct request_queue* request_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ata_port*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

void FUNC_5(struct ata_queued_cmd *VAR_1)
{
 struct ata_port *VAR_2 = VAR_1->ap;
 struct request_queue *VAR_3 = VAR_1->scsicmd->device->request_queue;
 unsigned long VAR_4;

 FUNC_0(!VAR_2->ops->error_handler);

 VAR_1->flags |= VAR_0;
 FUNC_1(VAR_2, 1);






 FUNC_3(VAR_3->queue_lock, VAR_4);
 FUNC_2(VAR_1->scsicmd->request);
 FUNC_4(VAR_3->queue_lock, VAR_4);
}
