
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct dme1737_data {int hwmon_dev; int update_lock; int name; struct i2c_client* client; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct i2c_client*,struct dme1737_data*) ;
 int FUNC_8 (struct dme1737_data*) ;
 struct dme1737_data* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_2,
        const struct i2c_device_id *VAR_3)
{
 struct dme1737_data *VAR_4;
 struct device *VAR_5 = &VAR_2->dev;
 int VAR_6;

 VAR_4 = FUNC_9(sizeof(struct dme1737_data), VAR_1);
 if (!VAR_4) {
  VAR_6 = -VAR_0;
  goto exit;
 }

 FUNC_7(VAR_2, VAR_4);
 VAR_4->type = VAR_3->driver_data;
 VAR_4->client = VAR_2;
 VAR_4->name = VAR_2->name;
 FUNC_10(&VAR_4->update_lock);


 if ((VAR_6 = FUNC_4(VAR_5))) {
  FUNC_2(VAR_5, "Failed to initialize device.\n");
  goto exit_kfree;
 }


 if ((VAR_6 = FUNC_3(VAR_5))) {
  FUNC_2(VAR_5, "Failed to create sysfs files.\n");
  goto exit_kfree;
 }


 VAR_4->hwmon_dev = FUNC_6(VAR_5);
 if (FUNC_0(VAR_4->hwmon_dev)) {
  FUNC_2(VAR_5, "Failed to register device.\n");
  VAR_6 = FUNC_1(VAR_4->hwmon_dev);
  goto exit_remove;
 }

 return 0;

exit_remove:
 FUNC_5(VAR_5);
exit_kfree:
 FUNC_8(VAR_4);
exit:
 return VAR_6;
}
