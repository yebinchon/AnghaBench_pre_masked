
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dummy; } ;
struct f75375_data {int* pwm_mode; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct f75375_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int *,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = FUNC_8(VAR_3)->index;
 struct i2c_client *VAR_7 = FUNC_7(VAR_2);
 struct f75375_data *VAR_8 = FUNC_3(VAR_7);
 int VAR_9 = FUNC_6(VAR_4, ((void*)0), 10);
 u8 VAR_10 = 0;

 if (!(VAR_9 == 0 || VAR_9 == 1))
  return -VAR_0;

 FUNC_4(&VAR_8->update_lock);
 VAR_10 = FUNC_1(VAR_7, VAR_1);
 VAR_10 = ~(1 << FUNC_0(VAR_6));

 if (VAR_9 == 0)
  VAR_10 |= (1 << FUNC_0(VAR_6)) ;

 FUNC_2(VAR_7, VAR_1, VAR_10);
 VAR_8->pwm_mode[VAR_6] = VAR_9;
 FUNC_5(&VAR_8->update_lock);
 return VAR_5;
}
