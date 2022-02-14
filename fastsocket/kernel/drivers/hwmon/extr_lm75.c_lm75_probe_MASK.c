
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct lm75_data {int orig_conf; int hwmon_dev; int update_lock; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; int name; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct i2c_client*,struct lm75_data*) ;
 int FUNC_8 (struct lm75_data*) ;
 struct lm75_data* FUNC_9 (int,int ) ;
 int VAR_6 ;
 int FUNC_10 (struct i2c_client*,int ) ;
 int FUNC_11 (struct i2c_client*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;

__attribute__((used)) static int
FUNC_15(struct i2c_client *VAR_7, const struct i2c_device_id *VAR_8)
{
 struct lm75_data *VAR_9;
 int VAR_10;
 u8 VAR_11, VAR_12;
 int VAR_13;

 if (!FUNC_6(VAR_7->adapter,
   VAR_3 | VAR_4))
  return -VAR_0;

 VAR_9 = FUNC_9(sizeof(struct lm75_data), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_7(VAR_7, VAR_9);
 FUNC_12(&VAR_9->update_lock);




 VAR_11 = 0;
 VAR_12 = (1 << 0)
  | (1 << 6) | (1 << 5);


 VAR_10 = FUNC_10(VAR_7, VAR_5);
 if (VAR_10 < 0) {
  FUNC_2(&VAR_7->dev, "Can't read config? %d\n", VAR_10);
  goto exit_free;
 }
 VAR_9->orig_conf = VAR_10;
 VAR_13 = VAR_10 & ~VAR_12;
 VAR_13 |= VAR_11;
 if (VAR_10 != VAR_13)
  FUNC_11(VAR_7, VAR_5, VAR_13);
 FUNC_2(&VAR_7->dev, "Config %02x\n", VAR_13);


 VAR_10 = FUNC_13(&VAR_7->dev.kobj, &VAR_6);
 if (VAR_10)
  goto exit_free;

 VAR_9->hwmon_dev = FUNC_5(&VAR_7->dev);
 if (FUNC_0(VAR_9->hwmon_dev)) {
  VAR_10 = FUNC_1(VAR_9->hwmon_dev);
  goto exit_remove;
 }

 FUNC_3(&VAR_7->dev, "%s: sensor '%s'\n",
   FUNC_4(VAR_9->hwmon_dev), VAR_7->name);

 return 0;

exit_remove:
 FUNC_14(&VAR_7->dev.kobj, &VAR_6);
exit_free:
 FUNC_7(VAR_7, ((void*)0));
 FUNC_8(VAR_9);
 return VAR_10;
}
