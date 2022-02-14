
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int cmd_len; unsigned long* special; void* cmd_type; int * cmd; } ;
struct TYPE_4__ {int lock; int timer; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_5__ {int dev_flags; unsigned long sleep; struct request_queue* queue; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct request_queue*,int *,struct request*,int) ;
 struct request* FUNC_1 (struct request_queue*,int ,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request_queue*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct request_queue*,struct request*,int ,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(ide_drive_t *VAR_10, unsigned long VAR_11)
{
 ide_hwif_t *VAR_12 = VAR_10->hwif;
 struct request_queue *VAR_13 = VAR_10->queue;
 struct request *VAR_14;
 int VAR_15;

 VAR_11 += VAR_9;
 FUNC_6(&VAR_12->lock);
 if (VAR_10->dev_flags & VAR_2) {
  int VAR_16 = FUNC_8(VAR_11, VAR_10->sleep);
  int VAR_17 = 0;

  VAR_10->sleep = VAR_11;
  FUNC_10(&VAR_8);
  if (VAR_16 && FUNC_4(&VAR_12->timer))
   VAR_17 = 1;
  FUNC_7(&VAR_12->lock);

  if (VAR_17)
   FUNC_3(VAR_13);
  return;
 }
 FUNC_7(&VAR_12->lock);

 VAR_14 = FUNC_1(VAR_13, VAR_3, VAR_7);
 VAR_14->cmd[0] = VAR_4;
 VAR_14->cmd_len = 1;
 VAR_14->cmd_type = VAR_5;
 VAR_14->special = &VAR_11;
 VAR_15 = FUNC_0(VAR_13, ((void*)0), VAR_14, 1);
 FUNC_2(VAR_14);
 if (VAR_15)
  goto out;





 VAR_14 = FUNC_1(VAR_13, VAR_3, VAR_1);
 if (FUNC_9(!VAR_14))
  goto out;

 VAR_14->cmd[0] = VAR_6;
 VAR_14->cmd_len = 1;
 VAR_14->cmd_type = VAR_5;
 FUNC_5(VAR_13, VAR_14, VAR_0, 1);

out:
 return;
}
