
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ltc4245_data {int hwmon_dev; int update_lock; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct i2c_adapter*,int ) ;
 int FUNC_4 (struct i2c_client*,struct ltc4245_data*) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 int FUNC_6 (struct ltc4245_data*) ;
 struct ltc4245_data* FUNC_7 (int,int ) ;
 int VAR_6 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct i2c_adapter *VAR_9 = VAR_7->adapter;
 struct ltc4245_data *VAR_10;
 int VAR_11;

 if (!FUNC_3(VAR_9, VAR_3))
  return -VAR_0;

 VAR_10 = FUNC_7(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  VAR_11 = -VAR_1;
  goto out_kzalloc;
 }

 FUNC_4(VAR_7, VAR_10);
 FUNC_8(&VAR_10->update_lock);


 FUNC_5(VAR_7, VAR_4, 0x00);
 FUNC_5(VAR_7, VAR_5, 0x00);


 VAR_11 = FUNC_9(&VAR_7->dev.kobj, &VAR_6);
 if (VAR_11)
  goto out_sysfs_create_group;

 VAR_10->hwmon_dev = FUNC_2(&VAR_7->dev);
 if (FUNC_0(VAR_10->hwmon_dev)) {
  VAR_11 = FUNC_1(VAR_10->hwmon_dev);
  goto out_hwmon_device_register;
 }

 return 0;

out_hwmon_device_register:
 FUNC_10(&VAR_7->dev.kobj, &VAR_6);
out_sysfs_create_group:
 FUNC_6(VAR_10);
out_kzalloc:
 return VAR_11;
}
