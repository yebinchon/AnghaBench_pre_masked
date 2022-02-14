
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83791d_data {int update_lock; int * fan_min; int * fan_div; } ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (unsigned long,int ) ;
 struct w83791d_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (char const*,int *,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;
 int FUNC_8 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_7(VAR_2);
 struct i2c_client *VAR_6 = FUNC_6(VAR_1);
 struct w83791d_data *VAR_7 = FUNC_2(VAR_6);
 unsigned long VAR_8 = FUNC_5(VAR_3, ((void*)0), 10);
 int VAR_9 = VAR_5->index;

 FUNC_3(&VAR_7->update_lock);
 VAR_7->fan_min[VAR_9] = FUNC_1(VAR_8, FUNC_0(VAR_7->fan_div[VAR_9]));
 FUNC_8(VAR_6, VAR_0[VAR_9], VAR_7->fan_min[VAR_9]);
 FUNC_4(&VAR_7->update_lock);

 return VAR_4;
}
