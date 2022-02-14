
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 scalar_t__ FUNC_0 (int *) ;

struct i2c_client *FUNC_1(struct i2c_client *VAR_0)
{
 if (VAR_0 && FUNC_0(&VAR_0->dev))
  return VAR_0;
 return ((void*)0);
}
