
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct tape_blk_data {int medium_changed; TYPE_1__* request_queue; int requeue_task; struct gendisk* disk; int request_queue_lock; int requeue_scheduled; struct tape_device* device; } ;
struct tape_device {int first_minor; struct tape_blk_data blk_data; } ;
struct gendisk {int first_minor; int disk_name; TYPE_1__* queue; void* private_data; int * fops; int major; } ;
struct TYPE_9__ {void* queuedata; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct gendisk*) ;
 struct gendisk* FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,long) ;
 int FUNC_9 (TYPE_1__*,long) ;
 int FUNC_10 (TYPE_1__*,long) ;
 int FUNC_11 (TYPE_1__*,char*) ;
 int FUNC_12 (struct gendisk*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*,int) ;
 void* FUNC_15 (struct tape_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int
FUNC_16(struct tape_device * VAR_8)
{
 struct tape_blk_data * VAR_9;
 struct gendisk * VAR_10;
 int VAR_11;

 VAR_9 = &VAR_8->blk_data;
 VAR_9->device = VAR_8;
 FUNC_13(&VAR_9->request_queue_lock);
 FUNC_3(&VAR_9->requeue_scheduled, 0);

 VAR_9->request_queue = FUNC_5(
  VAR_6,
  &VAR_9->request_queue_lock
 );
 if (!VAR_9->request_queue)
  return -VAR_0;

 VAR_11 = FUNC_11(VAR_9->request_queue, "noop");
 if (VAR_11)
  goto cleanup_queue;

 FUNC_6(VAR_9->request_queue, VAR_1);
 FUNC_7(VAR_9->request_queue, VAR_2);
 FUNC_9(VAR_9->request_queue, -1L);
 FUNC_8(VAR_9->request_queue, -1L);
 FUNC_10(VAR_9->request_queue, -1L);

 VAR_10 = FUNC_2(1);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto cleanup_queue;
 }

 VAR_10->major = VAR_5;
 VAR_10->first_minor = VAR_8->first_minor;
 VAR_10->fops = &VAR_4;
 VAR_10->private_data = FUNC_15(VAR_8);
 VAR_10->queue = VAR_9->request_queue;
 FUNC_12(VAR_10, 0);
 FUNC_14(VAR_10->disk_name, "btibm%d",
  VAR_8->first_minor / VAR_3);

 VAR_9->disk = VAR_10;
 VAR_9->medium_changed = 1;
 VAR_9->request_queue->queuedata = FUNC_15(VAR_8);

 FUNC_1(VAR_10);

 FUNC_15(VAR_8);
 FUNC_0(&VAR_9->requeue_task, VAR_7);

 return 0;

cleanup_queue:
 FUNC_4(VAR_9->request_queue);
 VAR_9->request_queue = ((void*)0);

 return VAR_11;
}
