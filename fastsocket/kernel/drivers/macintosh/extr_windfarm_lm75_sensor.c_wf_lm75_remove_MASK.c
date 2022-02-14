
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct wf_lm75_sensor {TYPE_1__ sens; int * i2c; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 struct wf_lm75_sensor* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct wf_lm75_sensor *VAR_1 = FUNC_1(VAR_0);

 FUNC_0("wf_lm75: i2c detatch called for %s\n", VAR_1->sens.name);


 VAR_1->i2c = ((void*)0);


 FUNC_3(&VAR_1->sens);

 FUNC_2(VAR_0, ((void*)0));
 return 0;
}
