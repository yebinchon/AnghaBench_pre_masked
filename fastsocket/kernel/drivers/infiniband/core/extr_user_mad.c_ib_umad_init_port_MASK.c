
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; int kobj; void* owner; } ;
struct ib_umad_port {int dev_num; int port_num; TYPE_1__ cdev; TYPE_1__ sm_cdev; void* sm_dev; void* dev; int file_list; int file_mutex; int sm_sem; struct ib_device* ib_dev; } ;
struct ib_device {int dma_device; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (void*) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_6 (int ,int ,int ,struct ib_umad_port*,char*,int) ;
 scalar_t__ FUNC_7 (void*,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 () ;
 int FUNC_11 (int *,char*,int) ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_17(struct ib_device *VAR_12, int VAR_13,
        struct ib_umad_port *VAR_14)
{
 int VAR_15;
 dev_t VAR_16;

 FUNC_15(&VAR_8);
 VAR_15 = FUNC_9(VAR_5, VAR_0);
 if (VAR_15 >= VAR_0) {
  FUNC_16(&VAR_8);
  VAR_15 = FUNC_10();
  if (VAR_15 < 0)
   return -1;

  FUNC_15(&VAR_8);
  VAR_14->dev_num = VAR_15 + VAR_0;
  VAR_16 = VAR_15 + VAR_6;
  FUNC_14(VAR_15, VAR_7);
 } else {
  VAR_14->dev_num = VAR_15;
  VAR_16 = VAR_15 + VAR_2;
  FUNC_14(VAR_15, VAR_5);
 }
 FUNC_16(&VAR_8);

 VAR_14->ib_dev = VAR_12;
 VAR_14->port_num = VAR_13;
 FUNC_13(&VAR_14->sm_sem, 1);
 FUNC_12(&VAR_14->file_mutex);
 FUNC_0(&VAR_14->file_list);

 FUNC_4(&VAR_14->cdev, &VAR_10);
 VAR_14->cdev.owner = VAR_1;
 FUNC_11(&VAR_14->cdev.kobj, "umad%d", VAR_14->dev_num);
 if (FUNC_2(&VAR_14->cdev, VAR_16, 1))
  goto err_cdev;

 VAR_14->dev = FUNC_6(VAR_9, VAR_12->dma_device,
      VAR_14->cdev.dev, VAR_14,
      "umad%d", VAR_14->dev_num);
 if (FUNC_1(VAR_14->dev))
  goto err_cdev;

 if (FUNC_7(VAR_14->dev, &VAR_3))
  goto err_dev;
 if (FUNC_7(VAR_14->dev, &VAR_4))
  goto err_dev;

 VAR_16 += VAR_0;
 FUNC_4(&VAR_14->sm_cdev, &VAR_11);
 VAR_14->sm_cdev.owner = VAR_1;
 FUNC_11(&VAR_14->sm_cdev.kobj, "issm%d", VAR_14->dev_num);
 if (FUNC_2(&VAR_14->sm_cdev, VAR_16, 1))
  goto err_sm_cdev;

 VAR_14->sm_dev = FUNC_6(VAR_9, VAR_12->dma_device,
         VAR_14->sm_cdev.dev, VAR_14,
         "issm%d", VAR_14->dev_num);
 if (FUNC_1(VAR_14->sm_dev))
  goto err_sm_cdev;

 if (FUNC_7(VAR_14->sm_dev, &VAR_3))
  goto err_sm_dev;
 if (FUNC_7(VAR_14->sm_dev, &VAR_4))
  goto err_sm_dev;

 return 0;

err_sm_dev:
 FUNC_8(VAR_9, VAR_14->sm_cdev.dev);

err_sm_cdev:
 FUNC_3(&VAR_14->sm_cdev);

err_dev:
 FUNC_8(VAR_9, VAR_14->cdev.dev);

err_cdev:
 FUNC_3(&VAR_14->cdev);
 if (VAR_14->dev_num < VAR_0)
  FUNC_5(VAR_15, VAR_5);
 else
  FUNC_5(VAR_15, VAR_7);

 return -1;
}
