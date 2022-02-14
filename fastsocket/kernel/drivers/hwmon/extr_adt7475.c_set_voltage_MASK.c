
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t nr; size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int** voltage; int lock; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned char FUNC_0 (int) ;
 unsigned char FUNC_1 (int) ;
 struct adt7475_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,unsigned char,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,int,long*) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_8 (struct device_attribute*) ;
 int FUNC_9 (long) ;
 int FUNC_10 (long) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_2, struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{

 struct sensor_device_attribute_2 *VAR_6 = FUNC_8(VAR_3);
 struct i2c_client *VAR_7 = FUNC_7(VAR_2);
 struct adt7475_data *VAR_8 = FUNC_2(VAR_7);
 unsigned char VAR_9;
 long VAR_10;

 if (FUNC_6(VAR_4, 10, &VAR_10))
  return -VAR_0;

 FUNC_4(&VAR_8->lock);

 VAR_8->voltage[VAR_6->nr][VAR_6->index] =
  VAR_6->index ? FUNC_9(VAR_10) : FUNC_10(VAR_10);

 if (VAR_6->nr == VAR_1)
  VAR_9 = FUNC_1(VAR_6->index);
 else
  VAR_9 = FUNC_0(VAR_6->index);

 FUNC_3(VAR_7, VAR_9,
      VAR_8->voltage[VAR_6->nr][VAR_6->index] >> 2);
 FUNC_5(&VAR_8->lock);

 return VAR_5;
}
