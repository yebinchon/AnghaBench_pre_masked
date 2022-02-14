
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_4)
{
 int VAR_5, VAR_6;


 FUNC_2(VAR_4, VAR_3, 5);


 VAR_5 = FUNC_1(VAR_4, VAR_0);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->dev, "Initialization failed!\n");
  return;
 }

 VAR_6 = VAR_5;
 VAR_5 &= ~VAR_1;

 if (VAR_5 != VAR_6)
  FUNC_2(VAR_4, VAR_2, VAR_5);
}
