
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83792d_data {int ** lm75; int hwmon_dev; void** fan_min; int update_lock; scalar_t__ valid; } ;
struct i2c_device_id {int dummy; } ;
struct device {int kobj; } ;
struct i2c_client {struct device dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct i2c_client*,struct w83792d_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct w83792d_data*) ;
 struct w83792d_data* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct i2c_client*) ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_12 (struct i2c_client*) ;
 void* FUNC_13 (struct i2c_client*,int ) ;

__attribute__((used)) static int
FUNC_14(struct i2c_client *VAR_7, const struct i2c_device_id *VAR_8)
{
 struct w83792d_data *VAR_9;
 struct device *VAR_10 = &VAR_7->dev;
 int VAR_11, VAR_12, VAR_13;

 VAR_9 = FUNC_7(sizeof(struct w83792d_data), VAR_1);
 if (!VAR_9) {
  VAR_13 = -VAR_0;
  goto ERROR0;
 }

 FUNC_4(VAR_7, VAR_9);
 VAR_9->valid = 0;
 FUNC_8(&VAR_9->update_lock);

 VAR_13 = FUNC_11(VAR_7);
 if (VAR_13)
  goto ERROR1;


 FUNC_12(VAR_7);


 for (VAR_11 = 0; VAR_11 < 7; VAR_11++) {
  VAR_9->fan_min[VAR_11] = FUNC_13(VAR_7,
     VAR_2[VAR_11]);
 }


 if ((VAR_13 = FUNC_9(&VAR_10->kobj, &VAR_5)))
  goto ERROR3;



 VAR_12 = FUNC_13(VAR_7, VAR_3);

 if (!(VAR_12 & 0x40))
  if ((VAR_13 = FUNC_9(&VAR_10->kobj,
           &VAR_6[0])))
   goto exit_remove_files;

 if (!(VAR_12 & 0x20))
  if ((VAR_13 = FUNC_9(&VAR_10->kobj,
           &VAR_6[1])))
   goto exit_remove_files;

 VAR_12 = FUNC_13(VAR_7, VAR_4);
 if (VAR_12 & 0x40)
  if ((VAR_13 = FUNC_9(&VAR_10->kobj,
           &VAR_6[2])))
   goto exit_remove_files;

 if (VAR_12 & 0x04)
  if ((VAR_13 = FUNC_9(&VAR_10->kobj,
           &VAR_6[3])))
   goto exit_remove_files;

 VAR_9->hwmon_dev = FUNC_3(VAR_10);
 if (FUNC_1(VAR_9->hwmon_dev)) {
  VAR_13 = FUNC_2(VAR_9->hwmon_dev);
  goto exit_remove_files;
 }

 return 0;

exit_remove_files:
 FUNC_10(&VAR_10->kobj, &VAR_5);
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_6); VAR_11++)
  FUNC_10(&VAR_10->kobj, &VAR_6[VAR_11]);
ERROR3:
 if (VAR_9->lm75[0] != ((void*)0))
  FUNC_5(VAR_9->lm75[0]);
 if (VAR_9->lm75[1] != ((void*)0))
  FUNC_5(VAR_9->lm75[1]);
ERROR1:
 FUNC_6(VAR_9);
ERROR0:
 return VAR_13;
}
