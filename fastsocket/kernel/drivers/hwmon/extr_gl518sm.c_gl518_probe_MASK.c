
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct gl518_data {scalar_t__ type; int alarm_mask; int hwmon_dev; int update_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct i2c_client*,struct gl518_data*) ;
 int FUNC_6 (struct gl518_data*) ;
 struct gl518_data* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_7,
         const struct i2c_device_id *VAR_8)
{
 struct gl518_data *VAR_9;
 int VAR_10, VAR_11;

 VAR_9 = FUNC_7(sizeof(struct gl518_data), VAR_1);
 if (!VAR_9) {
  VAR_10 = -VAR_0;
  goto exit;
 }

 FUNC_5(VAR_7, VAR_9);
 VAR_11 = FUNC_3(VAR_7, VAR_2);
 VAR_9->type = VAR_11 == 0x80 ? VAR_6 : VAR_5;
 FUNC_8(&VAR_9->update_lock);


 VAR_9->alarm_mask = 0xff;
 FUNC_2(VAR_7);


 if ((VAR_10 = FUNC_9(&VAR_7->dev.kobj, &VAR_3)))
  goto exit_free;
 if (VAR_9->type == VAR_6)
  if ((VAR_10 = FUNC_9(&VAR_7->dev.kobj,
           &VAR_4)))
   goto exit_remove_files;

 VAR_9->hwmon_dev = FUNC_4(&VAR_7->dev);
 if (FUNC_0(VAR_9->hwmon_dev)) {
  VAR_10 = FUNC_1(VAR_9->hwmon_dev);
  goto exit_remove_files;
 }

 return 0;

exit_remove_files:
 FUNC_10(&VAR_7->dev.kobj, &VAR_3);
 if (VAR_9->type == VAR_6)
  FUNC_10(&VAR_7->dev.kobj, &VAR_4);
exit_free:
 FUNC_6(VAR_9);
exit:
 return VAR_10;
}
