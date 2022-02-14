
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tmp401_data {int kind; int * hwmon_dev; int update_lock; } ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {int dev_attr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char const*) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (struct i2c_client*,struct tmp401_data*) ;
 struct tmp401_data* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_9 (struct i2c_client*) ;
 int FUNC_10 (struct i2c_client*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_5,
   const struct i2c_device_id *VAR_6)
{
 int VAR_7, VAR_8 = 0;
 struct tmp401_data *VAR_9;
 const char *VAR_10[] = { "TMP401", "TMP411" };

 VAR_9 = FUNC_7(sizeof(struct tmp401_data), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_6(VAR_5, VAR_9);
 FUNC_8(&VAR_9->update_lock);
 VAR_9->kind = VAR_6->driver_data;


 FUNC_9(VAR_5);


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  VAR_8 = FUNC_4(&VAR_5->dev,
      &VAR_2[VAR_7].dev_attr);
  if (VAR_8)
   goto exit_remove;
 }


 if (VAR_9->kind == VAR_3) {
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {
   VAR_8 = FUNC_4(&VAR_5->dev,
       &VAR_4[VAR_7].dev_attr);
   if (VAR_8)
    goto exit_remove;
  }
 }

 VAR_9->hwmon_dev = FUNC_5(&VAR_5->dev);
 if (FUNC_1(VAR_9->hwmon_dev)) {
  VAR_8 = FUNC_2(VAR_9->hwmon_dev);
  VAR_9->hwmon_dev = ((void*)0);
  goto exit_remove;
 }

 FUNC_3(&VAR_5->dev, "Detected TI %s chip\n",
   VAR_10[VAR_9->kind - 1]);

 return 0;

exit_remove:
 FUNC_10(VAR_5);
 return VAR_8;
}
