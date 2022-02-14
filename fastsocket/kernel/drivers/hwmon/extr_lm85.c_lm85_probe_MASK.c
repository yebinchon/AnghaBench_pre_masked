
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm85_data {int type; int vid; int hwmon_dev; int vrm; int freq_map; int update_lock; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

 int VAR_3 ;

 int const VAR_4 ;


 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct i2c_client*,struct lm85_data*) ;
 int FUNC_4 (struct lm85_data*) ;
 struct lm85_data* FUNC_5 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_9,
        const struct i2c_device_id *VAR_10)
{
 struct lm85_data *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_5(sizeof(struct lm85_data), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 FUNC_3(VAR_9, VAR_11);
 VAR_11->type = VAR_10->driver_data;
 FUNC_8(&VAR_11->update_lock);


 switch (VAR_11->type) {
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_11->freq_map = VAR_3;
  break;
 default:
  VAR_11->freq_map = VAR_5;
 }


 VAR_11->vrm = FUNC_11();


 FUNC_6(VAR_9);


 VAR_12 = FUNC_9(&VAR_9->dev.kobj, &VAR_6);
 if (VAR_12)
  goto err_kfree;



 VAR_11->vid = FUNC_7(VAR_9, VAR_2);
 if (!((VAR_11->type == 130 || VAR_11->type == VAR_4) &&
     (VAR_11->vid & 0x80)))
  if ((VAR_12 = FUNC_9(&VAR_9->dev.kobj,
     &VAR_7)))
   goto err_remove_files;


 if (VAR_11->type == 129)
  if ((VAR_12 = FUNC_9(&VAR_9->dev.kobj,
     &VAR_8)))
   goto err_remove_files;

 VAR_11->hwmon_dev = FUNC_2(&VAR_9->dev);
 if (FUNC_0(VAR_11->hwmon_dev)) {
  VAR_12 = FUNC_1(VAR_11->hwmon_dev);
  goto err_remove_files;
 }

 return 0;


 err_remove_files:
 FUNC_10(&VAR_9->dev.kobj, &VAR_6);
 FUNC_10(&VAR_9->dev.kobj, &VAR_7);
 if (VAR_11->type == 129)
  FUNC_10(&VAR_9->dev.kobj, &VAR_8);
 err_kfree:
 FUNC_4(VAR_11);
 return VAR_12;
}
