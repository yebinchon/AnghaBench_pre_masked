
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request_queue {int queue_lock; } ;
struct request_pm_state {scalar_t__ pm_step; } ;
struct request {scalar_t__ cmd_type; struct request_pm_state* special; } ;
struct TYPE_6__ {TYPE_1__* hwif; int dev_flags; int name; struct request_queue* queue; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_5__ {int * rq; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct request*,int ,int ) ;
 int FUNC_2 (struct request_queue*) ;
 int FUNC_3 (TYPE_2__*,struct request*) ;
 int FUNC_4 (char*,int ,char*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

void FUNC_7(ide_drive_t *VAR_3, struct request *VAR_4)
{
 struct request_queue *VAR_5 = VAR_3->queue;
 struct request_pm_state *VAR_6 = VAR_4->special;
 unsigned long VAR_7;

 FUNC_3(VAR_3, VAR_4);
 if (VAR_6->pm_step != VAR_1)
  return;





 FUNC_5(VAR_5->queue_lock, VAR_7);
 if (VAR_4->cmd_type == VAR_2)
  FUNC_2(VAR_5);
 else
  VAR_3->dev_flags &= ~VAR_0;
 FUNC_6(VAR_5->queue_lock, VAR_7);

 VAR_3->hwif->rq = ((void*)0);

 if (FUNC_1(VAR_4, 0, 0))
  FUNC_0();
}
