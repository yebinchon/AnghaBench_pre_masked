
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct scm_device {int size; int dev; int nr_max_block; } ;
struct scm_blk_dev {TYPE_1__* gendisk; struct request_queue* rq; int rq_lock; int tasklet; int queued_reqs; int finished_requests; int lock; int state; struct scm_device* scmdev; } ;
struct request_queue {struct scm_device* queuedata; int unplug_delay; } ;
struct aidaw {int dummy; } ;
struct TYPE_4__ {unsigned int first_minor; scalar_t__ disk_name; int major; struct request_queue* queue; int * fops; struct scm_device* private_data; int * driverfs_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct request_queue*) ;
 struct request_queue* FUNC_7 (int ,int *) ;
 int FUNC_8 (struct request_queue*,int) ;
 int FUNC_9 (struct request_queue*,unsigned int) ;
 int FUNC_10 (struct request_queue*,unsigned int) ;
 unsigned int FUNC_11 (int ,unsigned int) ;
 int FUNC_12 (int ) ;
 int VAR_8 ;
 int FUNC_13 (int ,struct request_queue*) ;
 int FUNC_14 (struct scm_blk_dev*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (scalar_t__,scalar_t__,char*,...) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,void (*) (unsigned long),unsigned long) ;

int FUNC_19(struct scm_blk_dev *VAR_13, struct scm_device *VAR_14)
{
 struct request_queue *VAR_15;
 int VAR_16, VAR_17 = -VAR_2;
 unsigned int VAR_18, VAR_19;

 VAR_18 = FUNC_4(&VAR_8) - 1;

 if (VAR_18 > 701) {
  VAR_17 = -VAR_1;
  goto out;
 }

 VAR_13->scmdev = VAR_14;
 VAR_13->state = VAR_6;
 FUNC_17(&VAR_13->rq_lock);
 FUNC_17(&VAR_13->lock);
 FUNC_0(&VAR_13->finished_requests);
 FUNC_5(&VAR_13->queued_reqs, 0);
 FUNC_18(&VAR_13->tasklet,
       (void (*)(unsigned long)) VAR_11,
       (unsigned long) VAR_13);

 VAR_15 = FUNC_7(VAR_10, &VAR_13->rq_lock);
 if (!VAR_15)
  goto out;

 VAR_13->rq = VAR_15;
 VAR_19 = FUNC_11(VAR_14->nr_max_block,
    (unsigned int) (VAR_3 / sizeof(struct aidaw)));

 FUNC_8(VAR_15, 1 << 12);
 FUNC_9(VAR_15, VAR_19 << 3);
 FUNC_10(VAR_15, VAR_19);
 VAR_15->unplug_delay = FUNC_12(VAR_7);
 FUNC_13(VAR_4, VAR_15);
 FUNC_14(VAR_13);

 VAR_13->gendisk = FUNC_2(VAR_5);
 if (!VAR_13->gendisk)
  goto out_queue;

 VAR_15->queuedata = VAR_14;
 VAR_13->gendisk->driverfs_dev = &VAR_14->dev;
 VAR_13->gendisk->private_data = VAR_14;
 VAR_13->gendisk->fops = &VAR_9;
 VAR_13->gendisk->queue = VAR_15;
 VAR_13->gendisk->major = VAR_12;
 VAR_13->gendisk->first_minor = VAR_18 * VAR_5;

 VAR_16 = FUNC_16(VAR_13->gendisk->disk_name, VAR_0, "scm");
 if (VAR_18 > 25) {
  VAR_16 += FUNC_16(VAR_13->gendisk->disk_name + VAR_16,
    VAR_0 - VAR_16, "%c",
    'a' + (VAR_18 / 26) - 1);
  VAR_18 = VAR_18 % 26;
 }
 FUNC_16(VAR_13->gendisk->disk_name + VAR_16, VAR_0 - VAR_16, "%c",
   'a' + VAR_18);


 FUNC_15(VAR_13->gendisk, VAR_14->size >> 9);
 FUNC_1(VAR_13->gendisk);
 return 0;

out_queue:
 FUNC_6(VAR_15);
out:
 FUNC_3(&VAR_8);
 return VAR_17;
}
