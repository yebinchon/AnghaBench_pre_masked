
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct w83793_data {int ** lm75; int hwmon_dev; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_8__ {int dev_attr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (int ) ;
 struct w83793_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct w83793_data*) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_7)
{
 struct w83793_data *VAR_8 = FUNC_3(VAR_7);
 struct device *VAR_9 = &VAR_7->dev;
 int VAR_10;

 FUNC_2(VAR_8->hwmon_dev);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++)
  FUNC_1(VAR_9,
       &VAR_4[VAR_10].dev_attr);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_1); VAR_10++)
  FUNC_1(VAR_9, &VAR_1[VAR_10].dev_attr);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6); VAR_10++)
  FUNC_1(VAR_9, &VAR_6[VAR_10].dev_attr);
 FUNC_1(VAR_9, &VAR_0);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++)
  FUNC_1(VAR_9, &VAR_2[VAR_10].dev_attr);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++)
  FUNC_1(VAR_9, &VAR_3[VAR_10].dev_attr);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); VAR_10++)
  FUNC_1(VAR_9, &VAR_5[VAR_10].dev_attr);

 if (VAR_8->lm75[0] != ((void*)0))
  FUNC_4(VAR_8->lm75[0]);
 if (VAR_8->lm75[1] != ((void*)0))
  FUNC_4(VAR_8->lm75[1]);

 FUNC_5(VAR_8);

 return 0;
}
