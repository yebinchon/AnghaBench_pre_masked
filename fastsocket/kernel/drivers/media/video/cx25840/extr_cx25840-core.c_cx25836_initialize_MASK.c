
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_0)
{


 FUNC_0(VAR_0, 0x000, ~0x01, 0x01);
 FUNC_0(VAR_0, 0x000, ~0x01, 0x00);

 FUNC_0(VAR_0, 0x15a, ~0x70, 0x00);

 FUNC_0(VAR_0, 0x15b, ~0x1e, 0x06);

 FUNC_0(VAR_0, 0x159, ~0x02, 0x02);

 FUNC_1(10);

 FUNC_0(VAR_0, 0x159, ~0x02, 0x00);

 FUNC_0(VAR_0, 0x159, ~0xc0, 0xc0);

 FUNC_0(VAR_0, 0x159, ~0x01, 0x00);
 FUNC_0(VAR_0, 0x159, ~0x01, 0x01);

 FUNC_0(VAR_0, 0x15b, ~0x1e, 0x10);
}
