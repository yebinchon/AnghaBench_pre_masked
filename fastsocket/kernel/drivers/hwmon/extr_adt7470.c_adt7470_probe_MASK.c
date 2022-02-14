
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_6__ {int kobj; } ;
struct i2c_client {TYPE_3__ dev; int name; } ;
struct TYPE_5__ {int attrs; } ;
struct adt7470_data {int num_temp_sensors; TYPE_1__ attrs; int hwmon_dev; int auto_update; int auto_update_stop; int lock; int auto_update_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct i2c_client*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct i2c_client*,struct adt7470_data*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct adt7470_data*) ;
 int FUNC_10 (int ,struct i2c_client*,int ) ;
 struct adt7470_data* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,TYPE_1__*) ;
 int FUNC_14 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 struct adt7470_data *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_11(sizeof(struct adt7470_data), VAR_2);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto exit;
 }

 VAR_7->num_temp_sensors = -1;
 VAR_7->auto_update_interval = VAR_0;

 FUNC_7(VAR_5, VAR_7);
 FUNC_12(&VAR_7->lock);

 FUNC_3(&VAR_5->dev, "%s chip found\n", VAR_5->name);


 FUNC_2(VAR_5);


 VAR_7->attrs.attrs = VAR_3;
 if ((VAR_8 = FUNC_13(&VAR_5->dev.kobj, &VAR_7->attrs)))
  goto exit_free;

 VAR_7->hwmon_dev = FUNC_5(&VAR_5->dev);
 if (FUNC_0(VAR_7->hwmon_dev)) {
  VAR_8 = FUNC_1(VAR_7->hwmon_dev);
  goto exit_remove;
 }

 FUNC_8(&VAR_7->auto_update_stop);
 VAR_7->auto_update = FUNC_10(VAR_4, VAR_5,
     FUNC_4(VAR_7->hwmon_dev));
 if (FUNC_0(VAR_7->auto_update))
  goto exit_unregister;

 return 0;

exit_unregister:
 FUNC_6(VAR_7->hwmon_dev);
exit_remove:
 FUNC_14(&VAR_5->dev.kobj, &VAR_7->attrs);
exit_free:
 FUNC_9(VAR_7);
exit:
 return VAR_8;
}
