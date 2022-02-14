
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct w83792d_data {int chassis_clear; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 struct w83792d_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *,int) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_5(VAR_1);
 struct w83792d_data *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7;
 u8 VAR_8 = 0, VAR_9 = 0;

 VAR_7 = FUNC_4(VAR_3, ((void*)0), 10);
 FUNC_2(&VAR_6->update_lock);
 VAR_6->chassis_clear = FUNC_0(VAR_7, 0 ,1);
 VAR_8 = ((VAR_6->chassis_clear) << 7) & 0x80;
 VAR_9 = FUNC_6(VAR_5,
  VAR_0) & 0x7f;
 FUNC_7(VAR_5, VAR_0, VAR_8 | VAR_9);
 FUNC_3(&VAR_6->update_lock);

 return VAR_4;
}
