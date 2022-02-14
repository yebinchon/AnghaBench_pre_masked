
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7462_data {long* volt_max; int lock; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct adt7462_data*,size_t) ;
 long FUNC_1 (long,int) ;
 size_t VAR_0 ;
 long FUNC_2 (long,int ,int) ;
 struct adt7462_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ,long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char const*,int,long*) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 struct sensor_device_attribute* FUNC_9 (struct device_attribute*) ;
 int FUNC_10 (struct adt7462_data*,size_t) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3,
       size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_9(VAR_2);
 struct i2c_client *VAR_6 = FUNC_8(VAR_1);
 struct adt7462_data *VAR_7 = FUNC_3(VAR_6);
 int VAR_8 = FUNC_10(VAR_7, VAR_5->index);
 long VAR_9;

 if (FUNC_7(VAR_3, 10, &VAR_9) || !VAR_8)
  return -VAR_0;

 VAR_9 *= 1000;
 VAR_9 = FUNC_1(VAR_9, VAR_8);
 VAR_9 = FUNC_2(VAR_9, 0, 255);

 FUNC_5(&VAR_7->lock);
 VAR_7->volt_max[VAR_5->index] = VAR_9;
 FUNC_4(VAR_6,
      FUNC_0(VAR_7, VAR_5->index),
      VAR_9);
 FUNC_6(&VAR_7->lock);

 return VAR_4;
}
