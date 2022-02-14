
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max6875_data {int fake_client; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 struct max6875_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct max6875_data*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1)
{
 struct max6875_data *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_2->fake_client);

 FUNC_3(&VAR_1->dev.kobj, &VAR_0);
 FUNC_2(VAR_2);

 return 0;
}
