
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1031_data {int* fan_min; int update_lock; int * fan_div; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 struct adm1031_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,int *,int) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_0, struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_8(VAR_0);
 struct adm1031_data *VAR_5 = FUNC_4(VAR_4);
 int VAR_6 = FUNC_9(VAR_1)->index;
 int VAR_7 = FUNC_7(VAR_2, ((void*)0), 10);

 FUNC_5(&VAR_5->update_lock);
 if (VAR_7) {
  VAR_5->fan_min[VAR_6] =
   FUNC_2(VAR_7, FUNC_1(VAR_5->fan_div[VAR_6]));
 } else {
  VAR_5->fan_min[VAR_6] = 0xff;
 }
 FUNC_3(VAR_4, FUNC_0(VAR_6), VAR_5->fan_min[VAR_6]);
 FUNC_6(&VAR_5->update_lock);
 return VAR_3;
}
