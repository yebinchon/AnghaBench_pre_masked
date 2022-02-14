
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct gl520_data {int beep_mask; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 struct gl520_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (char const*,int *,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_6(VAR_2);
 struct gl520_data *VAR_7 = FUNC_2(VAR_6);
 int VAR_8 = FUNC_7(VAR_3)->index;
 unsigned long VAR_9;

 VAR_9 = FUNC_5(VAR_4, ((void*)0), 10);
 if (VAR_9 & ~1)
  return -VAR_0;

 FUNC_3(&VAR_7->update_lock);
 VAR_7->beep_mask = FUNC_0(VAR_6, VAR_1);
 if (VAR_9)
  VAR_7->beep_mask |= (1 << VAR_8);
 else
  VAR_7->beep_mask &= ~(1 << VAR_8);
 FUNC_1(VAR_6, VAR_1, VAR_7->beep_mask);
 FUNC_4(&VAR_7->update_lock);
 return VAR_5;
}
