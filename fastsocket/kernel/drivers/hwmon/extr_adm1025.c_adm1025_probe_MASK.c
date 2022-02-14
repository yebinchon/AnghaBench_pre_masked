
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct adm1025_data {int hwmon_dev; int update_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct i2c_client*,struct adm1025_data*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct adm1025_data*) ;
 struct adm1025_data* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 struct adm1025_data *VAR_7;
 int VAR_8;
 u8 VAR_9;

 VAR_7 = FUNC_7(sizeof(struct adm1025_data), VAR_2);
 if (!VAR_7) {
  VAR_8 = -VAR_1;
  goto exit;
 }

 FUNC_4(VAR_5, VAR_7);
 FUNC_8(&VAR_7->update_lock);


 FUNC_2(VAR_5);


 if ((VAR_8 = FUNC_9(&VAR_5->dev.kobj, &VAR_3)))
  goto exit_free;


 VAR_9 = FUNC_5(VAR_5, VAR_0);
 if (!(VAR_9 & 0x20)) {
  if ((VAR_8 = FUNC_9(&VAR_5->dev.kobj,
           &VAR_4)))
   goto exit_remove;
 }

 VAR_7->hwmon_dev = FUNC_3(&VAR_5->dev);
 if (FUNC_0(VAR_7->hwmon_dev)) {
  VAR_8 = FUNC_1(VAR_7->hwmon_dev);
  goto exit_remove;
 }

 return 0;

exit_remove:
 FUNC_10(&VAR_5->dev.kobj, &VAR_3);
 FUNC_10(&VAR_5->dev.kobj, &VAR_4);
exit_free:
 FUNC_6(VAR_7);
exit:
 return VAR_8;
}
