
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int lock; int * pwmctl; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct i2c_client*,size_t) ;
 int FUNC_1 (struct i2c_client*,size_t,int ,long) ;
 struct adt7475_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,int,long*) ;
 struct i2c_client* FUNC_6 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute_2 *VAR_5 = FUNC_7(VAR_2);
 struct i2c_client *VAR_6 = FUNC_6(VAR_1);
 struct adt7475_data *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;
 long VAR_9;

 if (FUNC_5(VAR_3, 10, &VAR_9))
  return -VAR_0;

 FUNC_3(&VAR_7->lock);

 FUNC_0(VAR_6, VAR_5->index);
 VAR_8 = FUNC_1(VAR_6, VAR_5->index, VAR_7->pwmctl[VAR_5->index], VAR_9);
 if (VAR_8)
  VAR_4 = VAR_8;
 FUNC_4(&VAR_7->lock);

 return VAR_4;
}
