
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct w83l785ts_data {int hwmon_dev; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {int dev_attr; } ;
struct TYPE_3__ {int dev_attr; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 struct w83l785ts_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct w83l785ts_data*) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_2)
{
 struct w83l785ts_data *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_3->hwmon_dev);
 FUNC_0(&VAR_2->dev,
      &VAR_0.dev_attr);
 FUNC_0(&VAR_2->dev,
      &VAR_1.dev_attr);

 FUNC_3(VAR_3);
 return 0;
}
