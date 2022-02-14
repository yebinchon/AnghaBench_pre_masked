
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83781d_data {scalar_t__* lm75; int hwmon_dev; } ;
struct device {int kobj; } ;
struct i2c_client {struct device dev; } ;


 int FUNC_0 (int ) ;
 struct w83781d_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct w83781d_data*) ;
 int FUNC_5 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(struct i2c_client *VAR_2)
{
 struct w83781d_data *VAR_3 = FUNC_1(VAR_2);
 struct device *VAR_4 = &VAR_2->dev;

 FUNC_0(VAR_3->hwmon_dev);

 FUNC_5(&VAR_4->kobj, &VAR_0);
 FUNC_5(&VAR_4->kobj, &VAR_1);

 if (VAR_3->lm75[0])
  FUNC_3(VAR_3->lm75[0]);
 if (VAR_3->lm75[1])
  FUNC_3(VAR_3->lm75[1]);

 FUNC_2(VAR_2, ((void*)0));
 FUNC_4(VAR_3);

 return 0;
}
