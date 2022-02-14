
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct w83l786ng_data {int update_lock; int * pwm; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int ,int ,int) ;
 int * VAR_0 ;
 struct w83l786ng_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *,int) ;
 struct i2c_client* FUNC_5 (struct device*) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;
 int FUNC_7 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_6(VAR_2)->index;
 struct i2c_client *VAR_6 = FUNC_5(VAR_1);
 struct w83l786ng_data *VAR_7 = FUNC_1(VAR_6);
 u32 VAR_8 = FUNC_0(FUNC_4(VAR_3, ((void*)0), 10), 0, 255);

 FUNC_2(&VAR_7->update_lock);
 VAR_7->pwm[VAR_5] = VAR_8;
 FUNC_7(VAR_6, VAR_0[VAR_5], VAR_8);
 FUNC_3(&VAR_7->update_lock);
 return VAR_4;
}
