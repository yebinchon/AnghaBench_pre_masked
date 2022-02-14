
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83791d_data {int* fan_min; int ** lm75; int hwmon_dev; int update_lock; } ;
struct i2c_device_id {int dummy; } ;
struct device {int kobj; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*,int,int,int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct i2c_client*,struct w83791d_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct w83791d_data*) ;
 struct w83791d_data* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct i2c_client*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (struct i2c_client*) ;
 int FUNC_13 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_8,
    const struct i2c_device_id *VAR_9)
{
 struct w83791d_data *VAR_10;
 struct device *VAR_11 = &VAR_8->dev;
 int VAR_12, VAR_13;
 u8 VAR_14;
 VAR_10 = FUNC_7(sizeof(struct w83791d_data), VAR_1);
 if (!VAR_10) {
  VAR_13 = -VAR_0;
  goto error0;
 }

 FUNC_4(VAR_8, VAR_10);
 FUNC_8(&VAR_10->update_lock);

 VAR_13 = FUNC_11(VAR_8);
 if (VAR_13)
  goto error1;


 FUNC_12(VAR_8);



 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  VAR_10->fan_min[VAR_12] = FUNC_13(VAR_8, VAR_4[VAR_12]);
 }


 if ((VAR_13 = FUNC_9(&VAR_8->dev.kobj, &VAR_6)))
  goto error3;


 VAR_14 = FUNC_13(VAR_8, VAR_5) & 0x10;
 if (VAR_14) {
  VAR_13 = FUNC_9(&VAR_8->dev.kobj,
      &VAR_7);
  if (VAR_13)
   goto error4;
 }


 VAR_10->hwmon_dev = FUNC_3(VAR_11);
 if (FUNC_0(VAR_10->hwmon_dev)) {
  VAR_13 = FUNC_1(VAR_10->hwmon_dev);
  goto error5;
 }

 return 0;

error5:
 if (VAR_14)
  FUNC_10(&VAR_8->dev.kobj, &VAR_7);
error4:
 FUNC_10(&VAR_8->dev.kobj, &VAR_6);
error3:
 if (VAR_10->lm75[0] != ((void*)0))
  FUNC_5(VAR_10->lm75[0]);
 if (VAR_10->lm75[1] != ((void*)0))
  FUNC_5(VAR_10->lm75[1]);
error1:
 FUNC_6(VAR_10);
error0:
 return VAR_13;
}
