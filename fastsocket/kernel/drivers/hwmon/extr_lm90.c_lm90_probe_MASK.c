
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct lm90_data {scalar_t__ kind; int hwmon_dev; int update_lock; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_6__ {int kobj; int parent; } ;
struct i2c_client {int flags; TYPE_2__ dev; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_5__ {int dev_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct i2c_adapter*,int ) ;
 int FUNC_6 (struct i2c_client*,struct lm90_data*) ;
 int FUNC_7 (struct lm90_data*) ;
 struct lm90_data* FUNC_8 (int,int ) ;
 int VAR_6 ;
 int FUNC_9 (struct i2c_client*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int *) ;
 TYPE_1__ VAR_9 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 struct i2c_adapter* FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_10,
        const struct i2c_device_id *VAR_11)
{
 struct i2c_adapter *VAR_12 = FUNC_13(VAR_10->dev.parent);
 struct lm90_data *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_8(sizeof(struct lm90_data), VAR_1);
 if (!VAR_13) {
  VAR_14 = -VAR_0;
  goto exit;
 }
 FUNC_6(VAR_10, VAR_13);
 FUNC_10(&VAR_13->update_lock);


 VAR_13->kind = VAR_11->driver_data;
 if (VAR_13->kind == VAR_4) {
  if (!FUNC_5(VAR_12, VAR_3))
   VAR_10->flags &= ~VAR_2;
 }


 FUNC_9(VAR_10);


 if ((VAR_14 = FUNC_11(&VAR_10->dev.kobj, &VAR_6)))
  goto exit_free;
 if (VAR_10->flags & VAR_2) {
  if ((VAR_14 = FUNC_2(&VAR_10->dev,
           &VAR_5)))
   goto exit_remove_files;
 }
 if (VAR_13->kind != VAR_8 && VAR_13->kind != VAR_7) {
  if ((VAR_14 = FUNC_2(&VAR_10->dev,
    &VAR_9.dev_attr)))
   goto exit_remove_files;
 }

 VAR_13->hwmon_dev = FUNC_4(&VAR_10->dev);
 if (FUNC_0(VAR_13->hwmon_dev)) {
  VAR_14 = FUNC_1(VAR_13->hwmon_dev);
  goto exit_remove_files;
 }

 return 0;

exit_remove_files:
 FUNC_12(&VAR_10->dev.kobj, &VAR_6);
 FUNC_3(&VAR_10->dev, &VAR_5);
exit_free:
 FUNC_7(VAR_13);
exit:
 return VAR_14;
}
