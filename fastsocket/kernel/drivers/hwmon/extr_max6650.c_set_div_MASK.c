
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max6650_data {int count; int update_lock; } ;
struct i2c_client {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
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

 FUNC_3(&VAR_7->update_lock);
 switch (VAR_8) {
 case 1:
  VAR_7->count = 0;
  break;
 case 2:
  VAR_7->count = 1;
  break;
 case 4:
  VAR_7->count = 2;
  break;
 case 8:
  VAR_7->count = 3;
  break;
 default:
  FUNC_4(&VAR_7->update_lock);
  FUNC_0(&VAR_6->dev,
   "illegal value for fan divider (%d)\n", VAR_8);
  return -VAR_0;
 }

 FUNC_2(VAR_6, VAR_1, VAR_7->count);
 FUNC_4(&VAR_7->update_lock);

 return VAR_5;
}
