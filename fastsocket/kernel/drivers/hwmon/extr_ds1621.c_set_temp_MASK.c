
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct ds1621_data {int update_lock; int * temp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int * VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 struct ds1621_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int *,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_7(VAR_2);
 struct i2c_client *VAR_6 = FUNC_6(VAR_1);
 struct ds1621_data *VAR_7 = FUNC_2(VAR_6);
 u16 VAR_8 = FUNC_0(FUNC_5(VAR_3, ((void*)0), 10));

 FUNC_3(&VAR_7->update_lock);
 VAR_7->temp[VAR_5->index] = VAR_8;
 FUNC_1(VAR_6, VAR_0[VAR_5->index],
     VAR_7->temp[VAR_5->index]);
 FUNC_4(&VAR_7->update_lock);
 return VAR_4;
}
