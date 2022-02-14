
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct asb100_data {int * lm75; int hwmon_dev; void** fan_min; int update_lock; int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i2c_client*) ;
 int VAR_2 ;
 int FUNC_4 (struct i2c_client*) ;
 void* FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct i2c_client*,struct asb100_data*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct asb100_data*) ;
 struct asb100_data* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int *) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_3,
   const struct i2c_device_id *VAR_4)
{
 int VAR_5;
 struct asb100_data *VAR_6;

 VAR_6 = FUNC_10(sizeof(struct asb100_data), VAR_1);
 if (!VAR_6) {
  FUNC_12("asb100.o: probe failed, kzalloc failed!\n");
  VAR_5 = -VAR_0;
  goto ERROR0;
 }

 FUNC_7(VAR_3, VAR_6);
 FUNC_11(&VAR_6->lock);
 FUNC_11(&VAR_6->update_lock);


 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5)
  goto ERROR1;


 FUNC_4(VAR_3);


 VAR_6->fan_min[0] = FUNC_5(VAR_3, FUNC_0(0));
 VAR_6->fan_min[1] = FUNC_5(VAR_3, FUNC_0(1));
 VAR_6->fan_min[2] = FUNC_5(VAR_3, FUNC_0(2));


 if ((VAR_5 = FUNC_13(&VAR_3->dev.kobj, &VAR_2)))
  goto ERROR3;

 VAR_6->hwmon_dev = FUNC_6(&VAR_3->dev);
 if (FUNC_1(VAR_6->hwmon_dev)) {
  VAR_5 = FUNC_2(VAR_6->hwmon_dev);
  goto ERROR4;
 }

 return 0;

ERROR4:
 FUNC_14(&VAR_3->dev.kobj, &VAR_2);
ERROR3:
 FUNC_8(VAR_6->lm75[1]);
 FUNC_8(VAR_6->lm75[0]);
ERROR1:
 FUNC_9(VAR_6);
ERROR0:
 return VAR_5;
}
