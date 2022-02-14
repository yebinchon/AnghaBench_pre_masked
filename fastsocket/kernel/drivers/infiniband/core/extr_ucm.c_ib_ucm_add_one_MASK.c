
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int dev; int kobj; int owner; } ;
struct TYPE_8__ {int release; int devt; int parent; int * class; } ;
struct ib_ucm_device {int devnum; TYPE_5__ cdev; TYPE_1__ dev; struct ib_device* ib_dev; } ;
struct ib_device {int dma_device; int node_type; int alloc_ucontext; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_5__*,scalar_t__,int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (struct ib_device*,int *,struct ib_ucm_device*) ;
 int VAR_8 ;
 int FUNC_11 (struct ib_ucm_device*) ;
 int FUNC_12 (int *,char*,int) ;
 struct ib_ucm_device* FUNC_13 (int,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int,int ) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_16(struct ib_device *VAR_13)
{
 int VAR_14;
 dev_t VAR_15;
 struct ib_ucm_device *VAR_16;

 if (!VAR_13->alloc_ucontext ||
     FUNC_14(VAR_13->node_type) != VAR_3)
  return;

 VAR_16 = FUNC_13(sizeof *VAR_16, VAR_0);
 if (!VAR_16)
  return;

 VAR_16->ib_dev = VAR_13;

 VAR_14 = FUNC_8(VAR_7, VAR_2);
 if (VAR_14 >= VAR_2) {
  VAR_14 = FUNC_9();
  if (VAR_14 < 0)
   goto err;

  VAR_16->devnum = VAR_14 + VAR_2;
  VAR_15 = VAR_14 + VAR_9;
  FUNC_15(VAR_14, VAR_10);
 } else {
  VAR_16->devnum = VAR_14;
  VAR_15 = VAR_14 + VAR_1;
  FUNC_15(VAR_14, VAR_7);
 }

 FUNC_2(&VAR_16->cdev, &VAR_12);
 VAR_16->cdev.owner = VAR_4;
 FUNC_12(&VAR_16->cdev.kobj, "ucm%d", VAR_16->devnum);
 if (FUNC_0(&VAR_16->cdev, VAR_15, 1))
  goto err;

 VAR_16->dev.class = &VAR_5;
 VAR_16->dev.parent = VAR_13->dma_device;
 VAR_16->dev.devt = VAR_16->cdev.dev;
 VAR_16->dev.release = VAR_8;
 FUNC_4(&VAR_16->dev, "ucm%d", VAR_16->devnum);
 if (FUNC_6(&VAR_16->dev))
  goto err_cdev;

 if (FUNC_5(&VAR_16->dev, &VAR_6))
  goto err_dev;

 FUNC_10(VAR_13, &VAR_11, VAR_16);
 return;

err_dev:
 FUNC_7(&VAR_16->dev);
err_cdev:
 FUNC_1(&VAR_16->cdev);
 if (VAR_16->devnum < VAR_2)
  FUNC_3(VAR_14, VAR_7);
 else
  FUNC_3(VAR_14, VAR_10);
err:
 FUNC_11(VAR_16);
 return;
}
