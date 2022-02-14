
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {int config1; int update_lock; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct adm1026_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *,int) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_5(VAR_2);
 struct adm1026_data *VAR_7 = FUNC_1(VAR_6);
 int VAR_8 = FUNC_4(VAR_4, ((void*)0), 10);

 if ((VAR_8 == 1) || (VAR_8==0)) {
  FUNC_2(&VAR_7->update_lock);
  VAR_7->config1 = (VAR_7->config1 & ~VAR_1) | (VAR_8 << 4);
  FUNC_0(VAR_6, VAR_0,
   VAR_7->config1);
  FUNC_3(&VAR_7->update_lock);
 }
 return VAR_5;
}
