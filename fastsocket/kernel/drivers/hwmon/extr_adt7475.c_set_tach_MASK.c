
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int lock; int ** tach; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 struct adt7475_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (char const*,int,unsigned long*) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{

 struct sensor_device_attribute_2 *VAR_6 = FUNC_8(VAR_3);
 struct i2c_client *VAR_7 = FUNC_7(VAR_2);
 struct adt7475_data *VAR_8 = FUNC_2(VAR_7);
 unsigned long VAR_9;

 if (FUNC_6(VAR_4, 10, &VAR_9))
  return -VAR_0;

 FUNC_3(&VAR_8->lock);

 VAR_8->tach[VAR_1][VAR_6->index] = FUNC_5(VAR_9);

 FUNC_1(VAR_7, FUNC_0(VAR_6->index),
      VAR_8->tach[VAR_1][VAR_6->index]);

 FUNC_4(&VAR_8->lock);
 return VAR_5;
}
