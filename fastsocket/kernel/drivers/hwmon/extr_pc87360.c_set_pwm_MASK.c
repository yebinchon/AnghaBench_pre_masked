
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct pc87360_data {int update_lock; int * pwm; int fan_conf; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (long,int ) ;
 struct pc87360_data* FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pc87360_data*,int ,int ,int ,int ) ;
 long FUNC_7 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2, struct device_attribute *VAR_3, const char *VAR_4,
 size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_8(VAR_3);
 struct pc87360_data *VAR_7 = FUNC_3(VAR_2);
 long VAR_8 = FUNC_7(VAR_4, ((void*)0), 10);

 FUNC_4(&VAR_7->update_lock);
 VAR_7->pwm[VAR_6->index] = FUNC_2(VAR_8,
         FUNC_0(VAR_7->fan_conf, VAR_6->index));
 FUNC_6(VAR_7, VAR_0, VAR_1, FUNC_1(VAR_6->index),
       VAR_7->pwm[VAR_6->index]);
 FUNC_5(&VAR_7->update_lock);
 return VAR_5;
}
