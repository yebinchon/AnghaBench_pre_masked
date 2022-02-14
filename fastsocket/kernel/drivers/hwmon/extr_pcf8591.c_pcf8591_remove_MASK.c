
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2)
{
 FUNC_2(&VAR_2->dev.kobj, &VAR_1);
 FUNC_2(&VAR_2->dev.kobj, &VAR_0);
 FUNC_1(FUNC_0(VAR_2));
 return 0;
}
