
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2o_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2o_device*) ;
 int FUNC_2 (char*,int ) ;
 struct i2o_device* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct i2o_device *VAR_1 = FUNC_3(VAR_0);

 FUNC_2("i2o: device %s released\n", FUNC_0(VAR_0));

 FUNC_1(VAR_1);
}
