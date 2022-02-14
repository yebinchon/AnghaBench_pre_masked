
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct IR_i2c {int rc; int work; } ;


 int FUNC_0 (int *) ;
 struct IR_i2c* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct IR_i2c*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct IR_i2c *VAR_1 = FUNC_1(VAR_0);


 FUNC_0(&VAR_1->work);


 FUNC_3(VAR_1->rc);


 FUNC_2(VAR_1);
 return 0;
}
