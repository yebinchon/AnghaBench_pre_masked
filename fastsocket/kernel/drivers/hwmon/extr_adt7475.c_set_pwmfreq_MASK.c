
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int* range; int lock; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (long,int ,int ) ;
 struct adt7475_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (char const*,int,long*) ;
 struct i2c_client* FUNC_9 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_10 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_2, struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute_2 *VAR_6 = FUNC_10(VAR_3);
 struct i2c_client *VAR_7 = FUNC_9(VAR_2);
 struct adt7475_data *VAR_8 = FUNC_4(VAR_7);
 int VAR_9;
 long VAR_10;

 if (FUNC_8(VAR_4, 10, &VAR_10))
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_10, VAR_1, FUNC_0(VAR_1));

 FUNC_6(&VAR_8->lock);

 VAR_8->range[VAR_6->index] =
  FUNC_2(FUNC_1(VAR_6->index));
 VAR_8->range[VAR_6->index] &= ~7;
 VAR_8->range[VAR_6->index] |= VAR_9;

 FUNC_5(VAR_7, FUNC_1(VAR_6->index),
      VAR_8->range[VAR_6->index]);

 FUNC_7(&VAR_8->lock);
 return VAR_5;
}
