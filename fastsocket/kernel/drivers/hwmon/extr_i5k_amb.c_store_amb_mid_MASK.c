
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct i5k_amb_data {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct i5k_amb_data*,int ,unsigned long) ;
 struct i5k_amb_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
        struct device_attribute *VAR_1,
        const char *VAR_2,
        size_t VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_4(VAR_1);
 struct i5k_amb_data *VAR_5 = FUNC_2(VAR_0);
 unsigned long VAR_6 = FUNC_3(VAR_2, ((void*)0), 10) / 500;

 if (VAR_6 > 255)
  VAR_6 = 255;

 FUNC_1(VAR_5, FUNC_0(VAR_4->index), VAR_6);
 return VAR_3;
}
