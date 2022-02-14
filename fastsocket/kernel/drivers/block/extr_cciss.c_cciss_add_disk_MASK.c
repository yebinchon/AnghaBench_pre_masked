
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct gendisk {int first_minor; TYPE_6__* queue; int * driverfs_dev; TYPE_2__* private_data; int * fops; int major; int disk_name; } ;
struct TYPE_15__ {int ctlr; TYPE_2__** drv; int cciss_max_sectors; int maxsgentries; TYPE_1__* pdev; int major; int lock; } ;
typedef TYPE_3__ ctlr_info_t ;
struct TYPE_16__ {TYPE_3__* queuedata; } ;
struct TYPE_14__ {TYPE_6__* queue; int block_size; int dev; } ;
struct TYPE_13__ {int dma_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct gendisk*) ;
 int FUNC_1 (TYPE_6__*) ;
 TYPE_6__* FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_6__*,int ) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 int FUNC_6 (TYPE_6__*,int ) ;
 int FUNC_7 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ,char*,int,int) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(ctlr_info_t *VAR_4, struct gendisk *VAR_5,
    int VAR_6)
{
 VAR_5->queue = FUNC_2(VAR_3, &VAR_4->lock);
 if (!VAR_5->queue)
  goto init_queue_failure;
 FUNC_9(VAR_5->disk_name, "cciss/c%dd%d", VAR_4->ctlr, VAR_6);
 VAR_5->major = VAR_4->major;
 VAR_5->first_minor = VAR_6 << VAR_0;
 VAR_5->fops = &VAR_1;
 if (FUNC_8(VAR_4, VAR_6))
  goto cleanup_queue;
 VAR_5->private_data = VAR_4->drv[VAR_6];
 VAR_5->driverfs_dev = &VAR_4->drv[VAR_6]->dev;


 FUNC_3(VAR_5->queue, VAR_4->pdev->dma_mask);


 FUNC_6(VAR_5->queue, VAR_4->maxsgentries);

 FUNC_5(VAR_5->queue, VAR_4->cciss_max_sectors);

 FUNC_7(VAR_5->queue, VAR_2);

 VAR_5->queue->queuedata = VAR_4;

 FUNC_4(VAR_5->queue,
         VAR_4->drv[VAR_6]->block_size);




 FUNC_10();
 VAR_4->drv[VAR_6]->queue = VAR_5->queue;
 FUNC_0(VAR_5);
 return 0;

cleanup_queue:
 FUNC_1(VAR_5->queue);
 VAR_5->queue = ((void*)0);
init_queue_failure:
 return -1;
}
