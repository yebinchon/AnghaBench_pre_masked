
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct analog_demod_ops {int (* standby ) (TYPE_2__*) ;} ;
struct TYPE_3__ {struct analog_demod_ops analog_ops; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct tuner {TYPE_2__ fe; int standby; } ;
struct i2c_client {int dummy; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (TYPE_2__*) ;
 struct tuner* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0, pm_message_t VAR_1)
{
 struct tuner *VAR_2 = FUNC_2(FUNC_0(VAR_0));
 struct analog_demod_ops *VAR_3 = &VAR_2->fe.ops.analog_ops;

 FUNC_3("suspend\n");

 if (!VAR_2->standby && VAR_3->standby)
  VAR_3->standby(&VAR_2->fe);

 return 0;
}
