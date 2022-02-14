
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct gl520_data {int update_lock; int beep_mask; int alarm_mask; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int ) ;
 struct gl520_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *,int) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_5(VAR_1);
 struct gl520_data *VAR_6 = FUNC_1(VAR_5);
 u8 VAR_7 = FUNC_4(VAR_3, ((void*)0), 10);

 FUNC_2(&VAR_6->update_lock);
 VAR_7 &= VAR_6->alarm_mask;
 VAR_6->beep_mask = VAR_7;
 FUNC_0(VAR_5, VAR_0, VAR_7);
 FUNC_3(&VAR_6->update_lock);
 return VAR_4;
}
