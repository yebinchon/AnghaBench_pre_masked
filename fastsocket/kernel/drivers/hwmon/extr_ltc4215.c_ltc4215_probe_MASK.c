
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ltc4215_data {int hwmon_dev; int update_lock; } ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct i2c_adapter*,int ) ;
 int FUNC_4 (struct i2c_client*,struct ltc4215_data*) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 int FUNC_6 (struct ltc4215_data*) ;
 struct ltc4215_data* FUNC_7 (int,int ) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_6,
    const struct i2c_device_id *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 struct ltc4215_data *VAR_9;
 int VAR_10;

 if (!FUNC_3(VAR_8, VAR_3))
  return -VAR_0;

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto out_kzalloc;
 }

 FUNC_4(VAR_6, VAR_9);
 FUNC_8(&VAR_9->update_lock);


 FUNC_5(VAR_6, VAR_4, 0x00);


 VAR_10 = FUNC_9(&VAR_6->dev.kobj, &VAR_5);
 if (VAR_10)
  goto out_sysfs_create_group;

 VAR_9->hwmon_dev = FUNC_2(&VAR_6->dev);
 if (FUNC_0(VAR_9->hwmon_dev)) {
  VAR_10 = FUNC_1(VAR_9->hwmon_dev);
  goto out_hwmon_device_register;
 }

 return 0;

out_hwmon_device_register:
 FUNC_10(&VAR_6->dev.kobj, &VAR_5);
out_sysfs_create_group:
 FUNC_6(VAR_9);
out_kzalloc:
 return VAR_10;
}
