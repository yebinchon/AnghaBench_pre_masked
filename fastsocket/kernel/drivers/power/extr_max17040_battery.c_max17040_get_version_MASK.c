
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 VAR_4 = FUNC_1(VAR_2, VAR_0);

 FUNC_0(&VAR_2->dev, "MAX17040 Fuel-Gauge Ver %d%d\n", VAR_3, VAR_4);
}
