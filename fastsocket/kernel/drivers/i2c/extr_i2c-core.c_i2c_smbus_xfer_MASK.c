
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union i2c_smbus_data {int dummy; } i2c_smbus_data ;
typedef int u8 ;
typedef int u16 ;
struct i2c_adapter {int retries; int bus_lock; scalar_t__ timeout; TYPE_1__* algo; } ;
typedef int s32 ;
struct TYPE_2__ {int (* smbus_xfer ) (struct i2c_adapter*,int ,unsigned short,char,int ,int,union i2c_smbus_data*) ;} ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (struct i2c_adapter*,int ,unsigned short,char,int ,int,union i2c_smbus_data*) ;
 unsigned long VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i2c_adapter*,int ,unsigned short,char,int ,int,union i2c_smbus_data*) ;
 scalar_t__ FUNC_4 (unsigned long,scalar_t__) ;

s32 FUNC_5(struct i2c_adapter *VAR_4, u16 VAR_5, unsigned short VAR_6,
     char VAR_7, u8 VAR_8, int VAR_9,
     union i2c_smbus_data *VAR_10)
{
 unsigned long VAR_11;
 int VAR_12;
 s32 VAR_13;

 VAR_6 &= VAR_2 | VAR_1;

 if (VAR_4->algo->smbus_xfer) {
  FUNC_1(&VAR_4->bus_lock);


  VAR_11 = VAR_3;
  for (VAR_13 = 0, VAR_12 = 0; VAR_12 <= VAR_4->retries; VAR_12++) {
   VAR_13 = VAR_4->algo->smbus_xfer(VAR_4, VAR_5, VAR_6,
       VAR_7, VAR_8,
       VAR_9, VAR_10);
   if (VAR_13 != -VAR_0)
    break;
   if (FUNC_4(VAR_3,
           VAR_11 + VAR_4->timeout))
    break;
  }
  FUNC_2(&VAR_4->bus_lock);
 } else
  VAR_13 = FUNC_0(VAR_4,VAR_5,VAR_6,VAR_7,
           VAR_8, VAR_9, VAR_10);

 return VAR_13;
}
