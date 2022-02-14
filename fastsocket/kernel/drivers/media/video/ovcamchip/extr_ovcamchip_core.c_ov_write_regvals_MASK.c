
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovcamchip_regvals {int reg; int val; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int,int ) ;

int FUNC_1(struct i2c_client *VAR_0, struct ovcamchip_regvals *VAR_1)
{
 int VAR_2;

 while (VAR_1->reg != 0xff) {
  VAR_2 = FUNC_0(VAR_0, VAR_1->reg, VAR_1->val);
  if (VAR_2 < 0)
   return VAR_2;
  VAR_1++;
 }

 return 0;
}
