
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_device_id {int driver_data; } ;
struct TYPE_6__ {int kobj; } ;
struct i2c_client {TYPE_3__ dev; int name; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_5__ {int attrs; } ;
struct ad7418_data {int type; int adc_max; TYPE_1__ attrs; int hwmon_dev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (TYPE_3__*,char*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct i2c_adapter*,int) ;
 int FUNC_6 (struct i2c_client*,struct ad7418_data*) ;
 int FUNC_7 (struct ad7418_data*) ;
 struct ad7418_data* FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_8,
    const struct i2c_device_id *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_8->adapter;
 struct ad7418_data *VAR_11;
 int VAR_12;

 if (!FUNC_5(VAR_10, VAR_3 |
     VAR_4)) {
  VAR_12 = -VAR_1;
  goto exit;
 }

 if (!(VAR_11 = FUNC_8(sizeof(struct ad7418_data), VAR_2))) {
  VAR_12 = -VAR_0;
  goto exit;
 }

 FUNC_6(VAR_8, VAR_11);

 FUNC_9(&VAR_11->lock);
 VAR_11->type = VAR_9->driver_data;

 switch (VAR_11->type) {
 case 130:
  VAR_11->adc_max = 0;
  VAR_11->attrs.attrs = VAR_5;
  break;

 case 129:
  VAR_11->adc_max = 4;
  VAR_11->attrs.attrs = VAR_6;
  break;

 case 128:
  VAR_11->adc_max = 1;
  VAR_11->attrs.attrs = VAR_7;
  break;
 }

 FUNC_3(&VAR_8->dev, "%s chip found\n", VAR_8->name);


 FUNC_2(VAR_8);


 if ((VAR_12 = FUNC_10(&VAR_8->dev.kobj, &VAR_11->attrs)))
  goto exit_free;

 VAR_11->hwmon_dev = FUNC_4(&VAR_8->dev);
 if (FUNC_0(VAR_11->hwmon_dev)) {
  VAR_12 = FUNC_1(VAR_11->hwmon_dev);
  goto exit_remove;
 }

 return 0;

exit_remove:
 FUNC_11(&VAR_8->dev.kobj, &VAR_11->attrs);
exit_free:
 FUNC_7(VAR_11);
exit:
 return VAR_12;
}
