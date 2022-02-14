
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adm1026_data {int update_lock; int * in_max; } ;
typedef size_t ssize_t ;


 int * VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 struct adm1026_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int *,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_6(VAR_2);
 struct adm1026_data *VAR_7 = FUNC_2(VAR_6);
 int VAR_8 = FUNC_5(VAR_4, ((void*)0), 10);

 FUNC_3(&VAR_7->update_lock);
 VAR_7->in_max[16] = FUNC_0(16, VAR_8+VAR_1);
 FUNC_1(VAR_6, VAR_0[16], VAR_7->in_max[16]);
 FUNC_4(&VAR_7->update_lock);
 return VAR_5;
}
