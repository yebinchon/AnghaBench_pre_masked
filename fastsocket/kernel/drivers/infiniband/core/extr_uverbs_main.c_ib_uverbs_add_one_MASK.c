
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; int kobj; int * ops; int owner; } ;
struct ib_uverbs_device {int devnum; int comp; int ref; TYPE_1__ cdev; int dev; int num_comp_vectors; struct ib_device* ib_dev; int xrcd_tree_mutex; int xrcd_tree; } ;
struct ib_device {int dma_device; scalar_t__ mmap; int num_comp_vectors; int alloc_ucontext; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,int ,int ,struct ib_uverbs_device*,char*,int) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (struct ib_device*,int *,struct ib_uverbs_device*) ;
 int VAR_8 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ib_uverbs_device*) ;
 int FUNC_13 (int *,char*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 struct ib_uverbs_device* FUNC_16 (int,int ) ;
 int VAR_9 ;
 int FUNC_17 (int *) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_18 (int,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_21 (int *) ;

__attribute__((used)) static void FUNC_22(struct ib_device *VAR_16)
{
 int VAR_17;
 dev_t VAR_18;
 struct ib_uverbs_device *VAR_19;

 if (!VAR_16->alloc_ucontext)
  return;

 VAR_19 = FUNC_16(sizeof *VAR_19, VAR_0);
 if (!VAR_19)
  return;

 FUNC_14(&VAR_19->ref);
 FUNC_11(&VAR_19->comp);
 VAR_19->xrcd_tree = VAR_3;
 FUNC_17(&VAR_19->xrcd_tree_mutex);

 FUNC_19(&VAR_9);
 VAR_17 = FUNC_8(VAR_7, VAR_2);
 if (VAR_17 >= VAR_2) {
  FUNC_20(&VAR_9);
  VAR_17 = FUNC_9();
  if (VAR_17 < 0)
   goto err;

  FUNC_19(&VAR_9);
  VAR_19->devnum = VAR_17 + VAR_2;
  VAR_18 = VAR_17 + VAR_10;
  FUNC_18(VAR_17, VAR_11);
 } else {
  VAR_19->devnum = VAR_17;
  VAR_18 = VAR_17 + VAR_1;
  FUNC_18(VAR_17, VAR_7);
 }
 FUNC_20(&VAR_9);

 VAR_19->ib_dev = VAR_16;
 VAR_19->num_comp_vectors = VAR_16->num_comp_vectors;

 FUNC_3(&VAR_19->cdev, ((void*)0));
 VAR_19->cdev.owner = VAR_4;
 VAR_19->cdev.ops = VAR_16->mmap ? &VAR_15 : &VAR_14;
 FUNC_13(&VAR_19->cdev.kobj, "uverbs%d", VAR_19->devnum);
 if (FUNC_1(&VAR_19->cdev, VAR_18, 1))
  goto err_cdev;

 VAR_19->dev = FUNC_5(VAR_12, VAR_16->dma_device,
     VAR_19->cdev.dev, VAR_19,
     "uverbs%d", VAR_19->devnum);
 if (FUNC_0(VAR_19->dev))
  goto err_cdev;

 if (FUNC_6(VAR_19->dev, &VAR_6))
  goto err_class;
 if (FUNC_6(VAR_19->dev, &VAR_5))
  goto err_class;

 FUNC_10(VAR_16, &VAR_13, VAR_19);

 return;

err_class:
 FUNC_7(VAR_12, VAR_19->cdev.dev);

err_cdev:
 FUNC_2(&VAR_19->cdev);
 if (VAR_19->devnum < VAR_2)
  FUNC_4(VAR_17, VAR_7);
 else
  FUNC_4(VAR_17, VAR_11);

err:
 FUNC_15(&VAR_19->ref, VAR_8);
 FUNC_21(&VAR_19->comp);
 FUNC_12(VAR_19);
 return;
}
