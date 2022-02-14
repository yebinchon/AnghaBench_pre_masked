
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm95241_data {int rate; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 struct lm95241_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (char const*,int,int*) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_2(VAR_1);
 struct lm95241_data *VAR_6 = FUNC_0(VAR_5);

 FUNC_1(VAR_3, 10, &VAR_6->rate);
 VAR_6->rate = VAR_6->rate * VAR_0 / 1000;

 return VAR_4;
}
