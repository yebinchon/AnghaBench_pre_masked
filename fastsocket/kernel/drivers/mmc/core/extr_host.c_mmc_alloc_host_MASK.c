
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int notifier_call; } ;
struct TYPE_5__ {int * class; struct device* parent; } ;
struct mmc_host {int max_hw_segs; int max_phys_segs; int max_seg_size; int max_req_size; int max_blk_size; int max_blk_count; TYPE_1__ pm_notify; int disable; int detect; int wq; int lock; TYPE_2__ class_dev; struct device* parent; int index; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,struct mmc_host*,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mmc_host*) ;
 struct mmc_host* FUNC_8 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

struct mmc_host *FUNC_12(int VAR_8, struct device *VAR_9)
{
 int VAR_10;
 struct mmc_host *VAR_11;

 if (!FUNC_5(&VAR_4, VAR_0))
  return ((void*)0);

 VAR_11 = FUNC_8(sizeof(struct mmc_host) + VAR_8, VAR_0);
 if (!VAR_11)
  return ((void*)0);

 FUNC_9(&VAR_5);
 VAR_10 = FUNC_4(&VAR_4, VAR_11, &VAR_11->index);
 FUNC_11(&VAR_5);
 if (VAR_10)
  goto free;

 FUNC_2(&VAR_11->class_dev, "mmc%d", VAR_11->index);

 VAR_11->parent = VAR_9;
 VAR_11->class_dev.parent = VAR_9;
 VAR_11->class_dev.class = &VAR_2;
 FUNC_3(&VAR_11->class_dev);

 FUNC_10(&VAR_11->lock);
 FUNC_6(&VAR_11->wq);
 FUNC_0(&VAR_11->detect, VAR_7);
 FUNC_1(&VAR_11->disable, VAR_3);
 VAR_11->pm_notify.notifier_call = VAR_6;






 VAR_11->max_hw_segs = 1;
 VAR_11->max_phys_segs = 1;
 VAR_11->max_seg_size = VAR_1;

 VAR_11->max_req_size = VAR_1;
 VAR_11->max_blk_size = 512;
 VAR_11->max_blk_count = VAR_1 / 512;

 return VAR_11;

free:
 FUNC_7(VAR_11);
 return ((void*)0);
}
