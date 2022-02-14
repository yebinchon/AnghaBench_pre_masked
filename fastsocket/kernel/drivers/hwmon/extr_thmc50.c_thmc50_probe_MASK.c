
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thmc50_data {scalar_t__ has_temp3; int hwmon_dev; int update_lock; int type; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct i2c_client*,struct thmc50_data*) ;
 int FUNC_4 (struct thmc50_data*) ;
 struct thmc50_data* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_4,
   const struct i2c_device_id *VAR_5)
{
 struct thmc50_data *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(sizeof(struct thmc50_data), VAR_1);
 if (!VAR_6) {
  FUNC_7("thmc50: detect failed, kzalloc failed!\n");
  VAR_7 = -VAR_0;
  goto exit;
 }

 FUNC_3(VAR_4, VAR_6);
 VAR_6->type = VAR_5->driver_data;
 FUNC_6(&VAR_6->update_lock);

 FUNC_10(VAR_4);


 if ((VAR_7 = FUNC_8(&VAR_4->dev.kobj, &VAR_3)))
  goto exit_free;


 if (VAR_6->has_temp3)
  if ((VAR_7 = FUNC_8(&VAR_4->dev.kobj,
           &VAR_2)))
   goto exit_remove_sysfs_thmc50;


 VAR_6->hwmon_dev = FUNC_2(&VAR_4->dev);
 if (FUNC_0(VAR_6->hwmon_dev)) {
  VAR_7 = FUNC_1(VAR_6->hwmon_dev);
  goto exit_remove_sysfs;
 }

 return 0;

exit_remove_sysfs:
 if (VAR_6->has_temp3)
  FUNC_9(&VAR_4->dev.kobj, &VAR_2);
exit_remove_sysfs_thmc50:
 FUNC_9(&VAR_4->dev.kobj, &VAR_3);
exit_free:
 FUNC_4(VAR_6);
exit:
 return VAR_7;
}
