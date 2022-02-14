
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* parent; } ;
struct iio_dev {int modes; TYPE_1__ dev; int id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,int *) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;
 int VAR_1 ;

int FUNC_10(struct iio_dev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_5(VAR_2, &VAR_1);
 if (VAR_3) {
  FUNC_0(&VAR_2->dev, "Failed to get id\n");
  goto error_ret;
 }
 FUNC_1(&VAR_2->dev, "device%d", VAR_2->id);

 VAR_3 = FUNC_2(&VAR_2->dev);
 if (VAR_3)
  goto error_free_idr;
 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->dev.parent,
   "Failed to register sysfs interfaces\n");
  goto error_del_device;
 }
 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->dev.parent,
   "Failed to register event set \n");
  goto error_free_sysfs;
 }
 if (VAR_2->modes & VAR_0)
  FUNC_7(VAR_2);

 return 0;

error_free_sysfs:
 FUNC_9(VAR_2);
error_del_device:
 FUNC_3(&VAR_2->dev);
error_free_idr:
 FUNC_8(VAR_2);
error_ret:
 return VAR_3;
}
