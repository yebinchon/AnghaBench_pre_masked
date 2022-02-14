
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regval_list {int reg_num; int value; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_0,
         const struct regval_list *VAR_1)
{
 while (VAR_1->reg_num != 0xff) {
  int VAR_2 = FUNC_0(VAR_0,
          VAR_1->reg_num,
          VAR_1->value);
  if (VAR_2 < 0)
   return VAR_2;
  VAR_1++;
 }
 return 0;
}
