
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w83792d_data {int ** lm75; int hwmon_dev; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct w83792d_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct w83792d_data*) ;
 int FUNC_5 (int *,int *) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_6(struct i2c_client *VAR_2)
{
 struct w83792d_data *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 FUNC_1(VAR_3->hwmon_dev);
 FUNC_5(&VAR_2->dev.kobj, &VAR_0);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  FUNC_5(&VAR_2->dev.kobj,
       &VAR_1[VAR_4]);

 if (VAR_3->lm75[0] != ((void*)0))
  FUNC_3(VAR_3->lm75[0]);
 if (VAR_3->lm75[1] != ((void*)0))
  FUNC_3(VAR_3->lm75[1]);

 FUNC_4(VAR_3);
 return 0;
}
