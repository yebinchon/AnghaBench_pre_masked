
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * analog_demod_priv; } ;
struct tuner {int list; TYPE_1__ fe; int sd; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct tuner*) ;
 int FUNC_2 (int *) ;
 struct tuner* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct tuner *VAR_1 = FUNC_3(FUNC_0(VAR_0));

 FUNC_5(&VAR_1->sd);
 FUNC_4(&VAR_1->fe);
 VAR_1->fe.analog_demod_priv = ((void*)0);

 FUNC_2(&VAR_1->list);
 FUNC_1(VAR_1);
 return 0;
}
