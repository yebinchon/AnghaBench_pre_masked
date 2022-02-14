
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct w83l785ts_data {int hwmon_dev; scalar_t__* temp; int update_lock; scalar_t__ valid; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {int dev_attr; } ;
struct TYPE_3__ {int dev_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct i2c_client*,struct w83l785ts_data*) ;
 int FUNC_6 (struct w83l785ts_data*) ;
 struct w83l785ts_data* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_4,
      const struct i2c_device_id *VAR_5)
{
 struct w83l785ts_data *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_7(sizeof(struct w83l785ts_data), VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto exit;
 }

 FUNC_5(VAR_4, VAR_6);
 VAR_6->valid = 0;
 FUNC_8(&VAR_6->update_lock);


 VAR_6->temp[1] = VAR_6->temp[0] = 0;






 VAR_7 = FUNC_2(&VAR_4->dev,
     &VAR_2.dev_attr);
 if (VAR_7)
  goto exit_remove;

 VAR_7 = FUNC_2(&VAR_4->dev,
     &VAR_3.dev_attr);
 if (VAR_7)
  goto exit_remove;


 VAR_6->hwmon_dev = FUNC_4(&VAR_4->dev);
 if (FUNC_0(VAR_6->hwmon_dev)) {
  VAR_7 = FUNC_1(VAR_6->hwmon_dev);
  goto exit_remove;
 }

 return 0;

exit_remove:
 FUNC_3(&VAR_4->dev,
      &VAR_2.dev_attr);
 FUNC_3(&VAR_4->dev,
      &VAR_3.dev_attr);
 FUNC_6(VAR_6);
exit:
 return VAR_7;
}
