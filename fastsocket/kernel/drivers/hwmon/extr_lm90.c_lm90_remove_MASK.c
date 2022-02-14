
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lm90_data {scalar_t__ kind; int hwmon_dev; } ;
struct TYPE_4__ {int kobj; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct TYPE_3__ {int dev_attr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int ) ;
 struct lm90_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct lm90_data*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_5)
{
 struct lm90_data *VAR_6 = FUNC_2(VAR_5);

 FUNC_1(VAR_6->hwmon_dev);
 FUNC_4(&VAR_5->dev.kobj, &VAR_1);
 FUNC_0(&VAR_5->dev, &VAR_0);
 if (VAR_6->kind != VAR_3 && VAR_6->kind != VAR_2)
  FUNC_0(&VAR_5->dev,
       &VAR_4.dev_attr);

 FUNC_3(VAR_6);
 return 0;
}
