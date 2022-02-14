
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83l786ng_data {int* fan_div; int hwmon_dev; void** fan_min; int update_lock; } ;
struct i2c_device_id {int dummy; } ;
struct device {int kobj; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct i2c_client*,struct w83l786ng_data*) ;
 int FUNC_5 (struct w83l786ng_data*) ;
 struct w83l786ng_data* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int VAR_3 ;
 int FUNC_10 (struct i2c_client*) ;
 void* FUNC_11 (struct i2c_client*,int ) ;

__attribute__((used)) static int
FUNC_12(struct i2c_client *VAR_4, const struct i2c_device_id *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct w83l786ng_data *VAR_7;
 int VAR_8, VAR_9 = 0;
 u8 VAR_10;

 VAR_7 = FUNC_6(sizeof(struct w83l786ng_data), VAR_1);
 if (!VAR_7) {
  VAR_9 = -VAR_0;
  goto exit;
 }

 FUNC_4(VAR_4, VAR_7);
 FUNC_7(&VAR_7->update_lock);


 FUNC_10(VAR_4);


 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  VAR_7->fan_min[VAR_8] = FUNC_11(VAR_4,
      FUNC_2(VAR_8));
 }


 VAR_10 = FUNC_11(VAR_4, VAR_2);
 VAR_7->fan_div[0] = VAR_10 & 0x07;
 VAR_7->fan_div[1] = (VAR_10 >> 4) & 0x07;


 if ((VAR_9 = FUNC_8(&VAR_4->dev.kobj, &VAR_3)))
  goto exit_remove;

 VAR_7->hwmon_dev = FUNC_3(VAR_6);
 if (FUNC_0(VAR_7->hwmon_dev)) {
  VAR_9 = FUNC_1(VAR_7->hwmon_dev);
  goto exit_remove;
 }

 return 0;



exit_remove:
 FUNC_9(&VAR_4->dev.kobj, &VAR_3);
 FUNC_5(VAR_7);
exit:
 return VAR_9;
}
