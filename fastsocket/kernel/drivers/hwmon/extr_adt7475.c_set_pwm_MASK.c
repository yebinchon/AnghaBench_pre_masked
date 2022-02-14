
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int** pwm; int lock; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;



 int FUNC_0 (size_t) ;
 unsigned char FUNC_1 (size_t) ;
 unsigned char FUNC_2 (size_t) ;
 unsigned char FUNC_3 (size_t) ;
 int FUNC_4 (long,int ,int) ;
 int FUNC_5 (int ) ;
 struct adt7475_data* FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (struct i2c_client*,unsigned char,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char const*,int,long*) ;
 struct i2c_client* FUNC_11 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_12 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_13(struct device *VAR_2, struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{

 struct sensor_device_attribute_2 *VAR_6 = FUNC_12(VAR_3);
 struct i2c_client *VAR_7 = FUNC_11(VAR_2);
 struct adt7475_data *VAR_8 = FUNC_6(VAR_7);
 unsigned char VAR_9 = 0;
 long VAR_10;

 if (FUNC_10(VAR_4, 10, &VAR_10))
  return -VAR_1;

 FUNC_8(&VAR_8->lock);

 switch (VAR_6->nr) {
 case 130:

  VAR_8->pwm[VAR_0][VAR_6->index] =
   FUNC_5(FUNC_0(VAR_6->index));



  if (((VAR_8->pwm[VAR_0][VAR_6->index] >> 5) & 7) != 7) {
   FUNC_9(&VAR_8->lock);
   return VAR_5;
  }

  VAR_9 = FUNC_3(VAR_6->index);
  break;

 case 128:
  VAR_9 = FUNC_2(VAR_6->index);
  break;

 case 129:
  VAR_9 = FUNC_1(VAR_6->index);
  break;
 }

 VAR_8->pwm[VAR_6->nr][VAR_6->index] = FUNC_4(VAR_10, 0, 0xFF);
 FUNC_7(VAR_7, VAR_9,
      VAR_8->pwm[VAR_6->nr][VAR_6->index]);

 FUNC_9(&VAR_8->lock);

 return VAR_5;
}
