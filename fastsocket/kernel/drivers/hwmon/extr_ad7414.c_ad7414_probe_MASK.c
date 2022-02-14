
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; int adapter; } ;
struct ad7414_data {int hwmon_dev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct i2c_client*,struct ad7414_data*) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (struct i2c_client*,int ,int) ;
 int FUNC_9 (struct ad7414_data*) ;
 struct ad7414_data* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_6,
   const struct i2c_device_id *VAR_7)
{
 struct ad7414_data *VAR_8;
 int VAR_9;
 int VAR_10 = 0;

 if (!FUNC_5(VAR_6->adapter, VAR_3 |
         VAR_4))
  goto exit;

 VAR_8 = FUNC_10(sizeof(struct ad7414_data), VAR_2);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto exit;
 }

 FUNC_6(VAR_6, VAR_8);
 FUNC_11(&VAR_8->lock);

 FUNC_2(&VAR_6->dev, "chip found\n");


 VAR_9 = FUNC_7(VAR_6, VAR_0);
 if (VAR_9 < 0)
  FUNC_3(&VAR_6->dev,
    "ad7414_probe unable to read config register.\n");
 else {
  VAR_9 &= ~(1 << 7);
  FUNC_8(VAR_6, VAR_0, VAR_9);
 }


 VAR_10 = FUNC_12(&VAR_6->dev.kobj, &VAR_5);
 if (VAR_10)
  goto exit_free;

 VAR_8->hwmon_dev = FUNC_4(&VAR_6->dev);
 if (FUNC_0(VAR_8->hwmon_dev)) {
  VAR_10 = FUNC_1(VAR_8->hwmon_dev);
  goto exit_remove;
 }

 return 0;

exit_remove:
 FUNC_13(&VAR_6->dev.kobj, &VAR_5);
exit_free:
 FUNC_9(VAR_8);
exit:
 return VAR_10;
}
