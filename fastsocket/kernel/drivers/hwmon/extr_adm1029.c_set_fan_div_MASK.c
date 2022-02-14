
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1029_data {int update_lock; } ;
typedef size_t ssize_t ;


 int * VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,char*,long) ;
 struct adm1029_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 long FUNC_6 (char const*,int *,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2,
     struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_7(VAR_2);
 struct adm1029_data *VAR_7 = FUNC_1(VAR_6);
 struct sensor_device_attribute *VAR_8 = FUNC_8(VAR_3);
 long VAR_9 = FUNC_6(VAR_4, ((void*)0), 10);
 u8 VAR_10;

 FUNC_4(&VAR_7->update_lock);


 VAR_10 = FUNC_2(VAR_6,
           VAR_0[VAR_8->index]);

 switch (VAR_9) {
 case 1:
  VAR_9 = 1;
  break;
 case 2:
  VAR_9 = 2;
  break;
 case 4:
  VAR_9 = 3;
  break;
 default:
  FUNC_5(&VAR_7->update_lock);
  FUNC_0(&VAR_6->dev, "fan_div value %ld not "
   "supported. Choose one of 1, 2 or 4!\n", VAR_9);
  return -VAR_1;
 }

 VAR_10 = (VAR_10 & 0x3F) | (VAR_9 << 6);


 FUNC_3(VAR_6,
      VAR_0[VAR_8->index], VAR_10);
 FUNC_5(&VAR_7->update_lock);

 return VAR_5;
}
