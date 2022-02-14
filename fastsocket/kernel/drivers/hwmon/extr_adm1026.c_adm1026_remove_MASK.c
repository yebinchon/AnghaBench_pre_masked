
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct adm1026_data {int config1; int hwmon_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct adm1026_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct adm1026_data*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4)
{
 struct adm1026_data *VAR_5 = FUNC_1(VAR_4);
 FUNC_0(VAR_5->hwmon_dev);
 FUNC_3(&VAR_4->dev.kobj, &VAR_1);
 if (VAR_5->config1 & VAR_0)
  FUNC_3(&VAR_4->dev.kobj, &VAR_2);
 else
  FUNC_3(&VAR_4->dev.kobj, &VAR_3);
 FUNC_2(VAR_5);
 return 0;
}
