
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m111 {int autoexposure; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct mt9m111* FUNC_2 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2, int VAR_3)
{
 struct mt9m111 *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 if (VAR_3)
  VAR_5 = FUNC_1(VAR_1, VAR_0);
 else
  VAR_5 = FUNC_0(VAR_1, VAR_0);

 if (!VAR_5)
  VAR_4->autoexposure = VAR_3;

 return VAR_5;
}
