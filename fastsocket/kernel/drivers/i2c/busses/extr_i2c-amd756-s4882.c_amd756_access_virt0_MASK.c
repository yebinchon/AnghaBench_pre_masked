
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int dummy; } ;
typedef int s32 ;
struct TYPE_4__ {TYPE_1__* algo; } ;
struct TYPE_3__ {int (* smbus_xfer ) (struct i2c_adapter*,int,unsigned short,char,int ,int,union i2c_smbus_data*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct i2c_adapter*,int,unsigned short,char,int ,int,union i2c_smbus_data*) ;

__attribute__((used)) static s32 FUNC_3(struct i2c_adapter * VAR_3, u16 VAR_4,
          unsigned short VAR_5, char VAR_6,
          u8 VAR_7, int VAR_8,
          union i2c_smbus_data * VAR_9)
{
 int VAR_10;


 if (VAR_4 == 0x4c || (VAR_4 & 0xfc) == 0x50 || (VAR_4 & 0xfc) == 0x30
  || VAR_4 == 0x18)
  return -VAR_0;

 FUNC_0(&VAR_1);

 VAR_10 = VAR_2.algo->smbus_xfer(VAR_3, VAR_4, VAR_5, VAR_6,
           VAR_7, VAR_8, VAR_9);

 FUNC_1(&VAR_1);

 return VAR_10;
}
