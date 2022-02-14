
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_6690_sensor {int sens; int * i2c; } ;
struct i2c_client {int dummy; } ;


 struct wf_6690_sensor* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct wf_6690_sensor *VAR_1 = FUNC_0(VAR_0);

 VAR_1->i2c = ((void*)0);
 FUNC_1(&VAR_1->sens);

 return 0;
}
