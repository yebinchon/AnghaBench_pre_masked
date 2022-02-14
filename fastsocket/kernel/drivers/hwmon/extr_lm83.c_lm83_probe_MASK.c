
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm83_data {int hwmon_dev; int update_lock; scalar_t__ valid; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct i2c_client*,struct lm83_data*) ;
 int FUNC_4 (struct lm83_data*) ;
 struct lm83_data* FUNC_5 (int,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_5,
        const struct i2c_device_id *VAR_6)
{
 struct lm83_data *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(sizeof(struct lm83_data), VAR_1);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto exit;
 }

 FUNC_3(VAR_5, VAR_7);
 VAR_7->valid = 0;
 FUNC_6(&VAR_7->update_lock);
 if ((VAR_8 = FUNC_7(&VAR_5->dev.kobj, &VAR_3)))
  goto exit_free;

 if (VAR_6->driver_data == VAR_2) {
  if ((VAR_8 = FUNC_7(&VAR_5->dev.kobj,
           &VAR_4)))
   goto exit_remove_files;
 }

 VAR_7->hwmon_dev = FUNC_2(&VAR_5->dev);
 if (FUNC_0(VAR_7->hwmon_dev)) {
  VAR_8 = FUNC_1(VAR_7->hwmon_dev);
  goto exit_remove_files;
 }

 return 0;

exit_remove_files:
 FUNC_8(&VAR_5->dev.kobj, &VAR_3);
 FUNC_8(&VAR_5->dev.kobj, &VAR_4);
exit_free:
 FUNC_4(VAR_7);
exit:
 return VAR_8;
}
