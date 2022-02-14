
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct i2c_client* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, void *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = *(int *)VAR_2;

 if (VAR_3 && VAR_3->addr == VAR_4)
  return -VAR_0;
 return 0;
}
