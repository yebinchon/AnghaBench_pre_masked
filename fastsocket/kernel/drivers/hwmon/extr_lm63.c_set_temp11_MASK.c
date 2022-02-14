
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct lm63_data {int* temp11; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;






 int FUNC_0 (long) ;
 struct lm63_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int const,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 long FUNC_5 (char const*,int *,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_0, struct device_attribute *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 static const u8 VAR_4[4] = {
  128,
  129,
  130,
  131,
 };

 struct sensor_device_attribute *VAR_5 = FUNC_7(VAR_1);
 struct i2c_client *VAR_6 = FUNC_6(VAR_0);
 struct lm63_data *VAR_7 = FUNC_1(VAR_6);
 long VAR_8 = FUNC_5(VAR_2, ((void*)0), 10);
 int VAR_9 = VAR_5->index;

 FUNC_3(&VAR_7->update_lock);
 VAR_7->temp11[VAR_9] = FUNC_0(VAR_8);
 FUNC_2(VAR_6, VAR_4[(VAR_9 - 1) * 2],
      VAR_7->temp11[VAR_9] >> 8);
 FUNC_2(VAR_6, VAR_4[(VAR_9 - 1) * 2 + 1],
      VAR_7->temp11[VAR_9] & 0xff);
 FUNC_4(&VAR_7->update_lock);
 return VAR_3;
}
