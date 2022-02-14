
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct i2c_client*,char*) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1, "\n");

 FUNC_1(VAR_1, 0x3d, 0x0);

 return 0;
}
