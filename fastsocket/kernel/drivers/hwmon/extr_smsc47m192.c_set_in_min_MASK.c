
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc47m192_data {int update_lock; int * in_min; } ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (int) ;
 struct smsc47m192_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 unsigned long FUNC_6 (char const*,int *,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_0, struct device_attribute *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_8(VAR_1);
 int VAR_5 = VAR_4->index;
 struct i2c_client *VAR_6 = FUNC_7(VAR_0);
 struct smsc47m192_data *VAR_7 = FUNC_2(VAR_6);
 unsigned long VAR_8 = FUNC_6(VAR_2, ((void*)0), 10);

 FUNC_4(&VAR_7->update_lock);
 VAR_7->in_min[VAR_5] = FUNC_0(VAR_8, VAR_5);
 FUNC_3(VAR_6, FUNC_1(VAR_5),
       VAR_7->in_min[VAR_5]);
 FUNC_5(&VAR_7->update_lock);
 return VAR_3;
}
