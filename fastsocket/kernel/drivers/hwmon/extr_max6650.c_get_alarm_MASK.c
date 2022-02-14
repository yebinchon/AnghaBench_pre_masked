
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct max6650_data {int alarm; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 struct max6650_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_6(VAR_2);
 struct max6650_data *VAR_5 = FUNC_1(VAR_1);
 struct i2c_client *VAR_6 = FUNC_5(VAR_1);
 int VAR_7 = 0;

 if (VAR_5->alarm & VAR_4->index) {
  FUNC_2(&VAR_5->update_lock);
  VAR_7 = 1;
  VAR_5->alarm &= ~VAR_4->index;
  VAR_5->alarm |= FUNC_0(VAR_6,
       VAR_0);
  FUNC_3(&VAR_5->update_lock);
 }

 return FUNC_4(VAR_3, "%d\n", VAR_7);
}
