
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcm825x_sensor {int v4l2_int_device; } ;
struct i2c_client {int adapter; } ;


 int VAR_0 ;
 struct tcm825x_sensor* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 struct tcm825x_sensor *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_1->adapter)
  return -VAR_0;

 FUNC_2(VAR_2->v4l2_int_device);
 FUNC_1(VAR_1, ((void*)0));

 return 0;
}
