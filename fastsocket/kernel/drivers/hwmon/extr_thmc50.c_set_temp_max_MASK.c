
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thmc50_data {int update_lock; int * temp_max; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int,int,int) ;
 int * VAR_0 ;
 struct thmc50_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int *,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;
 TYPE_1__* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 int VAR_5 = FUNC_7(VAR_2)->index;
 struct i2c_client *VAR_6 = FUNC_6(VAR_1);
 struct thmc50_data *VAR_7 = FUNC_1(VAR_6);
 int VAR_8 = FUNC_5(VAR_3, ((void*)0), 10);

 FUNC_3(&VAR_7->update_lock);
 VAR_7->temp_max[VAR_5] = FUNC_0(VAR_8 / 1000, -128, 127);
 FUNC_2(VAR_6, VAR_0[VAR_5],
      VAR_7->temp_max[VAR_5]);
 FUNC_4(&VAR_7->update_lock);
 return VAR_4;
}
