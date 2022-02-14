
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm80_data {int hwmon_dev; void** fan_min; int update_lock; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct i2c_client*,struct lm80_data*) ;
 int FUNC_5 (struct lm80_data*) ;
 struct lm80_data* FUNC_6 (int,int ) ;
 int VAR_2 ;
 int FUNC_7 (struct i2c_client*) ;
 void* FUNC_8 (struct i2c_client*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_3,
        const struct i2c_device_id *VAR_4)
{
 struct lm80_data *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(sizeof(struct lm80_data), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto exit;
 }

 FUNC_4(VAR_3, VAR_5);
 FUNC_9(&VAR_5->update_lock);


 FUNC_7(VAR_3);


 VAR_5->fan_min[0] = FUNC_8(VAR_3, FUNC_1(1));
 VAR_5->fan_min[1] = FUNC_8(VAR_3, FUNC_1(2));


 if ((VAR_6 = FUNC_10(&VAR_3->dev.kobj, &VAR_2)))
  goto error_free;

 VAR_5->hwmon_dev = FUNC_3(&VAR_3->dev);
 if (FUNC_0(VAR_5->hwmon_dev)) {
  VAR_6 = FUNC_2(VAR_5->hwmon_dev);
  goto error_remove;
 }

 return 0;

error_remove:
 FUNC_11(&VAR_3->dev.kobj, &VAR_2);
error_free:
 FUNC_5(VAR_5);
exit:
 return VAR_6;
}
