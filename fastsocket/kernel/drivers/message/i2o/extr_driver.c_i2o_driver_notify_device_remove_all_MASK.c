
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2o_driver {int dummy; } ;
struct i2o_device {int dummy; } ;


 int FUNC_0 (struct i2o_driver*,struct i2o_device*) ;
 struct i2o_driver** VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct i2o_device *VAR_2)
{
 int VAR_3;
 struct i2o_driver *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = VAR_0[VAR_3];

  if (VAR_4)
   FUNC_0(VAR_4, VAR_2);
 }
}
