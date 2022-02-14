
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcm825x_reg {scalar_t__ reg; scalar_t__ val; } ;
struct i2c_client {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2,
          const struct tcm825x_reg *VAR_3)
{
 int VAR_4;
 const struct tcm825x_reg *VAR_5 = VAR_3;

 while (!((VAR_5->reg == VAR_0)
   && (VAR_5->val == VAR_1))) {
  VAR_4 = FUNC_1(VAR_2, VAR_5->reg, VAR_5->val);
  if (VAR_4) {
   FUNC_0(&VAR_2->dev, "register writing failed\n");
   return VAR_4;
  }
  VAR_5++;
 }

 return 0;
}
