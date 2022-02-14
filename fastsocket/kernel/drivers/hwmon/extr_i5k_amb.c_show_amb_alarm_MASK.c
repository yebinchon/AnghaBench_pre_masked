
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct i5k_amb_data {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct i5k_amb_data*,int ) ;
 int FUNC_1 (int ) ;
 struct i5k_amb_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
        struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_4(VAR_1);
 struct i5k_amb_data *VAR_4 = FUNC_2(VAR_0);

 if (!(FUNC_0(VAR_4, FUNC_1(VAR_3->index)) & 0x20) &&
      (FUNC_0(VAR_4, FUNC_1(VAR_3->index)) & 0x8))
  return FUNC_3(VAR_2, "1\n");
 else
  return FUNC_3(VAR_2, "0\n");
}
