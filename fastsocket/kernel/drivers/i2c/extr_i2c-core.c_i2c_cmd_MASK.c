
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_cmd_arg {int arg; int cmd; } ;
struct i2c_client {TYPE_1__* driver; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* command ) (struct i2c_client*,int ,int ) ;} ;


 struct i2c_client* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_0(VAR_0);
 struct i2c_cmd_arg *VAR_3 = VAR_1;

 if (VAR_2 && VAR_2->driver && VAR_2->driver->command)
  VAR_2->driver->command(VAR_2, VAR_3->cmd, VAR_3->arg);
 return 0;
}
