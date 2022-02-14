
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union i2c_smbus_data {int word; } ;
typedef int u8 ;
struct i2c_client {int flags; int addr; int adapter; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,union i2c_smbus_data*) ;

s32 FUNC_1(struct i2c_client *VAR_2, u8 VAR_3)
{
 union i2c_smbus_data VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2->adapter, VAR_2->addr, VAR_2->flags,
    VAR_0, VAR_3,
    VAR_1, &VAR_4);
 return (VAR_5 < 0) ? VAR_5 : VAR_4.word;
}
