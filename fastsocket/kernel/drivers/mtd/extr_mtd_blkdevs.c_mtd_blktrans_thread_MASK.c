
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {int queue_lock; } ;
struct request {TYPE_2__* rq_disk; } ;
struct mtd_blktrans_ops {TYPE_1__* blkcore_priv; } ;
struct mtd_blktrans_dev {int lock; struct mtd_blktrans_ops* tr; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {struct mtd_blktrans_dev* private_data; } ;
struct TYPE_4__ {struct request_queue* rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (struct request*,int) ;
 struct request* FUNC_2 (struct request_queue*) ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 (struct mtd_blktrans_ops*,struct mtd_blktrans_dev*,struct request*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(void *VAR_4)
{
 struct mtd_blktrans_ops *VAR_5 = VAR_4;
 struct request_queue *VAR_6 = VAR_5->blkcore_priv->rq;
 struct request *VAR_7 = ((void*)0);


 VAR_3->flags |= VAR_1;

 FUNC_9(VAR_6->queue_lock);

 while (!FUNC_4()) {
  struct mtd_blktrans_dev *VAR_8;
  int VAR_9;

  if (!VAR_7 && !(VAR_7 = FUNC_2(VAR_6))) {
   FUNC_8(VAR_2);
   FUNC_10(VAR_6->queue_lock);
   FUNC_7();
   FUNC_9(VAR_6->queue_lock);
   continue;
  }

  VAR_8 = VAR_7->rq_disk->private_data;
  VAR_5 = VAR_8->tr;

  FUNC_10(VAR_6->queue_lock);

  FUNC_5(&VAR_8->lock);
  VAR_9 = FUNC_3(VAR_5, VAR_8, VAR_7);
  FUNC_6(&VAR_8->lock);

  FUNC_9(VAR_6->queue_lock);

  if (!FUNC_1(VAR_7, VAR_9))
   VAR_7 = ((void*)0);
 }

 if (VAR_7)
  FUNC_0(VAR_7, -VAR_0);

 FUNC_10(VAR_6->queue_lock);

 return 0;
}
