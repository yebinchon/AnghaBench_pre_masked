
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max6650_data {int config; int update_lock; } ;
struct i2c_client {int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 struct max6650_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int *,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3, struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_7(VAR_3);
 struct max6650_data *VAR_8 = FUNC_1(VAR_7);
 int VAR_9 = FUNC_6(VAR_5, ((void*)0), 10);
 int VAR_10[3] = {0, 3, 2};

 if ((VAR_9 < 0)||(VAR_9 > 2)) {
  FUNC_0(&VAR_7->dev,
   "illegal value for pwm1_enable (%d)\n", VAR_9);
  return -VAR_0;
 }

 FUNC_4(&VAR_8->update_lock);

 VAR_8->config = FUNC_2(VAR_7, VAR_2);
 VAR_8->config = (VAR_8->config & ~VAR_1)
         | (VAR_10[VAR_9] << 4);

 FUNC_3(VAR_7, VAR_2, VAR_8->config);

 FUNC_5(&VAR_8->update_lock);

 return VAR_6;
}
