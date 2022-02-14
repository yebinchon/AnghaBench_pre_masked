
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct request_queue {int * queue_lock; TYPE_3__* queuedata; } ;
struct request {int cmd_flags; } ;
struct ide_host {int host_flags; TYPE_2__* cur_port; } ;
typedef scalar_t__ ide_startstop_t ;
struct TYPE_10__ {int lock; struct request* rq; TYPE_3__* cur_dev; struct ide_host* host; TYPE_1__* tp_ops; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_11__ {int dev_flags; int queue; int sleep; TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_9__ {int (* write_devctl ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct request*) ;
 struct request* FUNC_1 (int ) ;
 int FUNC_2 (struct request_queue*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request_queue*) ;
 int FUNC_5 (struct request_queue*) ;
 int FUNC_6 (struct request_queue*,struct request*) ;
 int FUNC_7 (struct request_queue*) ;
 scalar_t__ FUNC_8 (struct ide_host*,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (struct ide_host*) ;
 int FUNC_11 (TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (TYPE_3__*,struct request*) ;
 int FUNC_16 (TYPE_2__*,int) ;
 scalar_t__ FUNC_17 (int ,int ) ;

void FUNC_18(struct request_queue *VAR_10)
{
 ide_drive_t *VAR_11 = VAR_10->queuedata;
 ide_hwif_t *VAR_12 = VAR_11->hwif;
 struct ide_host *VAR_13 = VAR_12->host;
 struct request *VAR_14 = ((void*)0);
 ide_startstop_t VAR_15;






 if (FUNC_4(VAR_10))





  FUNC_5(VAR_10);

 FUNC_14(VAR_10->queue_lock);


 FUNC_12();

 if (FUNC_8(VAR_13, VAR_12))
  goto plug_device_2;

 FUNC_13(&VAR_12->lock);

 if (!FUNC_9(VAR_12)) {
  ide_hwif_t *VAR_16;

  FUNC_0(VAR_12->rq);
repeat:
  VAR_16 = VAR_12->host->cur_port;
  if (VAR_11->dev_flags & VAR_5 &&
      FUNC_17(VAR_11->sleep, VAR_9)) {
   FUNC_11(VAR_12);
   goto plug_device;
  }

  if ((VAR_12->host->host_flags & VAR_6) &&
      VAR_12 != VAR_16) {
   ide_drive_t *VAR_17 =
    VAR_16 ? VAR_16->cur_dev : ((void*)0);





   if (VAR_17 &&
       (VAR_17->dev_flags & VAR_3) == 0)
    VAR_16->tp_ops->write_devctl(VAR_16,
        VAR_1 |
        VAR_0);

   VAR_12->host->cur_port = VAR_12;
  }
  VAR_12->cur_dev = VAR_11;
  VAR_11->dev_flags &= ~(VAR_5 | VAR_4);

  FUNC_14(&VAR_12->lock);
  FUNC_13(VAR_10->queue_lock);




  if (!VAR_14)
   VAR_14 = FUNC_1(VAR_11->queue);

  FUNC_14(VAR_10->queue_lock);
  FUNC_13(&VAR_12->lock);

  if (!VAR_14) {
   FUNC_11(VAR_12);
   goto out;
  }
  if ((VAR_11->dev_flags & VAR_2) &&
      FUNC_3(VAR_14) == 0 &&
      (VAR_14->cmd_flags & VAR_7) == 0) {

   FUNC_11(VAR_12);
   goto plug_device;
  }

  VAR_12->rq = VAR_14;

  FUNC_14(&VAR_12->lock);
  VAR_15 = FUNC_15(VAR_11, VAR_14);
  FUNC_13(&VAR_12->lock);

  if (VAR_15 == VAR_8) {
   VAR_14 = VAR_12->rq;
   VAR_12->rq = ((void*)0);
   goto repeat;
  }
 } else
  goto plug_device;
out:
 FUNC_14(&VAR_12->lock);
 if (VAR_14 == ((void*)0))
  FUNC_10(VAR_13);
 FUNC_13(VAR_10->queue_lock);
 return;

plug_device:
 FUNC_14(&VAR_12->lock);
 FUNC_10(VAR_13);
plug_device_2:
 FUNC_13(VAR_10->queue_lock);

 if (VAR_14)
  FUNC_6(VAR_10, VAR_14);
 if (!FUNC_7(VAR_10))
  FUNC_2(VAR_10);
}
