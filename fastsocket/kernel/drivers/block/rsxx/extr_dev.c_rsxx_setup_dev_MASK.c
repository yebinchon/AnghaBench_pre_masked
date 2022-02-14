
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


struct TYPE_17__ {unsigned short block_size; } ;
struct TYPE_18__ {TYPE_1__ data; } ;
struct rsxx_cardinfo {scalar_t__ major; int disk_id; TYPE_5__* queue; TYPE_15__* gendisk; TYPE_4__* dev; TYPE_2__ config; int dev_lock; } ;
struct TYPE_19__ {int discard_granularity; int discard_alignment; int discard_zeroes_data; } ;
struct TYPE_21__ {struct rsxx_cardinfo* queuedata; TYPE_3__ limits; } ;
struct TYPE_20__ {int dev; } ;
struct TYPE_16__ {scalar_t__ major; TYPE_5__* queue; struct rsxx_cardinfo* private_data; int * fops; scalar_t__ first_minor; int * driverfs_dev; int disk_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_15__* FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,unsigned short) ;
 int FUNC_6 (TYPE_5__*,unsigned short) ;
 int FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_5__*,int) ;
 int FUNC_9 (TYPE_5__*,int ) ;
 int FUNC_10 (TYPE_5__*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int ,char*) ;
 int VAR_9 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (struct rsxx_cardinfo*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_16 (int ,int,char*,int) ;
 int FUNC_17 (scalar_t__,int ) ;

int FUNC_18(struct rsxx_cardinfo *VAR_12)
{
 unsigned short VAR_13;

 FUNC_12(&VAR_12->dev_lock);

 if (!VAR_9)
  return 0;

 VAR_12->major = FUNC_14(0, VAR_1);
 if (VAR_12->major < 0) {
  FUNC_11(FUNC_0(VAR_12), "Failed to get major number\n");
  return -VAR_2;
 }

 VAR_12->queue = FUNC_2(VAR_3);
 if (!VAR_12->queue) {
  FUNC_11(FUNC_0(VAR_12), "Failed queue alloc\n");
  FUNC_17(VAR_12->major, VAR_1);
  return -VAR_2;
 }

 VAR_12->gendisk = FUNC_1(VAR_8);
 if (!VAR_12->gendisk) {
  FUNC_11(FUNC_0(VAR_12), "Failed disk alloc\n");
  FUNC_3(VAR_12->queue);
  FUNC_17(VAR_12->major, VAR_1);
  return -VAR_2;
 }

 VAR_13 = VAR_12->config.data.block_size;

 FUNC_7(VAR_12->queue, VAR_11);
 FUNC_4(VAR_12->queue, VAR_0);
 FUNC_5(VAR_12->queue, VAR_13 - 1);
 FUNC_9(VAR_12->queue, VAR_7);
 FUNC_6(VAR_12->queue, VAR_13);
 FUNC_10(VAR_12->queue, VAR_6);

 FUNC_13(VAR_5, VAR_12->queue);
 if (FUNC_15(VAR_12)) {
  FUNC_13(VAR_4, VAR_12->queue);
  FUNC_8(VAR_12->queue,
      VAR_6 >> 9);
  VAR_12->queue->limits.discard_granularity = VAR_6;
  VAR_12->queue->limits.discard_alignment = VAR_6;
  VAR_12->queue->limits.discard_zeroes_data = 1;
 }

 VAR_12->queue->queuedata = VAR_12;

 FUNC_16(VAR_12->gendisk->disk_name, sizeof(VAR_12->gendisk->disk_name),
   "rsxx%d", VAR_12->disk_id);
 VAR_12->gendisk->driverfs_dev = &VAR_12->dev->dev;
 VAR_12->gendisk->major = VAR_12->major;
 VAR_12->gendisk->first_minor = 0;
 VAR_12->gendisk->fops = &VAR_10;
 VAR_12->gendisk->private_data = VAR_12;
 VAR_12->gendisk->queue = VAR_12->queue;

 return 0;
}
