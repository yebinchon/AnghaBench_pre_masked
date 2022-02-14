
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct w83791d_data {size_t* temp_tolerance; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t FUNC_0 (unsigned long) ;
 int * VAR_1 ;
 struct w83791d_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (char const*,int,unsigned long*) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;
 size_t FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (struct i2c_client*,int ,size_t) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_6(VAR_3);
 struct i2c_client *VAR_7 = FUNC_5(VAR_2);
 struct w83791d_data *VAR_8 = FUNC_1(VAR_7);
 int VAR_9 = VAR_6->index;
 unsigned long VAR_10;
 u8 VAR_11;
 u8 VAR_12 = 0;
 u8 VAR_13 = 0;
 u8 VAR_14 = 0;

 if (FUNC_4(VAR_4, 10, &VAR_10))
  return -VAR_0;

 switch (VAR_9) {
 case 0:
  VAR_12 = 0;
  VAR_13 = 0;
  VAR_14 = 0xf0;
  break;
 case 1:
  VAR_12 = 0;
  VAR_13 = 4;
  VAR_14 = 0x0f;
  break;
 case 2:
  VAR_12 = 1;
  VAR_13 = 0;
  VAR_14 = 0xf0;
  break;
 }

 FUNC_2(&VAR_8->update_lock);
 VAR_8->temp_tolerance[VAR_9] = FUNC_0(VAR_10);
 VAR_11 = FUNC_7(VAR_7,
   VAR_1[VAR_12]) & VAR_14;
 FUNC_8(VAR_7, VAR_1[VAR_12],
   (VAR_8->temp_tolerance[VAR_9] << VAR_13) | VAR_11);
 FUNC_3(&VAR_8->update_lock);
 return VAR_5;
}
