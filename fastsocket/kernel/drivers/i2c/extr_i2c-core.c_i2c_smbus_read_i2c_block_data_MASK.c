
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int* block; } ;
typedef scalar_t__ u8 ;
struct i2c_client {int flags; int addr; int adapter; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,scalar_t__,int ,union i2c_smbus_data*) ;
 int FUNC_1 (scalar_t__*,int*,int) ;

s32 FUNC_2(struct i2c_client *VAR_3, u8 VAR_4,
      u8 VAR_5, u8 *VAR_6)
{
 union i2c_smbus_data VAR_7;
 int VAR_8;

 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;
 VAR_7.block[0] = VAR_5;
 VAR_8 = FUNC_0(VAR_3->adapter, VAR_3->addr, VAR_3->flags,
    VAR_2, VAR_4,
    VAR_1, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_1(VAR_6, &VAR_7.block[1], VAR_7.block[0]);
 return VAR_7.block[0];
}
