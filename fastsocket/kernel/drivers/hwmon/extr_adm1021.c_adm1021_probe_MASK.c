
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct adm1021_data {scalar_t__ type; int hwmon_dev; int update_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct i2c_client*,struct adm1021_data*) ;
 int FUNC_5 (struct adm1021_data*) ;
 struct adm1021_data* FUNC_6 (int,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int VAR_4 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 struct adm1021_data *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(sizeof(struct adm1021_data), VAR_1);
 if (!VAR_7) {
  FUNC_8("adm1021: detect failed, kzalloc failed!\n");
  VAR_8 = -VAR_0;
  goto error0;
 }

 FUNC_4(VAR_5, VAR_7);
 VAR_7->type = VAR_6->driver_data;
 FUNC_7(&VAR_7->update_lock);


 if (VAR_7->type != VAR_3 && !VAR_4)
  FUNC_2(VAR_5);


 if ((VAR_8 = FUNC_9(&VAR_5->dev.kobj, &VAR_2)))
  goto error1;

 VAR_7->hwmon_dev = FUNC_3(&VAR_5->dev);
 if (FUNC_0(VAR_7->hwmon_dev)) {
  VAR_8 = FUNC_1(VAR_7->hwmon_dev);
  goto error3;
 }

 return 0;

error3:
 FUNC_10(&VAR_5->dev.kobj, &VAR_2);
error1:
 FUNC_5(VAR_7);
error0:
 return VAR_8;
}
