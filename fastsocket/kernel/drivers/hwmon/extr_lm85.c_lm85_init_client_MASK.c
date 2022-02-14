
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_2(VAR_1, VAR_0);
 if (!(VAR_2 & 0x01)) {
  FUNC_0(&VAR_1->dev, "Starting monitoring\n");
  FUNC_3(VAR_1, VAR_0, VAR_2 | 0x01);
 }


 if (VAR_2 & 0x02)
  FUNC_1(&VAR_1->dev, "Device configuration is locked\n");
 if (!(VAR_2 & 0x04))
  FUNC_1(&VAR_1->dev, "Device is not ready\n");
}
