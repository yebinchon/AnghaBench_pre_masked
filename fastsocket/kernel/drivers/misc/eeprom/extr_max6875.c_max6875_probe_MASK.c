
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max6875_data {int fake_client; int update_lock; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {int addr; TYPE_1__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i2c_adapter*,int) ;
 int FUNC_1 (struct i2c_adapter*,int) ;
 int FUNC_2 (struct i2c_client*,struct max6875_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct max6875_data*) ;
 struct max6875_data* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6,
    const struct i2c_device_id *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 struct max6875_data *VAR_9;
 int VAR_10;

 if (!FUNC_0(VAR_8, VAR_4
         | VAR_3))
  return -VAR_0;


 if (VAR_6->addr & 1)
  return -VAR_0;

 if (!(VAR_9 = FUNC_5(sizeof(struct max6875_data), VAR_2)))
  return -VAR_1;


 VAR_9->fake_client = FUNC_1(VAR_6->adapter, VAR_6->addr + 1);
 if (!VAR_9->fake_client) {
  VAR_10 = -VAR_1;
  goto exit_kfree;
 }


 FUNC_2(VAR_6, VAR_9);
 FUNC_6(&VAR_9->update_lock);

 VAR_10 = FUNC_7(&VAR_6->dev.kobj, &VAR_5);
 if (VAR_10)
  goto exit_remove_fake;

 return 0;

exit_remove_fake:
 FUNC_3(VAR_9->fake_client);
exit_kfree:
 FUNC_4(VAR_9);
 return VAR_10;
}
