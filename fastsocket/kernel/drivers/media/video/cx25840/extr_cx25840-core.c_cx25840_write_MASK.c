
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int*,int) ;

int FUNC_1(struct i2c_client *VAR_0, u16 VAR_1, u8 VAR_2)
{
 u8 VAR_3[3];
 VAR_3[0] = VAR_1 >> 8;
 VAR_3[1] = VAR_1 & 0xff;
 VAR_3[2] = VAR_2;
 return FUNC_0(VAR_0, VAR_3, 3);
}
