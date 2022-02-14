
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct adm1026_data {int config1; int hwmon_dev; int vrm; int update_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct i2c_client*,struct adm1026_data*) ;
 int FUNC_5 (struct adm1026_data*) ;
 struct adm1026_data* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_6,
    const struct i2c_device_id *VAR_7)
{
 struct adm1026_data *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_6(sizeof(struct adm1026_data), VAR_2);
 if (!VAR_8) {
  VAR_9 = -VAR_1;
  goto exit;
 }

 FUNC_4(VAR_6, VAR_8);
 FUNC_7(&VAR_8->update_lock);


 VAR_8->vrm = FUNC_10();


 FUNC_2(VAR_6);


 if ((VAR_9 = FUNC_8(&VAR_6->dev.kobj, &VAR_3)))
  goto exitfree;
 if (VAR_8->config1 & VAR_0)
  VAR_9 = FUNC_8(&VAR_6->dev.kobj,
      &VAR_4);
 else
  VAR_9 = FUNC_8(&VAR_6->dev.kobj,
      &VAR_5);
 if (VAR_9)
  goto exitremove;

 VAR_8->hwmon_dev = FUNC_3(&VAR_6->dev);
 if (FUNC_0(VAR_8->hwmon_dev)) {
  VAR_9 = FUNC_1(VAR_8->hwmon_dev);
  goto exitremove;
 }

 return 0;


exitremove:
 FUNC_9(&VAR_6->dev.kobj, &VAR_3);
 if (VAR_8->config1 & VAR_0)
  FUNC_9(&VAR_6->dev.kobj, &VAR_4);
 else
  FUNC_9(&VAR_6->dev.kobj, &VAR_5);
exitfree:
 FUNC_5(VAR_8);
exit:
 return VAR_9;
}
