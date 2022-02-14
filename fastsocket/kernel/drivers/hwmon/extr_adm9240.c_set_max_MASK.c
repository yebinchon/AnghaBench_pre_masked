
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm9240_data {int update_lock; int * temp_max; } ;
typedef size_t ssize_t ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (long) ;
 struct adm9240_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 long FUNC_6 (char const*,int *,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_0, struct device_attribute *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_8(VAR_1);
 struct i2c_client *VAR_5 = FUNC_7(VAR_0);
 struct adm9240_data *VAR_6 = FUNC_2(VAR_5);
 long VAR_7 = FUNC_6(VAR_2, ((void*)0), 10);

 FUNC_4(&VAR_6->update_lock);
 VAR_6->temp_max[VAR_4->index] = FUNC_1(VAR_7);
 FUNC_3(VAR_5, FUNC_0(VAR_4->index),
   VAR_6->temp_max[VAR_4->index]);
 FUNC_5(&VAR_6->update_lock);
 return VAR_3;
}
