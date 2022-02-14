
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1021_data {int low_power; int update_lock; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct adm1021_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,int *,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
        struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_6(VAR_2);
 struct adm1021_data *VAR_7 = FUNC_0(VAR_6);
 int VAR_8 = FUNC_5(VAR_4, ((void*)0), 10) != 0;

 FUNC_3(&VAR_7->update_lock);
 if (VAR_8 != VAR_7->low_power) {
  int VAR_9 = FUNC_1(
   VAR_6, VAR_0);
  VAR_7->low_power = VAR_8;
  FUNC_2(VAR_6, VAR_1,
   (VAR_9 & 0xBF) | (VAR_8 << 6));
 }
 FUNC_4(&VAR_7->update_lock);

 return VAR_5;
}
