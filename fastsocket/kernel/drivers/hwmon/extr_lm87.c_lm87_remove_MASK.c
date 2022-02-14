
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm87_data {int config; int hwmon_dev; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct lm87_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct lm87_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_3)
{
 struct lm87_data *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_4->hwmon_dev);
 FUNC_4(&VAR_3->dev.kobj, &VAR_1);
 FUNC_4(&VAR_3->dev.kobj, &VAR_2);

 FUNC_3(VAR_3, VAR_0, VAR_4->config);
 FUNC_2(VAR_4);
 return 0;
}
