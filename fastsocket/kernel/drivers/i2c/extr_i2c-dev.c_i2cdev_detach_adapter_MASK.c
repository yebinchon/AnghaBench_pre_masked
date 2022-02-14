
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_dev {int dev; } ;
struct i2c_adapter {int name; int nr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 struct i2c_dev* FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct i2c_dev*) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_3)
{
 struct i2c_dev *VAR_4;

 VAR_4 = FUNC_3(VAR_3->nr);
 if (!VAR_4)
  return 0;

 FUNC_2(VAR_4->dev, &VAR_1);
 FUNC_5(VAR_4);
 FUNC_1(VAR_2, FUNC_0(VAR_0, VAR_3->nr));

 FUNC_4("i2c-dev: adapter [%s] unregistered\n", VAR_3->name);
 return 0;
}
