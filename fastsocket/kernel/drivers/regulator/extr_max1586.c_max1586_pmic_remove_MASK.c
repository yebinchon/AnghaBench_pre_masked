
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct regulator_dev** FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int *) ;
 int FUNC_2 (struct regulator_dev**) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1)
{
 struct regulator_dev **VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 <= VAR_0; VAR_3++)
  if (VAR_2[VAR_3])
   FUNC_3(VAR_2[VAR_3]);
 FUNC_2(VAR_2);
 FUNC_1(VAR_1, ((void*)0));

 return 0;
}
