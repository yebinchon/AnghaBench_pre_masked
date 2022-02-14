
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct w83627ehf_data {int* pwm_mode; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int* VAR_1 ;
 int * VAR_2 ;
 struct w83627ehf_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;
 int FUNC_5 (struct w83627ehf_data*,int ) ;
 int FUNC_6 (struct w83627ehf_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_3, struct device_attribute *VAR_4,
   const char *VAR_5, size_t VAR_6)
{
 struct w83627ehf_data *VAR_7 = FUNC_0(VAR_3);
 struct sensor_device_attribute *VAR_8 = FUNC_4(VAR_4);
 int VAR_9 = VAR_8->index;
 u32 VAR_10 = FUNC_3(VAR_5, ((void*)0), 10);
 u16 VAR_11;

 if (VAR_10 > 1)
  return -VAR_0;
 FUNC_1(&VAR_7->update_lock);
 VAR_11 = FUNC_5(VAR_7, VAR_2[VAR_9]);
 VAR_7->pwm_mode[VAR_9] = VAR_10;
 VAR_11 &= ~(1 << VAR_1[VAR_9]);
 if (!VAR_10)
  VAR_11 |= 1 << VAR_1[VAR_9];
 FUNC_6(VAR_7, VAR_2[VAR_9], VAR_11);
 FUNC_2(&VAR_7->update_lock);
 return VAR_6;
}
