
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w83793_data {int* fan_min; int update_lock; } ;
struct sensor_device_attribute_2 {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct w83793_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int *,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;
 int FUNC_8 (struct i2c_client*,scalar_t__,int) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_0, struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 =
     FUNC_7(VAR_1);
 int VAR_5 = VAR_4->index;
 struct i2c_client *VAR_6 = FUNC_6(VAR_0);
 struct w83793_data *VAR_7 = FUNC_2(VAR_6);
 u16 VAR_8 = FUNC_0(FUNC_5(VAR_2, ((void*)0), 10));

 FUNC_3(&VAR_7->update_lock);
 VAR_7->fan_min[VAR_5] = VAR_8;
 FUNC_8(VAR_6, FUNC_1(VAR_5),
      (VAR_8 >> 8) & 0xff);
 FUNC_8(VAR_6, FUNC_1(VAR_5) + 1, VAR_8 & 0xff);
 FUNC_4(&VAR_7->update_lock);

 return VAR_3;
}
