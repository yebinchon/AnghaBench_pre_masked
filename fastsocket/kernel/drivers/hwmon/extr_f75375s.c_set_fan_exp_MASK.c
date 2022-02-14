
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct f75375_data {int update_lock; int * fan_exp; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 struct f75375_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char const*,int *,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 TYPE_1__* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_0, struct device_attribute *VAR_1,
  const char *VAR_2, size_t VAR_3)
{
 int VAR_4 = FUNC_8(VAR_1)->index;
 struct i2c_client *VAR_5 = FUNC_7(VAR_0);
 struct f75375_data *VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = FUNC_6(VAR_2, ((void*)0), 10);

 FUNC_3(&VAR_6->update_lock);
 VAR_6->fan_exp[VAR_4] = FUNC_5(VAR_7);
 FUNC_1(VAR_5, FUNC_0(VAR_4), VAR_6->fan_exp[VAR_4]);
 FUNC_4(&VAR_6->update_lock);
 return VAR_3;
}
