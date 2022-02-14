
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm78_data {int hwmon_dev; int type; struct i2c_client* client; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct i2c_client*,struct lm78_data*) ;
 int FUNC_4 (struct lm78_data*) ;
 struct lm78_data* FUNC_5 (int,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct lm78_data*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_3,
     const struct i2c_device_id *VAR_4)
{
 struct lm78_data *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(sizeof(struct lm78_data), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_3(VAR_3, VAR_5);
 VAR_5->client = VAR_3;
 VAR_5->type = VAR_4->driver_data;


 FUNC_6(VAR_5);


 VAR_6 = FUNC_7(&VAR_3->dev.kobj, &VAR_2);
 if (VAR_6)
  goto ERROR3;

 VAR_5->hwmon_dev = FUNC_2(&VAR_3->dev);
 if (FUNC_0(VAR_5->hwmon_dev)) {
  VAR_6 = FUNC_1(VAR_5->hwmon_dev);
  goto ERROR4;
 }

 return 0;

ERROR4:
 FUNC_8(&VAR_3->dev.kobj, &VAR_2);
ERROR3:
 FUNC_4(VAR_5);
 return VAR_6;
}
