
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct adt7475_data {int hwmon_dev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct i2c_client*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct i2c_client*,struct adt7475_data*) ;
 int FUNC_5 (struct adt7475_data*) ;
 struct adt7475_data* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_4,
    const struct i2c_device_id *VAR_5)
{
 struct adt7475_data *VAR_6;
 int VAR_7, VAR_8 = 0;

 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 FUNC_7(&VAR_6->lock);
 FUNC_4(VAR_4, VAR_6);



 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  FUNC_2(VAR_4, VAR_7);

 VAR_8 = FUNC_8(&VAR_4->dev.kobj, &VAR_3);
 if (VAR_8)
  goto efree;

 VAR_6->hwmon_dev = FUNC_3(&VAR_4->dev);
 if (FUNC_0(VAR_6->hwmon_dev)) {
  VAR_8 = FUNC_1(VAR_6->hwmon_dev);
  goto eremove;
 }

 return 0;

eremove:
 FUNC_9(&VAR_4->dev.kobj, &VAR_3);
efree:
 FUNC_5(VAR_6);
 return VAR_8;
}
