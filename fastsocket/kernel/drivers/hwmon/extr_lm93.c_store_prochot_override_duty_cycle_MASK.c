
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lm93_data {int prochot_override; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 struct lm93_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int *,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_6(VAR_1);
 struct lm93_data *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7 = FUNC_5(VAR_3, ((void*)0), 10);

 FUNC_3(&VAR_6->update_lock);
 VAR_6->prochot_override = (VAR_6->prochot_override & 0xf0) |
     FUNC_0(VAR_7, 0, 15);
 FUNC_2(VAR_5, VAR_0,
   VAR_6->prochot_override);
 FUNC_4(&VAR_6->update_lock);
 return VAR_4;
}
