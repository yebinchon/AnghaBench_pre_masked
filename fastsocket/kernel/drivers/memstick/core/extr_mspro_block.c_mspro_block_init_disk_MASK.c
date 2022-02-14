
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct mspro_sys_info {int block_size; int user_block_count; int unit_size; int sectors_per_track; int heads; int cylinders; } ;
struct mspro_sys_attr {scalar_t__ id; struct mspro_sys_info* data; } ;
struct mspro_devinfo {int block_size; int user_block_count; int unit_size; int sectors_per_track; int heads; int cylinders; } ;
struct TYPE_15__ {scalar_t__* attrs; } ;
struct mspro_block_data {unsigned long cylinders; unsigned long heads; unsigned long sectors_per_track; unsigned long page_size; int usage_count; int active; TYPE_3__* disk; TYPE_5__* queue; int q_lock; TYPE_2__ attr_group; } ;
struct TYPE_14__ {scalar_t__* dma_mask; } ;
struct memstick_host {TYPE_1__ dev; } ;
struct memstick_dev {int dev; struct memstick_host* host; } ;
struct TYPE_17__ {struct memstick_dev* queuedata; } ;
struct TYPE_16__ {int first_minor; int disk_name; int * driverfs_dev; TYPE_5__* queue; struct mspro_block_data* private_data; int * fops; int major; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int) ;
 unsigned long FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (TYPE_5__*,int) ;
 int FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (TYPE_5__*,int ) ;
 int FUNC_10 (int *,char*,unsigned long) ;
 int FUNC_11 (int *,struct memstick_dev*,int*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int) ;
 int VAR_10 ;
 struct mspro_block_data* FUNC_14 (struct memstick_dev*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct mspro_sys_attr* FUNC_15 (scalar_t__) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*,unsigned long) ;
 int FUNC_20 (int ,char*,int) ;

__attribute__((used)) static int FUNC_21(struct memstick_dev *VAR_16)
{
 struct mspro_block_data *VAR_17 = FUNC_14(VAR_16);
 struct memstick_host *VAR_18 = VAR_16->host;
 struct mspro_devinfo *VAR_19 = ((void*)0);
 struct mspro_sys_info *VAR_20 = ((void*)0);
 struct mspro_sys_attr *VAR_21 = ((void*)0);
 int VAR_22, VAR_23;
 u64 VAR_24 = VAR_0;
 unsigned long VAR_25;

 if (VAR_18->dev.dma_mask && *(VAR_18->dev.dma_mask))
  VAR_24 = *(VAR_18->dev.dma_mask);

 for (VAR_22 = 0; VAR_17->attr_group.attrs[VAR_22]; ++VAR_22) {
  VAR_21 = FUNC_15(VAR_17->attr_group.attrs[VAR_22]);

  if (VAR_21->id == VAR_5)
   VAR_19 = VAR_21->data;
  else if (VAR_21->id == VAR_6)
   VAR_20 = VAR_21->data;
 }

 if (!VAR_19 || !VAR_20)
  return -VAR_1;

 VAR_17->cylinders = FUNC_2(VAR_19->cylinders);
 VAR_17->heads = FUNC_2(VAR_19->heads);
 VAR_17->sectors_per_track = FUNC_2(VAR_19->sectors_per_track);

 VAR_17->page_size = FUNC_2(VAR_20->unit_size);

 if (!FUNC_12(&VAR_12, VAR_4))
  return -VAR_2;

 FUNC_16(&VAR_13);
 VAR_22 = FUNC_11(&VAR_12, VAR_16, &VAR_23);
 FUNC_17(&VAR_13);

 if (VAR_22)
  return VAR_22;

 if ((VAR_23 << VAR_9) > 255) {
  VAR_22 = -VAR_3;
  goto out_release_id;
 }

 VAR_17->disk = FUNC_1(1 << VAR_9);
 if (!VAR_17->disk) {
  VAR_22 = -VAR_2;
  goto out_release_id;
 }

 VAR_17->queue = FUNC_3(VAR_15, &VAR_17->q_lock);
 if (!VAR_17->queue) {
  VAR_22 = -VAR_2;
  goto out_put_disk;
 }

 VAR_17->queue->queuedata = VAR_16;
 FUNC_9(VAR_17->queue, VAR_14);

 FUNC_4(VAR_17->queue, VAR_24);
 FUNC_6(VAR_17->queue, VAR_7);
 FUNC_8(VAR_17->queue, VAR_8);
 FUNC_7(VAR_17->queue,
       VAR_7 * VAR_17->page_size);

 VAR_17->disk->major = VAR_10;
 VAR_17->disk->first_minor = VAR_23 << VAR_9;
 VAR_17->disk->fops = &VAR_11;
 VAR_17->usage_count = 1;
 VAR_17->disk->private_data = VAR_17;
 VAR_17->disk->queue = VAR_17->queue;
 VAR_17->disk->driverfs_dev = &VAR_16->dev;

 FUNC_20(VAR_17->disk->disk_name, "mspblk%d", VAR_23);

 FUNC_5(VAR_17->queue, VAR_17->page_size);

 VAR_25 = FUNC_2(VAR_20->user_block_count);
 VAR_25 *= FUNC_2(VAR_20->block_size);
 VAR_25 *= VAR_17->page_size >> 9;
 FUNC_19(VAR_17->disk, VAR_25);
 FUNC_10(&VAR_16->dev, "capacity set %ld\n", VAR_25);

 FUNC_0(VAR_17->disk);
 VAR_17->active = 1;
 return 0;

out_put_disk:
 FUNC_18(VAR_17->disk);
out_release_id:
 FUNC_16(&VAR_13);
 FUNC_13(&VAR_12, VAR_23);
 FUNC_17(&VAR_13);
 return VAR_22;
}
