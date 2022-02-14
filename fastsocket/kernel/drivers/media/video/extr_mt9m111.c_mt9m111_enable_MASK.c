
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt9m111 {int powered; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct mt9m111* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2)
{
 struct mt9m111 *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_4)
  VAR_3->powered = 1;
 return VAR_4;
}
