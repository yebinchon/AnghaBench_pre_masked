
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int capacity; int read_blkbits; } ;
struct TYPE_7__ {int sectors; } ;
struct mmc_card {TYPE_2__ csd; TYPE_1__ ext_csd; int dev; } ;
struct TYPE_10__ {int queue; struct mmc_blk_data* data; int issue_fn; } ;
struct mmc_blk_data {int usage; TYPE_3__* disk; TYPE_5__ queue; int lock; int read_only; } ;
struct TYPE_9__ {int first_minor; int disk_name; int * driverfs_dev; int queue; struct mmc_blk_data* private_data; int * fops; int major; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mmc_blk_data* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int VAR_6 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct mmc_blk_data*) ;
 struct mmc_blk_data* FUNC_6 (int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct mmc_card*) ;
 scalar_t__ FUNC_8 (struct mmc_card*) ;
 int FUNC_9 (struct mmc_card*) ;
 int FUNC_10 (TYPE_5__*,struct mmc_card*,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,char*,int) ;

__attribute__((used)) static struct mmc_blk_data *FUNC_15(struct mmc_card *VAR_9)
{
 struct mmc_blk_data *VAR_10;
 int VAR_11, VAR_12;

 VAR_11 = FUNC_4(VAR_6, VAR_4);
 if (VAR_11 >= VAR_4)
  return FUNC_0(-VAR_1);
 FUNC_1(VAR_11, VAR_6);

 VAR_10 = FUNC_6(sizeof(struct mmc_blk_data), VAR_2);
 if (!VAR_10) {
  VAR_12 = -VAR_0;
  goto out;
 }






 VAR_10->read_only = FUNC_7(VAR_9);

 VAR_10->disk = FUNC_2(1 << VAR_5);
 if (VAR_10->disk == ((void*)0)) {
  VAR_12 = -VAR_0;
  goto err_kfree;
 }

 FUNC_13(&VAR_10->lock);
 VAR_10->usage = 1;

 VAR_12 = FUNC_10(&VAR_10->queue, VAR_9, &VAR_10->lock);
 if (VAR_12)
  goto err_putdisk;

 VAR_10->queue.issue_fn = VAR_8;
 VAR_10->queue.data = VAR_10;

 VAR_10->disk->major = VAR_3;
 VAR_10->disk->first_minor = VAR_11 << VAR_5;
 VAR_10->disk->fops = &VAR_7;
 VAR_10->disk->private_data = VAR_10;
 VAR_10->disk->queue = VAR_10->queue.queue;
 VAR_10->disk->driverfs_dev = &VAR_9->dev;
 FUNC_14(VAR_10->disk->disk_name, "mmcblk%d", VAR_11);

 FUNC_3(VAR_10->queue.queue, 512);

 if (!FUNC_9(VAR_9) && FUNC_8(VAR_9)) {




  FUNC_12(VAR_10->disk, VAR_9->ext_csd.sectors);
 } else {




  FUNC_12(VAR_10->disk,
   VAR_9->csd.capacity << (VAR_9->csd.read_blkbits - 9));
 }
 return VAR_10;

 err_putdisk:
 FUNC_11(VAR_10->disk);
 err_kfree:
 FUNC_5(VAR_10);
 out:
 return FUNC_0(VAR_12);
}
