
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct gl520_data {int beep_enable; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 struct gl520_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,int *,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1, struct device_attribute
          *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_6(VAR_1);
 struct gl520_data *VAR_6 = FUNC_2(VAR_5);
 u8 VAR_7 = FUNC_5(VAR_3, ((void*)0), 10)?0:1;

 FUNC_3(&VAR_6->update_lock);
 VAR_6->beep_enable = !VAR_7;
 FUNC_1(VAR_5, VAR_0,
     (FUNC_0(VAR_5, VAR_0)
      & ~0x04) | (VAR_7 << 2));
 FUNC_4(&VAR_6->update_lock);
 return VAR_4;
}
