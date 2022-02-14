
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; int adapter; } ;
struct g760a_data {int hwmon_dev; int clk; int fan_div; int update_lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct i2c_client*,struct g760a_data*) ;
 int FUNC_5 (struct g760a_data*) ;
 struct g760a_data* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 struct g760a_data *VAR_9;
 int VAR_10;

 if (!FUNC_3(VAR_7->adapter,
         VAR_5))
  return -VAR_0;

 VAR_9 = FUNC_6(sizeof(struct g760a_data), VAR_4);
 if (!VAR_9)
  return -VAR_1;

 FUNC_4(VAR_7, VAR_9);

 VAR_9->client = VAR_7;
 FUNC_7(&VAR_9->update_lock);


 VAR_9->fan_div = VAR_3;
 VAR_9->clk = VAR_2;


 VAR_10 = FUNC_8(&VAR_7->dev.kobj, &VAR_6);
 if (VAR_10)
  goto error_sysfs_create_group;

 VAR_9->hwmon_dev = FUNC_2(&VAR_7->dev);
 if (FUNC_0(VAR_9->hwmon_dev)) {
  VAR_10 = FUNC_1(VAR_9->hwmon_dev);
  goto error_hwmon_device_register;
 }

 return 0;

error_hwmon_device_register:
 FUNC_9(&VAR_7->dev.kobj, &VAR_6);
error_sysfs_create_group:
 FUNC_5(VAR_9);
 FUNC_4(VAR_7, ((void*)0));

 return VAR_10;
}
