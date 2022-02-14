
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int owner; } ;
struct TYPE_8__ {int class; int devt; int * parent; int release; } ;
struct ubi_volume {int vol_id; TYPE_4__ cdev; TYPE_2__ dev; } ;
struct TYPE_7__ {int dev; } ;
struct ubi_device {int ubi_name; int dev; TYPE_1__ cdev; } ;
typedef int dev_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_2__*,char*,int ,int) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (struct ubi_device*) ;
 int VAR_1 ;
 int FUNC_10 (char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (struct ubi_volume*) ;
 int FUNC_12 (struct ubi_device*,struct ubi_volume*) ;

int FUNC_13(struct ubi_device *VAR_4, struct ubi_volume *VAR_5)
{
 int VAR_6, VAR_7 = VAR_5->vol_id;
 dev_t VAR_8;

 FUNC_6("add volume %d", VAR_7);


 FUNC_4(&VAR_5->cdev, &VAR_2);
 VAR_5->cdev.owner = VAR_0;
 VAR_8 = FUNC_1(FUNC_0(VAR_4->cdev.dev), VAR_5->vol_id + 1);
 VAR_6 = FUNC_2(&VAR_5->cdev, VAR_8, 1);
 if (VAR_6) {
  FUNC_10("cannot add character device for volume %d, error %d",
   VAR_7, VAR_6);
  return VAR_6;
 }

 VAR_5->dev.release = VAR_3;
 VAR_5->dev.parent = &VAR_4->dev;
 VAR_5->dev.devt = VAR_8;
 VAR_5->dev.class = VAR_1;
 FUNC_7(&VAR_5->dev, "%s_%d", VAR_4->ubi_name, VAR_5->vol_id);
 VAR_6 = FUNC_8(&VAR_5->dev);
 if (VAR_6)
  goto out_cdev;

 VAR_6 = FUNC_12(VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_3(&VAR_5->cdev);
  FUNC_11(VAR_5);
  return VAR_6;
 }

 if (FUNC_9(VAR_4))
  FUNC_5("check failed while adding volume %d", VAR_7);
 return VAR_6;

out_cdev:
 FUNC_3(&VAR_5->cdev);
 return VAR_6;
}
