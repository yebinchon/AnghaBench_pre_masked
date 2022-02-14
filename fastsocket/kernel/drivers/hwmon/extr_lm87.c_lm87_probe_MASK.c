
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct lm87_data {int* in_scale; int channel; int config; int hwmon_dev; int vrm; int update_lock; scalar_t__ valid; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_19__ {int kobj; } ;
struct i2c_client {TYPE_9__ dev; } ;
struct TYPE_18__ {int dev_attr; } ;
struct TYPE_17__ {int dev_attr; } ;
struct TYPE_16__ {int dev_attr; } ;
struct TYPE_15__ {int dev_attr; } ;
struct TYPE_14__ {int dev_attr; } ;
struct TYPE_13__ {int dev_attr; } ;
struct TYPE_12__ {int dev_attr; } ;
struct TYPE_11__ {int dev_attr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_3 (TYPE_9__*,int *) ;
 int FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (struct i2c_client*,struct lm87_data*) ;
 int FUNC_6 (struct lm87_data*) ;
 struct lm87_data* FUNC_7 (int,int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_8 (struct i2c_client*) ;
 int FUNC_9 (struct i2c_client*,int ,int ) ;
 int FUNC_10 (int *) ;
 TYPE_8__ VAR_32 ;
 TYPE_7__ VAR_33 ;
 TYPE_6__ VAR_34 ;
 TYPE_5__ VAR_35 ;
 TYPE_4__ VAR_36 ;
 TYPE_3__ VAR_37 ;
 TYPE_2__ VAR_38 ;
 TYPE_1__ VAR_39 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 () ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_40,
        const struct i2c_device_id *VAR_41)
{
 struct lm87_data *VAR_42;
 int VAR_43;

 VAR_42 = FUNC_7(sizeof(struct lm87_data), VAR_4);
 if (!VAR_42) {
  VAR_43 = -VAR_3;
  goto exit;
 }

 FUNC_5(VAR_40, VAR_42);
 VAR_42->valid = 0;
 FUNC_10(&VAR_42->update_lock);


 FUNC_8(VAR_40);

 VAR_42->in_scale[0] = 2500;
 VAR_42->in_scale[1] = 2700;
 VAR_42->in_scale[2] = (VAR_42->channel & VAR_2) ? 5000 : 3300;
 VAR_42->in_scale[3] = 5000;
 VAR_42->in_scale[4] = 12000;
 VAR_42->in_scale[5] = 2700;
 VAR_42->in_scale[6] = 1875;
 VAR_42->in_scale[7] = 1875;


 if ((VAR_43 = FUNC_11(&VAR_40->dev.kobj, &VAR_30)))
  goto exit_free;

 if (VAR_42->channel & FUNC_0(0)) {
  if ((VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_19))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_21))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_20))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_36.dev_attr)))
   goto exit_remove;
 } else {
  if ((VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_8))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_9))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_7))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_32.dev_attr)))
   goto exit_remove;
 }

 if (VAR_42->channel & FUNC_0(1)) {
  if ((VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_22))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_24))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_23))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_37.dev_attr)))
   goto exit_remove;
 } else {
  if ((VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_11))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_12))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_10))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_33.dev_attr)))
   goto exit_remove;
 }

 if (VAR_42->channel & VAR_1) {
  if ((VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_26))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_27))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_28))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_25))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_38.dev_attr))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_39.dev_attr)))
   goto exit_remove;
 } else {
  if ((VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_13))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_15))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_14))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_34.dev_attr))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_16))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_18))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_17))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_35.dev_attr)))
   goto exit_remove;
 }

 if (!(VAR_42->channel & VAR_0)) {
  VAR_42->vrm = FUNC_13();
  if ((VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_6))
   || (VAR_43 = FUNC_3(&VAR_40->dev,
     &VAR_29)))
   goto exit_remove;
 }

 VAR_42->hwmon_dev = FUNC_4(&VAR_40->dev);
 if (FUNC_1(VAR_42->hwmon_dev)) {
  VAR_43 = FUNC_2(VAR_42->hwmon_dev);
  goto exit_remove;
 }

 return 0;

exit_remove:
 FUNC_12(&VAR_40->dev.kobj, &VAR_30);
 FUNC_12(&VAR_40->dev.kobj, &VAR_31);
exit_free:
 FUNC_9(VAR_40, VAR_5, VAR_42->config);
 FUNC_6(VAR_42);
exit:
 return VAR_43;
}
