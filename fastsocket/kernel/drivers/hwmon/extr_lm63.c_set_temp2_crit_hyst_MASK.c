
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm63_data {int update_lock; int * temp8; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (long) ;
 int VAR_0 ;
 long FUNC_1 (int ) ;
 struct lm63_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 long FUNC_6 (char const*,int *,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_7(VAR_1);
 struct lm63_data *VAR_6 = FUNC_2(VAR_5);
 long VAR_7 = FUNC_6(VAR_3, ((void*)0), 10);
 long VAR_8;

 FUNC_4(&VAR_6->update_lock);
 VAR_8 = FUNC_1(VAR_6->temp8[2]) - VAR_7;
 FUNC_3(VAR_5, VAR_0,
      FUNC_0(VAR_8));
 FUNC_5(&VAR_6->update_lock);
 return VAR_4;
}
