
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct adt7470_data {int attrs; int hwmon_dev; int auto_update_stop; int auto_update; } ;


 int FUNC_0 (int ) ;
 struct adt7470_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct adt7470_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct adt7470_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(VAR_1->auto_update);
 FUNC_5(&VAR_1->auto_update_stop);
 FUNC_0(VAR_1->hwmon_dev);
 FUNC_4(&VAR_0->dev.kobj, &VAR_1->attrs);
 FUNC_2(VAR_1);
 return 0;
}
