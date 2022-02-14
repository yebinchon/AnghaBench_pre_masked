
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2o_dma {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct i2o_dma*,size_t) ;
 int FUNC_1 (struct device*,struct i2o_dma*) ;

int FUNC_2(struct device *VAR_0, struct i2o_dma *VAR_1, size_t VAR_2)
{
 FUNC_1(VAR_0, VAR_1);

 if (VAR_2)
  return FUNC_0(VAR_0, VAR_1, VAR_2);

 return 0;
}
