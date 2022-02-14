
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct max6650_data {int hwmon_dev; int update_lock; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_3__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct i2c_client*,struct max6650_data*) ;
 int FUNC_5 (struct max6650_data*) ;
 struct max6650_data* FUNC_6 (int,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_3,
    const struct i2c_device_id *VAR_4)
{
 struct max6650_data *VAR_5;
 int VAR_6;

 if (!(VAR_5 = FUNC_6(sizeof(struct max6650_data), VAR_1))) {
  FUNC_2(&VAR_3->dev, "out of memory.\n");
  return -VAR_0;
 }

 FUNC_4(VAR_3, VAR_5);
 FUNC_8(&VAR_5->update_lock);




 VAR_6 = FUNC_7(VAR_3);
 if (VAR_6)
  goto err_free;

 VAR_6 = FUNC_9(&VAR_3->dev.kobj, &VAR_2);
 if (VAR_6)
  goto err_free;

 VAR_5->hwmon_dev = FUNC_3(&VAR_3->dev);
 if (!FUNC_0(VAR_5->hwmon_dev))
  return 0;

 VAR_6 = FUNC_1(VAR_5->hwmon_dev);
 FUNC_2(&VAR_3->dev, "error registering hwmon device.\n");
 FUNC_10(&VAR_3->dev.kobj, &VAR_2);
err_free:
 FUNC_5(VAR_5);
 return VAR_6;
}
