
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcf8591_data {int update_lock; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (struct i2c_client*,struct pcf8591_data*) ;
 int VAR_4 ;
 int FUNC_2 (struct pcf8591_data*) ;
 struct pcf8591_data* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct pcf8591_data *VAR_9;
 int VAR_10;

 if (!(VAR_9 = FUNC_3(sizeof(struct pcf8591_data), VAR_1))) {
  VAR_10 = -VAR_0;
  goto exit;
 }

 FUNC_1(VAR_7, VAR_9);
 FUNC_4(&VAR_9->update_lock);


 FUNC_5(VAR_7);


 VAR_10 = FUNC_6(&VAR_7->dev.kobj, &VAR_5);
 if (VAR_10)
  goto exit_kfree;


 if (VAR_4 != 3) {
  if ((VAR_10 = FUNC_0(&VAR_7->dev,
           &VAR_2)))
   goto exit_sysfs_remove;
 }


 if (VAR_4 == 0) {
  if ((VAR_10 = FUNC_0(&VAR_7->dev,
           &VAR_3)))
   goto exit_sysfs_remove;
 }

 return 0;

exit_sysfs_remove:
 FUNC_7(&VAR_7->dev.kobj, &VAR_6);
 FUNC_7(&VAR_7->dev.kobj, &VAR_5);
exit_kfree:
 FUNC_2(VAR_9);
exit:
 return VAR_10;
}
