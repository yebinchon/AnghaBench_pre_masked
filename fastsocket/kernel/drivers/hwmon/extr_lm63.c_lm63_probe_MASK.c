
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm63_data {int config; int hwmon_dev; int update_lock; scalar_t__ valid; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct i2c_client*,struct lm63_data*) ;
 int FUNC_4 (struct lm63_data*) ;
 struct lm63_data* FUNC_5 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_4,
        const struct i2c_device_id *VAR_5)
{
 struct lm63_data *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_5(sizeof(struct lm63_data), VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto exit;
 }

 FUNC_3(VAR_4, VAR_6);
 VAR_6->valid = 0;
 FUNC_7(&VAR_6->update_lock);


 FUNC_6(VAR_4);


 if ((VAR_7 = FUNC_8(&VAR_4->dev.kobj,
          &VAR_2)))
  goto exit_free;
 if (VAR_6->config & 0x04) {
  if ((VAR_7 = FUNC_8(&VAR_4->dev.kobj,
           &VAR_3)))
   goto exit_remove_files;
 }

 VAR_6->hwmon_dev = FUNC_2(&VAR_4->dev);
 if (FUNC_0(VAR_6->hwmon_dev)) {
  VAR_7 = FUNC_1(VAR_6->hwmon_dev);
  goto exit_remove_files;
 }

 return 0;

exit_remove_files:
 FUNC_9(&VAR_4->dev.kobj, &VAR_2);
 FUNC_9(&VAR_4->dev.kobj, &VAR_3);
exit_free:
 FUNC_4(VAR_6);
exit:
 return VAR_7;
}
