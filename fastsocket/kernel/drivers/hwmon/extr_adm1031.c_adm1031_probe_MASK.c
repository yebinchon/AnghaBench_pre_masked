
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct adm1031_data {scalar_t__ chip_type; int hwmon_dev; int * chan_select_table; int update_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct i2c_client*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct i2c_client*,struct adm1031_data*) ;
 int FUNC_5 (struct adm1031_data*) ;
 struct adm1031_data* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_8,
    const struct i2c_device_id *VAR_9)
{
 struct adm1031_data *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_6(sizeof(struct adm1031_data), VAR_1);
 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto exit;
 }

 FUNC_4(VAR_8, VAR_10);
 VAR_10->chip_type = VAR_9->driver_data;
 FUNC_7(&VAR_10->update_lock);

 if (VAR_10->chip_type == VAR_2)
  VAR_10->chan_select_table = &VAR_6;
 else
  VAR_10->chan_select_table = &VAR_7;


 FUNC_2(VAR_8);


 if ((VAR_11 = FUNC_8(&VAR_8->dev.kobj, &VAR_4)))
  goto exit_free;

 if (VAR_10->chip_type == VAR_3) {
  if ((VAR_11 = FUNC_8(&VAR_8->dev.kobj,
      &VAR_5)))
   goto exit_remove;
 }

 VAR_10->hwmon_dev = FUNC_3(&VAR_8->dev);
 if (FUNC_0(VAR_10->hwmon_dev)) {
  VAR_11 = FUNC_1(VAR_10->hwmon_dev);
  goto exit_remove;
 }

 return 0;

exit_remove:
 FUNC_9(&VAR_8->dev.kobj, &VAR_4);
 FUNC_9(&VAR_8->dev.kobj, &VAR_5);
exit_free:
 FUNC_5(VAR_10);
exit:
 return VAR_11;
}
