
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuner {int type; int standby; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,struct tuner*,int ,int ) ;
 struct tuner* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct tuner *VAR_1 = FUNC_2(FUNC_0(VAR_0));

 FUNC_3("resume\n");

 if (!VAR_1->standby)
  FUNC_1(VAR_0, VAR_1, VAR_1->type, 0);

 return 0;
}
