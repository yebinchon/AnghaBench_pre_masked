
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int* block; } ;
typedef int u8 ;
struct i2c_client {int flags; int addr; int adapter; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,union i2c_smbus_data*) ;
 int FUNC_1 (int *,int*,int) ;

s32 FUNC_2(struct i2c_client *VAR_2, u8 VAR_3,
         u8 *VAR_4)
{
 union i2c_smbus_data VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2->adapter, VAR_2->addr, VAR_2->flags,
    VAR_1, VAR_3,
    VAR_0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_4, &VAR_5.block[1], VAR_5.block[0]);
 return VAR_5.block[0];
}
