
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int config5; int** temp; int* range; int lock; } ;
typedef size_t ssize_t ;


 int FUNC_0 (scalar_t__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 long FUNC_1 (long,scalar_t__,scalar_t__) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 scalar_t__* VAR_3 ;
 long FUNC_5 (long,scalar_t__*,int) ;
 struct adt7475_data* FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (struct i2c_client*,int ,long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct adt7475_data*,int) ;
 scalar_t__ FUNC_11 (char const*,int,long*) ;
 struct i2c_client* FUNC_12 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_13 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_14(struct device *VAR_4, struct device_attribute *VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_12(VAR_4);
 struct adt7475_data *VAR_9 = FUNC_6(VAR_8);
 struct sensor_device_attribute_2 *VAR_10 = FUNC_13(VAR_5);
 int VAR_11;
 long VAR_12;

 if (FUNC_11(VAR_6, 10, &VAR_12))
  return -VAR_1;

 FUNC_8(&VAR_9->lock);


 VAR_9->config5 = FUNC_4(VAR_2);
 VAR_9->temp[VAR_0][VAR_10->index] =
  FUNC_4(FUNC_2(VAR_10->index)) << 2;
 VAR_9->range[VAR_10->index] =
  FUNC_4(FUNC_3(VAR_10->index));



 VAR_11 = FUNC_10(VAR_9, VAR_9->temp[VAR_0][VAR_10->index]);
 VAR_12 = FUNC_1(VAR_12, VAR_11 + VAR_3[0],
  VAR_11 + VAR_3[FUNC_0(VAR_3) - 1]);
 VAR_12 -= VAR_11;


 VAR_12 = FUNC_5(VAR_12, VAR_3, FUNC_0(VAR_3));

 VAR_9->range[VAR_10->index] &= ~0xF0;
 VAR_9->range[VAR_10->index] |= VAR_12 << 4;

 FUNC_7(VAR_8, FUNC_3(VAR_10->index),
      VAR_9->range[VAR_10->index]);

 FUNC_9(&VAR_9->lock);
 return VAR_7;
}
