
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max1619_data {int hwmon_dev; int update_lock; scalar_t__ valid; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct i2c_client*,struct max1619_data*) ;
 int FUNC_4 (struct max1619_data*) ;
 struct max1619_data* FUNC_5 (int,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_3,
    const struct i2c_device_id *VAR_4)
{
 struct max1619_data *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(sizeof(struct max1619_data), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto exit;
 }

 FUNC_3(VAR_3, VAR_5);
 VAR_5->valid = 0;
 FUNC_7(&VAR_5->update_lock);


 FUNC_6(VAR_3);


 if ((VAR_6 = FUNC_8(&VAR_3->dev.kobj, &VAR_2)))
  goto exit_free;

 VAR_5->hwmon_dev = FUNC_2(&VAR_3->dev);
 if (FUNC_0(VAR_5->hwmon_dev)) {
  VAR_6 = FUNC_1(VAR_5->hwmon_dev);
  goto exit_remove_files;
 }

 return 0;

exit_remove_files:
 FUNC_9(&VAR_3->dev.kobj, &VAR_2);
exit_free:
 FUNC_4(VAR_5);
exit:
 return VAR_6;
}
