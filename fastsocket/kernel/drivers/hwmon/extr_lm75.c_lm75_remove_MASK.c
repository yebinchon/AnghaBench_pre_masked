
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm75_data {int orig_conf; int hwmon_dev; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct lm75_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int *) ;
 int FUNC_3 (struct lm75_data*) ;
 int VAR_1 ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2)
{
 struct lm75_data *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->hwmon_dev);
 FUNC_5(&VAR_2->dev.kobj, &VAR_1);
 FUNC_4(VAR_2, VAR_0, VAR_3->orig_conf);
 FUNC_2(VAR_2, ((void*)0));
 FUNC_3(VAR_3);
 return 0;
}
