
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct w83l786ng_data {int* pwm_mode; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 struct w83l786ng_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int *,int) ;
 struct i2c_client* FUNC_4 (struct device*) ;
 TYPE_1__* FUNC_5 (struct device_attribute*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_3, struct device_attribute *VAR_4,
        const char *VAR_5, size_t VAR_6)
{
 int VAR_7 = FUNC_5(VAR_4)->index;
 struct i2c_client *VAR_8 = FUNC_4(VAR_3);
 struct w83l786ng_data *VAR_9 = FUNC_0(VAR_8);
 u32 VAR_10 = FUNC_3(VAR_5, ((void*)0), 10);
 u8 VAR_11;

 if (VAR_10 > 1)
  return -VAR_0;
 FUNC_1(&VAR_9->update_lock);
 VAR_9->pwm_mode[VAR_7] = VAR_10;
 VAR_11 = FUNC_6(VAR_8, VAR_2);
 VAR_11 &= ~(1 << VAR_1[VAR_7]);
 if (!VAR_10)
  VAR_11 |= 1 << VAR_1[VAR_7];
 FUNC_7(VAR_8, VAR_2, VAR_11);
 FUNC_2(&VAR_9->update_lock);
 return VAR_6;
}
