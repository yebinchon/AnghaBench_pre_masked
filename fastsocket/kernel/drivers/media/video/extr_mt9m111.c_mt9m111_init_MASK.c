
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m111 {int autoexposure; int context; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 struct mt9m111* FUNC_5 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_1)
{
 struct mt9m111 *VAR_2 = FUNC_5(VAR_1);
 int VAR_3;

 VAR_2->context = VAR_0;
 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  VAR_3 = FUNC_4(VAR_1, VAR_2->context);
 if (!VAR_3)
  VAR_3 = FUNC_3(VAR_1, VAR_2->autoexposure);
 if (VAR_3)
  FUNC_0(&VAR_1->dev, "mt9m111 init failed: %d\n", VAR_3);
 return VAR_3;
}
