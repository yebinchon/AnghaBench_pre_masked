
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max6650_data {int config; int dac; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int) ;
 struct max6650_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int *,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_6(VAR_2);
 struct max6650_data *VAR_7 = FUNC_1(VAR_6);
 int VAR_8 = FUNC_5(VAR_4, ((void*)0), 10);

 VAR_8 = FUNC_0(VAR_8, 0, 255);

 FUNC_3(&VAR_7->update_lock);

 if (VAR_7->config & VAR_0)
  VAR_7->dac = 180 - (180 * VAR_8)/255;
 else
  VAR_7->dac = 76 - (76 * VAR_8)/255;

 FUNC_2(VAR_6, VAR_1, VAR_7->dac);

 FUNC_4(&VAR_7->update_lock);

 return VAR_5;
}
