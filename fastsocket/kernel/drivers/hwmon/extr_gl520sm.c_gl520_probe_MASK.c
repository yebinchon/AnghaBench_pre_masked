
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_14__ {int kobj; } ;
struct i2c_client {TYPE_11__ dev; } ;
struct gl520_data {int hwmon_dev; scalar_t__ two_temps; int update_lock; } ;
struct TYPE_23__ {int dev_attr; } ;
struct TYPE_22__ {int dev_attr; } ;
struct TYPE_21__ {int dev_attr; } ;
struct TYPE_20__ {int dev_attr; } ;
struct TYPE_19__ {int dev_attr; } ;
struct TYPE_18__ {int dev_attr; } ;
struct TYPE_17__ {int dev_attr; } ;
struct TYPE_16__ {int dev_attr; } ;
struct TYPE_15__ {int dev_attr; } ;
struct TYPE_13__ {int dev_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_11__*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (TYPE_11__*) ;
 int FUNC_5 (struct i2c_client*,struct gl520_data*) ;
 int FUNC_6 (struct gl520_data*) ;
 struct gl520_data* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 TYPE_10__ VAR_4 ;
 TYPE_9__ VAR_5 ;
 TYPE_8__ VAR_6 ;
 TYPE_7__ VAR_7 ;
 TYPE_6__ VAR_8 ;
 TYPE_5__ VAR_9 ;
 TYPE_4__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 TYPE_2__ VAR_12 ;
 TYPE_1__ VAR_13 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_14,
         const struct i2c_device_id *VAR_15)
{
 struct gl520_data *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_7(sizeof(struct gl520_data), VAR_1);
 if (!VAR_16) {
  VAR_17 = -VAR_0;
  goto exit;
 }

 FUNC_5(VAR_14, VAR_16);
 FUNC_8(&VAR_16->update_lock);


 FUNC_3(VAR_14);


 if ((VAR_17 = FUNC_9(&VAR_14->dev.kobj, &VAR_2)))
  goto exit_free;

 if (VAR_16->two_temps) {
  if ((VAR_17 = FUNC_2(&VAR_14->dev,
    &VAR_11.dev_attr))
   || (VAR_17 = FUNC_2(&VAR_14->dev,
    &VAR_12.dev_attr))
   || (VAR_17 = FUNC_2(&VAR_14->dev,
    &VAR_13.dev_attr))
   || (VAR_17 = FUNC_2(&VAR_14->dev,
    &VAR_9.dev_attr))
   || (VAR_17 = FUNC_2(&VAR_14->dev,
    &VAR_10.dev_attr)))
   goto exit_remove_files;
 } else {
  if ((VAR_17 = FUNC_2(&VAR_14->dev,
    &VAR_6.dev_attr))
   || (VAR_17 = FUNC_2(&VAR_14->dev,
    &VAR_8.dev_attr))
   || (VAR_17 = FUNC_2(&VAR_14->dev,
    &VAR_7.dev_attr))
   || (VAR_17 = FUNC_2(&VAR_14->dev,
    &VAR_4.dev_attr))
   || (VAR_17 = FUNC_2(&VAR_14->dev,
    &VAR_5.dev_attr)))
   goto exit_remove_files;
 }


 VAR_16->hwmon_dev = FUNC_4(&VAR_14->dev);
 if (FUNC_0(VAR_16->hwmon_dev)) {
  VAR_17 = FUNC_1(VAR_16->hwmon_dev);
  goto exit_remove_files;
 }

 return 0;

exit_remove_files:
 FUNC_10(&VAR_14->dev.kobj, &VAR_2);
 FUNC_10(&VAR_14->dev.kobj, &VAR_3);
exit_free:
 FUNC_6(VAR_16);
exit:
 return VAR_17;
}
