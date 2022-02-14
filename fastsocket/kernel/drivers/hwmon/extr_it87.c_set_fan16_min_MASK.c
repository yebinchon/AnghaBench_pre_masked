
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct it87_data {int* fan_min; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 struct it87_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct it87_data*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_6(VAR_3);
 int VAR_7 = VAR_6->index;
 struct it87_data *VAR_8 = FUNC_1(VAR_2);
 int VAR_9 = FUNC_5(VAR_4, ((void*)0), 10);

 FUNC_3(&VAR_8->update_lock);
 VAR_8->fan_min[VAR_7] = FUNC_0(VAR_9);
 FUNC_2(VAR_8, VAR_1[VAR_7],
    VAR_8->fan_min[VAR_7] & 0xff);
 FUNC_2(VAR_8, VAR_0[VAR_7],
    VAR_8->fan_min[VAR_7] >> 8);
 FUNC_4(&VAR_8->update_lock);
 return VAR_5;
}
