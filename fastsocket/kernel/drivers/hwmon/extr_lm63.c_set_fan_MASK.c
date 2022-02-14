
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm63_data {int* fan; int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 struct lm63_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (char const*,int *,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2, struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_6(VAR_2);
 struct lm63_data *VAR_7 = FUNC_1(VAR_6);
 unsigned long VAR_8 = FUNC_5(VAR_4, ((void*)0), 10);

 FUNC_3(&VAR_7->update_lock);
 VAR_7->fan[1] = FUNC_0(VAR_8);
 FUNC_2(VAR_6, VAR_0,
      VAR_7->fan[1] & 0xFF);
 FUNC_2(VAR_6, VAR_1,
      VAR_7->fan[1] >> 8);
 FUNC_4(&VAR_7->update_lock);
 return VAR_5;
}
