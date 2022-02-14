
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ics932s401_data {int attrs; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 struct ics932s401_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct ics932s401_data*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct ics932s401_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_0->dev.kobj, &VAR_1->attrs);
 FUNC_1(VAR_1);
 return 0;
}
