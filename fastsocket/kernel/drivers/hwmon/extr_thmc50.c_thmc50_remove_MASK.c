
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thmc50_data {scalar_t__ has_temp3; int hwmon_dev; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 struct thmc50_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct thmc50_data*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2)
{
 struct thmc50_data *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(VAR_3->hwmon_dev);
 FUNC_3(&VAR_2->dev.kobj, &VAR_1);
 if (VAR_3->has_temp3)
  FUNC_3(&VAR_2->dev.kobj, &VAR_0);

 FUNC_2(VAR_3);

 return 0;
}
