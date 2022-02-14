
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct it87_data {int sensor; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct it87_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
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

 struct it87_data *VAR_8 = FUNC_0(VAR_2);
 int VAR_9 = FUNC_5(VAR_4, ((void*)0), 10);

 FUNC_3(&VAR_8->update_lock);

 VAR_8->sensor &= ~(1 << VAR_7);
 VAR_8->sensor &= ~(8 << VAR_7);
 if (VAR_9 == 2) {
  FUNC_1(VAR_2, "Sensor type 2 is deprecated, please use 4 "
    "instead\n");
  VAR_9 = 4;
 }

 if (VAR_9 == 3)
     VAR_8->sensor |= 1 << VAR_7;
 else if (VAR_9 == 4)
     VAR_8->sensor |= 8 << VAR_7;
 else if (VAR_9 != 0) {
  FUNC_4(&VAR_8->update_lock);
  return -VAR_0;
 }
 FUNC_2(VAR_8, VAR_1, VAR_8->sensor);
 FUNC_4(&VAR_8->update_lock);
 return VAR_5;
}
