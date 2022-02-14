
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lm93_data {void (* update ) (struct lm93_data*,struct i2c_client*) ;int hwmon_dev; int update_lock; scalar_t__ valid; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct i2c_client*,struct lm93_data*) ;
 int FUNC_7 (struct lm93_data*) ;
 struct lm93_data* FUNC_8 (int,int ) ;
 int VAR_6 ;
 int FUNC_9 (struct i2c_client*) ;
 void FUNC_10 (struct lm93_data*,struct i2c_client*) ;
 void FUNC_11 (struct lm93_data*,struct i2c_client*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_7,
        const struct i2c_device_id *VAR_8)
{
 struct lm93_data *VAR_9;
 int VAR_10, VAR_11;
 void (*VAR_12)(struct lm93_data *, struct i2c_client *);


 VAR_11 = FUNC_5(VAR_7->adapter);
 if (((VAR_3 & VAR_11) == VAR_3) &&
   (!VAR_5)) {
  FUNC_2(&VAR_7->dev, "using SMBus block data transactions\n");
  VAR_12 = FUNC_10;
 } else if ((VAR_4 & VAR_11) == VAR_4) {
  FUNC_2(&VAR_7->dev, "disabled SMBus block data "
   "transactions\n");
  VAR_12 = FUNC_11;
 } else {
  FUNC_2(&VAR_7->dev, "detect failed, "
   "smbus byte and/or word data not supported!\n");
  VAR_10 = -VAR_0;
  goto err_out;
 }

 VAR_9 = FUNC_8(sizeof(struct lm93_data), VAR_2);
 if (!VAR_9) {
  FUNC_2(&VAR_7->dev, "out of memory!\n");
  VAR_10 = -VAR_1;
  goto err_out;
 }
 FUNC_6(VAR_7, VAR_9);


 VAR_9->valid = 0;
 VAR_9->update = VAR_12;
 FUNC_12(&VAR_9->update_lock);


 FUNC_9(VAR_7);

 VAR_10 = FUNC_13(&VAR_7->dev.kobj, &VAR_6);
 if (VAR_10)
  goto err_free;


 VAR_9->hwmon_dev = FUNC_4(&VAR_7->dev);
 if ( !FUNC_0(VAR_9->hwmon_dev))
  return 0;

 VAR_10 = FUNC_1(VAR_9->hwmon_dev);
 FUNC_3(&VAR_7->dev, "error registering hwmon device.\n");
 FUNC_14(&VAR_7->dev.kobj, &VAR_6);
err_free:
 FUNC_7(VAR_9);
err_out:
 return VAR_10;
}
