
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct f71805f_data {unsigned long* pwm; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 struct f71805f_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct f71805f_data*,int ,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1, struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct f71805f_data *VAR_5 = FUNC_1(VAR_1);
 struct sensor_device_attribute *VAR_6 = FUNC_6(VAR_2);
 int VAR_7 = VAR_6->index;
 unsigned long VAR_8 = FUNC_5(VAR_3, ((void*)0), 10);

 if (VAR_8 > 255)
  return -VAR_0;

 FUNC_3(&VAR_5->update_lock);
 VAR_5->pwm[VAR_7] = VAR_8;
 FUNC_2(VAR_5, FUNC_0(VAR_7), VAR_5->pwm[VAR_7]);
 FUNC_4(&VAR_5->update_lock);

 return VAR_4;
}
