
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct lm78_data {int update_lock; int * fan_min; int * fan_div; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int) ;
 struct lm78_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct lm78_data*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 unsigned long FUNC_7 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_0, struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_8(VAR_1);
 struct lm78_data *VAR_5 = FUNC_3(VAR_0);
 int VAR_6 = VAR_4->index;
 unsigned long VAR_7 = FUNC_7(VAR_2, ((void*)0), 10);

 FUNC_5(&VAR_5->update_lock);
 VAR_5->fan_min[VAR_6] = FUNC_1(VAR_7, FUNC_0(VAR_5->fan_div[VAR_6]));
 FUNC_4(VAR_5, FUNC_2(VAR_6), VAR_5->fan_min[VAR_6]);
 FUNC_6(&VAR_5->update_lock);
 return VAR_3;
}
