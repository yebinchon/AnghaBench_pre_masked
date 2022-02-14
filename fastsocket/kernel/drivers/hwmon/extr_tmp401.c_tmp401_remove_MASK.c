
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tmp401_data {scalar_t__ kind; scalar_t__ hwmon_dev; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {int dev_attr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 struct tmp401_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct tmp401_data*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_3)
{
 struct tmp401_data *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 if (VAR_4->hwmon_dev)
  FUNC_2(VAR_4->hwmon_dev);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++)
  FUNC_1(&VAR_3->dev, &VAR_0[VAR_5].dev_attr);

 if (VAR_4->kind == VAR_1) {
  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
   FUNC_1(&VAR_3->dev,
        &VAR_2[VAR_5].dev_attr);
 }

 FUNC_4(VAR_4);
 return 0;
}
