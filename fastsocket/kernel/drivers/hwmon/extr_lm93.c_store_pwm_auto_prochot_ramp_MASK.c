
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct lm93_data {int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct lm93_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int *,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_7(VAR_1);
 struct lm93_data *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7 = FUNC_6(VAR_3, ((void*)0), 10);
 u8 VAR_8;

 FUNC_4(&VAR_6->update_lock);
 VAR_8 = FUNC_2(VAR_5, VAR_0);
 VAR_8 = (VAR_8 & 0x0f) | (FUNC_0(VAR_7) << 4 & 0xf0);
 FUNC_3(VAR_5, VAR_0, VAR_8);
 FUNC_5(&VAR_6->update_lock);
 return VAR_4;
}
