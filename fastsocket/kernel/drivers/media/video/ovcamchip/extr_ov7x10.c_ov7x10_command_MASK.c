
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int FUNC_0 (int,int *,char*,unsigned int) ;
 int VAR_0 ;



 int FUNC_1 (struct i2c_client*,void*) ;
 int FUNC_2 (struct i2c_client*,void*) ;
 int FUNC_3 (struct i2c_client*,void*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1, unsigned int VAR_2, void *VAR_3)
{
 switch (VAR_2) {
 case 129:
  return FUNC_2(VAR_1, VAR_3);
 case 130:
  return FUNC_1(VAR_1, VAR_3);
 case 128:
  return FUNC_3(VAR_1, VAR_3);
 default:
  FUNC_0(2, &VAR_1->dev, "command not supported: %d", VAR_2);
  return -VAR_0;
 }
}
