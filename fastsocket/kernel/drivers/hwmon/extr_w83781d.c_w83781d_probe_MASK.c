
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83781d_data {scalar_t__* lm75; int hwmon_dev; int type; struct i2c_client* client; int update_lock; int lock; } ;
struct i2c_device_id {int driver_data; } ;
struct device {int kobj; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct i2c_client*,struct w83781d_data*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct w83781d_data*) ;
 struct w83781d_data* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct device*,int ,int ) ;
 int FUNC_10 (struct i2c_client*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (struct device*) ;

__attribute__((used)) static int
FUNC_12(struct i2c_client *VAR_4, const struct i2c_device_id *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct w83781d_data *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(sizeof(struct w83781d_data), VAR_1);
 if (!VAR_7) {
  VAR_8 = -VAR_0;
  goto ERROR1;
 }

 FUNC_3(VAR_4, VAR_7);
 FUNC_7(&VAR_7->lock);
 FUNC_7(&VAR_7->update_lock);

 VAR_7->type = VAR_5->driver_data;
 VAR_7->client = VAR_4;


 VAR_8 = FUNC_10(VAR_4);
 if (VAR_8)
  goto ERROR3;


 FUNC_11(VAR_6);


 VAR_8 = FUNC_9(VAR_6, VAR_7->type, 0);
 if (VAR_8)
  goto ERROR4;

 VAR_7->hwmon_dev = FUNC_2(VAR_6);
 if (FUNC_0(VAR_7->hwmon_dev)) {
  VAR_8 = FUNC_1(VAR_7->hwmon_dev);
  goto ERROR4;
 }

 return 0;

ERROR4:
 FUNC_8(&VAR_6->kobj, &VAR_2);
 FUNC_8(&VAR_6->kobj, &VAR_3);

 if (VAR_7->lm75[0])
  FUNC_4(VAR_7->lm75[0]);
 if (VAR_7->lm75[1])
  FUNC_4(VAR_7->lm75[1]);
ERROR3:
 FUNC_3(VAR_4, ((void*)0));
 FUNC_5(VAR_7);
ERROR1:
 return VAR_8;
}
