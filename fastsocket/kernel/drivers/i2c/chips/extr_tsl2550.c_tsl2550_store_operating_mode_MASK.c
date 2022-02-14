
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2550_data {scalar_t__ power_state; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct tsl2550_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (char const*,int *,int) ;
 struct i2c_client* FUNC_4 (struct device*) ;
 int FUNC_5 (struct i2c_client*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_4(VAR_2);
 struct tsl2550_data *VAR_7 = FUNC_0(VAR_6);
 unsigned long VAR_8 = FUNC_3(VAR_4, ((void*)0), 10);
 int VAR_9;

 if (VAR_8 < 0 || VAR_8 > 1)
  return -VAR_1;

 if (VAR_7->power_state == 0)
  return -VAR_0;

 FUNC_1(&VAR_7->update_lock);
 VAR_9 = FUNC_5(VAR_6, VAR_8);
 FUNC_2(&VAR_7->update_lock);

 if (VAR_9 < 0)
  return VAR_9;

 return VAR_5;
}
